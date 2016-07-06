<?php
/**
 * @file
 * ox_podcasts_feeds.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function ox_podcasts_feeds_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'contributor_importer-xpathparser_15-find_replace_regex';
  $feeds_tamper->importer = 'contributor_importer';
  $feeds_tamper->source = 'xpathparser:15';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '/(staged-fred\\.podcasts\\.ox\\.ac\\.uk|ives\\.oucs\\.ox\\.ac\\.uk\\/drupal)/',
    'replace' => 'mediapub.it.ox.ac.uk',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Tweak staged & dev GUIDs';
  $export['contributor_importer-xpathparser_15-find_replace_regex'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'episode_importer-xpathparser_1-find_replace_regex';
  $feeds_tamper->importer = 'episode_importer';
  $feeds_tamper->source = 'xpathparser:1';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '/(staged-fred\\.podcasts\\.ox\\.ac\\.uk|ives\\.oucs\\.ox\\.ac\\.uk\\/drupal)/',
    'replace' => 'mediapub.it.ox.ac.uk',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Tweak staged & dev GUIDs';
  $export['episode_importer-xpathparser_1-find_replace_regex'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'series_importer-xpathparser_0-find_replace_regex';
  $feeds_tamper->importer = 'series_importer';
  $feeds_tamper->source = 'xpathparser:0';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '/(staged-fred\\.podcasts\\.ox\\.ac\\.uk|ives\\.oucs\\.ox\\.ac\\.uk\\/drupal)/',
    'replace' => 'mediapub.it.ox.ac.uk',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Tweak staged & dev GUIDs';
  $export['series_importer-xpathparser_0-find_replace_regex'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'unit_importer-xpathparser_15-find_replace_regex';
  $feeds_tamper->importer = 'unit_importer';
  $feeds_tamper->source = 'xpathparser:15';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '/(staged-fred\\.podcasts\\.ox\\.ac\\.uk|ives\\.oucs\\.ox\\.ac\\.uk\\/drupal)/',
    'replace' => 'mediapub.it.ox.ac.uk',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Tweak staged & dev GUIDs';
  $export['unit_importer-xpathparser_15-find_replace_regex'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'unit_importer-xpathparser_16-find_replace_regex';
  $feeds_tamper->importer = 'unit_importer';
  $feeds_tamper->source = 'xpathparser:16';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '/(staged-fred\\.podcasts\\.ox\\.ac\\.uk|ives\\.oucs\\.ox\\.ac\\.uk\\/drupal)/',
    'replace' => 'mediapub.it.ox.ac.uk',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Tweak staged & dev GUIDs';
  $export['unit_importer-xpathparser_16-find_replace_regex'] = $feeds_tamper;

  return $export;
}
