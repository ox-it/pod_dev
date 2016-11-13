<?php
/**
 * @file
 * ox_podcasts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ox_podcasts_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_type") {
    return array("version" => "1");
  }
  if ($module == "jw_player" && $api == "jw_player_presets") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ox_podcasts_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ox_podcasts_node_info() {
  $items = array(
    'episode' => array(
      'name' => t('Episode'),
      'base' => 'node_content',
      'description' => t('An episode node is an individual podcast entry, associated with a single media file.'),
      'has_title' => '1',
      'title_label' => t('Episode Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'reference' => array(
      'name' => t('Reference'),
      'base' => 'node_content',
      'description' => t('Reference nodes are used to promote series, people and units on areas such as the front page and the directory pages.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
