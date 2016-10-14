<?php
/**
 * @file
 * ox_searchapi_solr.current_search.inc
 */

/**
 * Implements hook_current_search_default_items().
 */
function ox_searchapi_solr_current_search_default_items() {
  $export = array();

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->name = 'episode_current_search_solr';
  $item->label = 'Episode Current Search Solr';
  $item->settings = array(
    'items' => array(
      'episode_count' => array(
        'id' => 'text',
        'label' => 'Episode Count',
        'text' => 'Search found [facetapi_results:result-count] Item',
        'plural' => 1,
        'text_plural' => 'Results: [facetapi_results:result-count] Items   |    Page [facetapi_results:page-number] out of [facetapi_results:page-total]',
        'plural_condition' => 'facetapi_results:result-count',
        'wrapper' => 1,
        'element' => 'h3',
        'css' => 0,
        'classes' => '',
        'weight' => '-50',
      ),
      'episode_active_items_links' => array(
        'id' => 'active_links',
        'label' => 'Episode Active Items Links',
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
      'empty_searches' => '1',
    ),
  );
  $export['episode_current_search_solr'] = $item;

  return $export;
}
