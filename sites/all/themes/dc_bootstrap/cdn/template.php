<?php
/**
 * @file
 * The primary PHP file for this theme.
 */

function dc_bootstrap_preprocess_views_view_unformatted(&$vars) {
  drupal_add_js(drupal_get_path('theme', 'dc_bootstrap') . '/js/dc_bootstrap.js');

  $statuses = _dc_changer_get_statuses();
  $tasks = _dc_bootstrap_get_assigned_tasks_by_employee();

  foreach ($vars['view']->result as $key => $item) {
    foreach ($tasks as $task) {
      if (isset($task->field_status_tid)) {
        if ($item->nid == $task->field_nid_task_target_id && $task->field_status_tid == $statuses['status_done']->tid) {
          $vars['classes_array'][$key] = 'col-lg-3 panel panel-default assigned assign_done';
        }
        if ($item->nid == $task->field_nid_task_target_id && $task->field_status_tid == $statuses['status_in_progress']->tid) {
          $vars['classes_array'][$key] = 'col-lg-3 panel panel-default assigned assign_in_progress';
        }
        if ($item->nid == $task->field_nid_task_target_id && $task->field_status_tid == $statuses['status_not_done']->tid) {
          $vars['classes_array'][$key] = 'col-lg-3 panel panel-default assigned assign_not_done';
        }
      }
    }
  }
}

function dc_bootstrap_preprocess_views_view_table(&$vars) {
  $statuses = _dc_changer_get_statuses();
  $tasks = _dc_bootstrap_get_assigned_tasks_by_employee();

  foreach ($vars['view']->result as $key => $item) {
    foreach ($tasks as $task) {
      if (isset($task->field_status_tid) && isset($vars['row_classes'][$key])) {
        if ($item->nid == $task->field_nid_task_target_id && $task->field_status_tid == $statuses['status_done']->tid) {
          $vars['row_classes'][$key][] = 'table_assign_done';
        }
        if ($item->nid == $task->field_nid_task_target_id && $task->field_status_tid == $statuses['status_in_progress']->tid) {
          $vars['row_classes'][$key][] = 'table_assign_in_progress';
        }
        if ($item->nid == $task->field_nid_task_target_id && $task->field_status_tid == $statuses['status_not_done']->tid) {
          $vars['row_classes'][$key][] = 'table_assign_not_done';
        }
      }
    }
  }
}

function _dc_bootstrap_get_assigned_tasks_by_employee() {
  $nid_employee = arg(1);

  $query = db_select('node', 'n');
  $query->fields('fdfnt', array('field_nid_task_target_id'));
  $query->fields('fdfs', array('field_status_tid'));
  $query->innerJoin('field_data_field_nid_employee', 'fdfne', 'n.nid = fdfne.entity_id');
  $query->innerJoin('field_data_field_nid_task', 'fdfnt', 'n.nid = fdfnt.entity_id');
  $query->innerJoin('field_data_field_status', 'fdfs', 'n.nid = fdfs.entity_id');
  $query->condition('type', 'assigned_tasks');
  $query->condition('fdfne.field_nid_employee_target_id', $nid_employee);
  $tasks = $query->execute()->fetchAll();

  return $tasks;
}
