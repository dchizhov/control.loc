<?php
/**
 * @file
 * The primary PHP file for this theme.
 */

function dc_bootstrap_preprocess_views_view_unformatted(&$vars) {
  if ($vars['view']->name == 'all_tasks') {
    drupal_add_js(drupal_get_path('theme','dc_bootstrap').'/js/dc_bootstrap.js');
    $query = db_select('node', 'n');
    $query->fields('fdfnt', array('field_nid_task_target_id'));
    $query->fields('fdfs', array('field_status_tid'));
    $query->innerJoin('field_data_field_nid_employee', 'fdfne', 'n.nid = fdfne.entity_id');
    $query->innerJoin('field_data_field_nid_task', 'fdfnt', 'n.nid = fdfnt.entity_id');
    $query->innerJoin('field_data_field_status','fdfs','n.nid = fdfs.entity_id');
    $query->condition('type', 'assigned_tasks');
    $query->condition('fdfne.field_nid_employee_target_id', arg(1));
    $tasks = $query->execute()->fetchAll();

    foreach ($vars['view']->result as $key => $item) {
      foreach ($tasks as $task) {
        if (isset($task->field_status_tid)) {
          if ($item->nid == $task->field_nid_task_target_id && $task->field_status_tid == 1) {
            $vars['classes_array'][$key] = 'col-lg-3 panel panel-default assigned assign_done';
          }
          if ($item->nid == $task->field_nid_task_target_id && $task->field_status_tid == 2) {
            $vars['classes_array'][$key] = 'col-lg-3 panel panel-default assigned assign_in_progress';
          }
        }
      }
    }
  }
}
