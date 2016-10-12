<?php
/**
 * @file
 * ox_searchapi_elastic.elasticsearch_connector_defaults.inc
 */

/**
 * Implements hook_default_elasticsearch_connector_cluster().
 */
function ox_searchapi_elastic_default_elasticsearch_connector_cluster() {
  $export = array();

  $elasticsearch_connector_cluster = new stdClass();
  $elasticsearch_connector_cluster->disabled = FALSE; /* Edit this to true to make a default elasticsearch_connector_cluster disabled initially */
  $elasticsearch_connector_cluster->api_version = 1;
  $elasticsearch_connector_cluster->cluster_id = 'elasticsearch_episodes';
  $elasticsearch_connector_cluster->name = 'elasticsearch-episodes';
  $elasticsearch_connector_cluster->url = 'http://192.168.88.88:9200/';
  $elasticsearch_connector_cluster->status = 1;
  $elasticsearch_connector_cluster->options = array(
    'multiple_nodes_connection' => 0,
    'use_authentication' => 0,
    'authentication_type' => 'Digest',
    'username' => '',
    'password' => '',
    'timeout' => '3',
  );
  $export['elasticsearch_episodes'] = $elasticsearch_connector_cluster;

  return $export;
}
