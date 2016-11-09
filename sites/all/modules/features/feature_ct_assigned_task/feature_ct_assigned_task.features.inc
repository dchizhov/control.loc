<?php
/**
 * @file
 * feature_ct_assigned_task.features.inc
 */

/**
 * Implements hook_node_info().
 */
function feature_ct_assigned_task_node_info() {
  $items = array(
    'assigned_tasks' => array(
      'name' => t('Assigned tasks'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Assigned tasks'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
