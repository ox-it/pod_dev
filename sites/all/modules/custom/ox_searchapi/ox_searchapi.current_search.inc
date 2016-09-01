<?php
/**
 * @file
 * ox_searchapi.current_search.inc
 */

/**
 * Implements hook_current_search_default_items().
 */
function ox_searchapi_current_search_default_items() {
  $export = array();

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->name = 'episode_current_search';
  $item->label = 'Episode Current Search';
  $item->settings = array(
    'items' => array(
      'episode_active_items' => array(
        'id' => 'active_links',
        'label' => 'Episode Active Items',
        'pattern' => '[facetapi_active:active-value]',
        'keys' => 1,
        'keys_whole' => 1,
        'hide_facets' => 0,
        'css' => 0,
        'classes' => '',
        'nofollow' => 1,
        'arguments' => '',
        'search_param' => 'search_api_views_fulltext',
        'weight' => '0',
      ),
    ),
    'advanced' => array(
      'empty_searches' => '3',
    ),
  );
  $export['episode_current_search'] = $item;

  return $export;
}
