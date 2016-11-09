<?php
/**
 * @file
 * feature_ct_task.features.inc
 */

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
