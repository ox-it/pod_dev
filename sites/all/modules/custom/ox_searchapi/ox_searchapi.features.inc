<?php
/**
 * @file
 * ox_searchapi.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ox_searchapi_ctools_plugin_api($module = NULL, $api = NULL) {
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
function ox_searchapi_default_search_api_index() {
  $items = array();
  $items['episode_index'] = entity_import('search_api_index', '{
    "name" : "Episode Index",
    "machine_name" : "episode_index",
    "description" : null,
    "server" : "episode_server_db",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [ "episode" ] },
      "index_directly" : 0,
      "cron_limit" : "100",
      "fields" : {
        "body:value" : { "type" : "text" },
        "field_episode_description_long:value" : { "type" : "text" },
        "field_itunes_u_category" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_itunes_u_category:name" : { "type" : "list\\u003Cstring\\u003E" },
        "field_keywords" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_keywords:name" : { "type" : "list\\u003Cstring\\u003E" },
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
        "search_api_url" : { "type" : "uri" },
        "title" : { "type" : "text" },
        "title_az_glossary" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_add_url" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_hierarchy" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "field_itunes_u_category:parent" : "field_itunes_u_category:parent",
              "field_itunes_u_category:parents_all" : "field_itunes_u_category:parents_all"
            }
          }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [] }
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
              "field_people" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "title_az_glossary" : true,
              "field_itunes_u_category" : true,
              "field_keywords" : true,
              "field_people" : true
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
              "field_people" : true
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
              "field_itunes_u_category" : true,
              "field_keywords" : true,
              "field_people" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc\\r\\nof\\r\\n"
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
function ox_searchapi_default_search_api_server() {
  $items = array();
  $items['episode_server_db'] = entity_import('search_api_server', '{
    "name" : "Episode Server DB",
    "machine_name" : "episode_server_db",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "1",
      "partial_matches" : 0,
      "indexes" : { "episode_index" : {
          "title" : {
            "table" : "search_api_db_episode_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "title_az_glossary" : {
            "table" : "search_api_db_episode_index",
            "column" : "title_az_glossary",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_itunes_u_category" : {
            "table" : "search_api_db_episode_index_field_itunes_u_category",
            "column" : "field_itunes_u_category",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_keywords" : {
            "table" : "search_api_db_episode_index_field_keywords",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_people" : {
            "table" : "search_api_db_episode_index_field_people",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_series" : {
            "table" : "search_api_db_episode_index_field_series",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_unit" : {
            "table" : "search_api_db_episode_index_field_unit",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_episode_index",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_media_files:file:type" : {
            "table" : "search_api_db_episode_index_field_media_files_file_type",
            "column" : "value",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "field_episode_description_long:value" : {
            "table" : "search_api_db_episode_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_series:name" : {
            "table" : "search_api_db_episode_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_unit:name" : {
            "table" : "search_api_db_episode_index_field_unit_name",
            "column" : "value",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "field_keywords:name" : {
            "table" : "search_api_db_episode_index_field_keywords_name",
            "column" : "value",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "field_itunes_u_category:name" : {
            "table" : "search_api_db_episode_index_field_itunes_u_category_name",
            "column" : "value",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "body:value" : {
            "table" : "search_api_db_episode_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_unit:field_unit" : {
            "table" : "search_api_db_episode_index_field_unit_field_unit",
            "column" : "value",
            "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_series:field_unit" : {
            "table" : "search_api_db_episode_index_field_series_field_unit",
            "column" : "value",
            "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
            "boost" : "1.0"
          },
          "search_api_url" : {
            "table" : "search_api_db_episode_index",
            "column" : "search_api_url",
            "type" : "uri",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
