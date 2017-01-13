<?php
/**
 * @file
 * feature_t_task_topic.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_t_task_topic_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
