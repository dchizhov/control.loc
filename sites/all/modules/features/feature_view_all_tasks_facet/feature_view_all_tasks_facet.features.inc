<?php
/**
 * @file
 * feature_view_all_tasks_facet.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_view_all_tasks_facet_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_view_all_tasks_facet_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function feature_view_all_tasks_facet_default_search_api_index() {
  $items = array();
  $items['tasks'] = entity_import('search_api_index', '{
    "name" : "Tasks",
    "machine_name" : "tasks",
    "description" : "Index for Tasks CT ",
    "server" : "task_search_server",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [ "tasks" ] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "field_date_of_completion" : { "type" : "date" },
        "field_nid_employee" : { "type" : "integer", "entity_type" : "node" },
        "field_nid_task" : { "type" : "integer", "entity_type" : "node" },
        "field_status" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_task_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_task_topic" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_task_topic:description" : { "type" : "text" },
        "field_task_topic:name" : { "type" : "text" },
        "field_task_topic:node_count" : { "type" : "integer" },
        "field_task_topic:parent" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_task_topic:parents_all" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_task_topic:url" : { "type" : "uri" },
        "field_task_topic:vocabulary" : { "type" : "integer", "entity_type" : "taxonomy_vocabulary" },
        "field_task_topic:weight" : { "type" : "integer" },
        "search_api_language" : { "type" : "string" },
        "title" : { "type" : "text" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "field_task_topic:name" : true,
              "field_task_topic:description" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_task_topic:name" : true,
              "field_task_topic:description" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_task_topic:name" : true,
              "field_task_topic:description" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_task_topic:name" : true,
              "field_task_topic:description" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
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
function feature_view_all_tasks_facet_default_search_api_server() {
  $items = array();
  $items['task_search_server'] = entity_import('search_api_server', '{
    "name" : "Task Search Server",
    "machine_name" : "task_search_server",
    "description" : "Server specially for all tasks page to filter tasks by topic",
    "class" : "search_api_solr_service",
    "options" : {
      "clean_ids" : true,
      "site_hash" : true,
      "scheme" : "http",
      "host" : "localhost",
      "port" : "8983",
      "path" : "\\/solr",
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
