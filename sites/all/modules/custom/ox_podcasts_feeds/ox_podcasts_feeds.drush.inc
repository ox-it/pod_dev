<?php

/**
 * @file
 *
 * Define a custom Drush command to import all feeds from Mediapub in order.
 */

/**
 * Limit on the number of times a single importer can be forced to run again.
 */
define('OX_PODCASTS_FEEDS_RERUN_LIMIT', 3);

/**
 * Implements hook_drush_help().
 */
function ox_podcasts_feeds_drush_help($command) {
  switch ($command) {
    case 'drush:import-all-feeds':
      return dt('Import all XML feeds from Mediapub');
    case 'drush:delete-all-items':
      return dt('Delete everything imported from Mediapub');
    case 'drush:set-feed-base':
      return dt('Reset feed importer source URLs');
  }
}

/**
 * Implements hook_drush_command().
 */
function ox_podcasts_feeds_drush_command() {
  $items = array();

  $items['import-all-feeds'] = array(
    'description' => dt('Import all XML feeds from Mediapub'),
  );

  $items['delete-all-items'] = array(
    'description' => dt('Delete everything imported from Mediapub'),
  );

  $items['set-feed-base'] = array(
    'description' => dt('Reset feed importer source URLs'),
    'arguments' => array('base-url' => 'Mediapub base URL.  Feed source URLs will be constructed by appending "/feeds/static/series.xml", "/feeds/static/episode.xml", etc.  If omitted, the default is "http://mediapub.it.ox.ac.uk".'),
  );

  return $items;
}

/**
 * Callback function for drush import-all-feeds
 */
function drush_ox_podcasts_feeds_import_all_feeds() {
  $importers = _ox_podcasts_feeds_importer_order();
  $total = count($importers);
  $start_time = time();

  foreach ($importers as $index => $importer_name) {
    $rerun_count = 0;
    do {
      if (++$rerun_count == 1) {
        drush_log(sprintf('[%d/%d] Starting importer %s',
            $index + 1, $total, $importer_name
          ), 'status'
        );
      }
      else {
        drush_log(sprintf('[%d/%d] Re-running importer %s (pass %d of max %d)',
            $index + 1, $total, $importer_name,
            $rerun_count, OX_PODCASTS_FEEDS_RERUN_LIMIT
          ), 'status'
        );
      }

      // Remove this importer from the list of feeds to re-import.  It will be
      // added to it if necessary by ox_podcasts_feeds_presave().
      db_delete('ox_podcasts_feeds_rerun')->condition('id', $importer_name)->execute();

      // Forcibly break any locks on this importer (adapted from
      // feeds_unlock_tab_form_submit().)
      db_update('feeds_source')
        ->condition('id', $importer_name)
        ->condition('feed_nid', 0)
        ->fields(array('state' => FALSE))
        ->execute();

      // Run the importer
      drush_invoke_process('@self', 'feeds-import', array($importer_name));

      // Check whether the feed needs to be imported again
      $rerun = db_query("SELECT COUNT(*) FROM {ox_podcasts_feeds_rerun} WHERE id = :id", array(':id' => $importer_name))->fetchField();
    } while($rerun && $rerun_count <= OX_PODCASTS_FEEDS_RERUN_LIMIT);
  }

  $elapsed = time() - $start_time;
  drush_log(sprintf('Importer run finished after %d min %d sec',
      (int) ($elapsed / 60),
      (int) ($elapsed % 60)
    ), 'status'
  );
}

/**
 * Callback function for drush delete-all-items
 */
function drush_ox_podcasts_feeds_delete_all_items () {
  $importers = _ox_podcasts_feeds_importer_order();

  $total = count($importers);
  $start_time = time();
  foreach ($importers as $index => $importer_name) {
    drush_log(sprintf('[%d/%d] Deleting items from importer %s',
        $index + 1, $total, $importer_name
      ), 'status'
    );
    drush_invoke_process('@self', 'feeds-clear', array($importer_name));
  }

  // Clean up leftovers
 _ox_podcasts_bulk_delete('node', 'episode');
  foreach (array('units', 'people', 'keywords', 'series') as $vocab) {
    _ox_podcasts_bulk_delete('taxonomy_term', $vocab);
  }

  // Clean up feeds_item table
  db_query(
    'DELETE FROM feeds_item WHERE id IN (:ids)',
    array(':ids' => $importers)
  );

  $elapsed = time() - $start_time;
  drush_log(sprintf('Deletions finished after %d min %d sec',
      (int) ($elapsed / 60),
      (int) ($elapsed % 60)
    ), 'status'
  );
}

function _ox_podcasts_bulk_delete($entity_type, $type) {
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', $entity_type);
  switch ($entity_type) {
    case 'node':
      $query->propertyCondition('type', $type);
      break;
    case 'taxonomy_term':
      $vocabulary = taxonomy_vocabulary_machine_name_load($type);
      $query->propertyCondition('vid', $vocabulary->vid);
      break;
  }
  $result = $query->execute();

  if (empty($result[$entity_type])) return;

  drush_log(sprintf(
      'Deleting %d leftover %ss of type \'%s\'',
      count($result[$entity_type]), $entity_type, $type
    ), 'status'
  );

  $count = 0;
  $total = count($result[$entity_type]);
  foreach ($result[$entity_type] as $id => $item) {
    entity_delete($entity_type, $id);
    $count++;
    if ($count % 10 == 0 || $count == $total) {
      drush_log(sprintf('Deleted %d/%d (%d%%)', $count, $total, 100 * ($count / $total)), 'status');
    }
  }
}

/**
 * Callback function for drush set-feed-base
 */
function drush_ox_podcasts_feeds_set_feed_base($base_url = 'http://mediapub.it.ox.ac.uk') {
  $base_url = preg_replace('(/$)', '', $base_url);

  $urls = array(
    'unit_importer'          => $base_url . '/feeds/static/units.xml',
    'contributor_importer'   => $base_url . '/feeds/static/contributors.xml',
    'series_importer'        => $base_url . '/feeds/static/series.xml',
    'file_audio_importer'    => $base_url . '/feeds/static/files.xml',
    'file_video_importer'    => $base_url . '/feeds/static/files.xml',
    'file_document_importer' => $base_url . '/feeds/static/files.xml',
    'episode_importer'       => $base_url . '/feeds/static/episodes.xml'
  );

  foreach ($urls as $importer => $url) {
    $source = feeds_source($importer, 0);
    $config = $source->getConfig();
    $config['FeedsHTTPFetcher']['source'] = $url;
    $source->setConfig($config);
    $source->save();
    drupal_set_message(t('Set import URL of @importer to @url', array(
          '@importer' => $importer,
          '@url' => $url,
          )));
  }
}
