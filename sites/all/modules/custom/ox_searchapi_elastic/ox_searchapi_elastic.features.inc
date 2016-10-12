<?php
/**
 * @file
 * ox_searchapi_elastic.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ox_searchapi_elastic_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "elasticsearch_connector" && $api == "elasticsearch_connector_defaults") {
    return array("version" => "1");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_search_api_server().
 */
function ox_searchapi_elastic_default_search_api_server() {
  $items = array();
  $items['elastic_search_server'] = entity_import('search_api_server', '{
    "name" : "Elastic Search Server",
    "machine_name" : "elastic_search_server",
    "description" : "",
    "class" : "search_api_elasticsearch_connector",
    "options" : { "cluster" : "elasticsearch_episodes", "facet_limit" : "300" },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
