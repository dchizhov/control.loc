<?php
/**
 * @file
 * feature_ct_task.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_ct_task_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function feature_ct_task_node_info() {
  $items = array(
    'tasks' => array(
      'name' => t('Tasks'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
