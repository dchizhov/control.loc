<?php
/**
 * @file
 * feature_ct_employee.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_ct_employee_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function feature_ct_employee_node_info() {
  $items = array(
    'employees' => array(
      'name' => t('Employees'),
      'base' => 'node_content',
      'description' => t('Employees in complany'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
