<?php
/**
 * @file
 * ox_searchapi_solr.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ox_searchapi_solr_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "current_search" && $api == "current_search") {
    return array("version" => "1");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_search_api_index().
 */
function ox_searchapi_solr_default_search_api_index() {
  $items = array();
  $items['episode_index_solr'] = entity_import('search_api_index', '{
    "name" : "Episode Index Solr",
    "machine_name" : "episode_index_solr",
    "description" : null,
    "server" : "episode_solr_server",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [ "episode" ] },
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "body:value" : { "type" : "text" },
        "created" : { "type" : "date" },
        "field_episode_description_long:value" : { "type" : "text" },
        "field_itunes_u_category" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_itunes_u_category:name" : { "type" : "list\\u003Cstring\\u003E" },
        "field_keywords" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_keywords:name" : { "type" : "list\\u003Cstring\\u003E" },
        "field_licence" : { "type" : "string" },
        "field_media_files:file:type" : { "type" : "list\\u003Cstring\\u003E" },
        "field_people" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_series" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_series:field_unit" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "field_series:name" : { "type" : "list\\u003Ctext\\u003E" },
        "field_unit" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_unit:field_unit" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "field_unit:name" : { "type" : "list\\u003Cstring\\u003E" },
        "search_api_language" : { "type" : "string" },
        "title" : { "type" : "text" },
        "title_az_glossary" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "field_itunes_u_category:parent" : "field_itunes_u_category:parent",
              "field_itunes_u_category:parents_all" : "field_itunes_u_category:parents_all"
            }
          }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "title_az_glossary" : true,
              "field_itunes_u_category" : true,
              "field_keywords" : true,
              "field_people" : true,
              "body:value" : true,
              "field_episode_description_long:value" : true,
              "field_series:name" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "body:value" : true,
              "field_episode_description_long:value" : true,
              "field_series:name" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_transliteration" : {
          "status" : 1,
          "weight" : "15",
          "settings" : { "fields" : {
              "title" : true,
              "title_az_glossary" : true,
              "field_itunes_u_category" : true,
              "field_keywords" : true,
              "field_people" : true,
              "body:value" : true,
              "field_episode_description_long:value" : true,
              "field_series:name" : true
            }
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "title" : true,
              "body:value" : true,
              "field_episode_description_long:value" : true,
              "field_series:name" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 1,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "title" : true,
              "body:value" : true,
              "field_episode_description_long:value" : true,
              "field_series:name" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 1,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cmark\\u003E",
            "suffix" : "\\u003C\\/mark\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function ox_searchapi_solr_default_search_api_server() {
  $items = array();
  $items['episode_solr_server'] = entity_import('search_api_server', '{
    "name" : "Episode Solr Server",
    "machine_name" : "episode_solr_server",
    "description" : "",
    "class" : "search_api_solr_service",
    "options" : {
      "clean_ids" : true,
      "site_hash" : true,
      "scheme" : "http",
      "host" : "pod-dev.dev",
      "port" : "8983",
      "path" : "\\/solr\\/pod-dev",
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "skip_schema_check" : 0,
      "solr_version" : "",
      "http_method" : "AUTO",
      "log_query" : 0,
      "log_response" : 0
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
