<?php
/**
 * @file
 * Module for listing existing employees and their task statistics.
 */

/**
 * Function to get employees list with tasks statistics.
 */
function ai_employees_list_get_list() {
  $employees_ids = array_keys(ai_employees_list_get_employees_or_tasks('employees'));
  $employees_nodes = node_load_multiple($employees_ids);
  $all_tasks = count(ai_employees_list_get_employees_or_tasks('tasks'));

  $employees_list = array();
  foreach ($employees_nodes as $employee_node) {
    $done = ai_employees_list_get_tasks_quantity($employee_node->nid,
      DC_CHANGER_TASK_STATUS_DONE);
    $in_progress = ai_employees_list_get_tasks_quantity($employee_node->nid,
      DC_CHANGER_TASK_STATUS_IN_PROGRESS);

    $employees_list[$employee_node->title]['done'] = $done;
    $employees_list[$employee_node->title]['in_progress'] = $in_progress;
    $employees_list[$employee_node->title]['all'] = $all_tasks;
    $employees_list[$employee_node->title]['percentage'] = number_format($done * 100 / $all_tasks);
  }

  return $employees_list;
}

/**
 * Function to get all employees or tasks, depending on node $type.
 */
function ai_employees_list_get_employees_or_tasks($type) {
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'node');
  $query->propertyCondition('type', $type);
  $result = $query->execute();

  return $result['node'];
}

/**
 * Function to get done or in progress tasks quantity depending on status.
 */
function ai_employees_list_get_tasks_quantity($employee_id, $status) {
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'node');
  $query->propertyCondition('type', 'assigned_tasks');
  $query->fieldCondition('field_nid_employee', 'target_id', $employee_id);
  $query->fieldCondition('field_status', 'tid', $status);
  $result = $query->execute();
  if (!empty($result)) {
    $quantity = $result['node'];
  }
  else {
    $quantity = $result;
  }
  return count($quantity);
}

/**
 * Create table header and rows.
 */
function ai_employees_list_prepare_list($lists) {
  $header = array(
    'Employee',
    'In Progress',
    'Done',
    'Total',
    'Employee\'s progress',
  );
  $rows = array();
  foreach ($lists as $employee => $list) {
    $rows[] = array(
      'data' => array(
        check_plain($employee),
        check_plain($list['in_progress']),
        check_plain($list['done']),
        check_plain($list['all']),
        theme('cool_progressbar', array('percentage' => check_plain($list['percentage']))),
      ),
    );
  }
  $table_settings = array('header' => $header, 'rows' => $rows);
  return $table_settings;
}
