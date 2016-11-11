<?php
/**
 * @file
 * feature_page_all_tasks.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_page_all_tasks_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
