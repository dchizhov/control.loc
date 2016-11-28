<?php
/**
 * @file
 * Module for listing existing employees and their task statistics.
 */

/**
 * Function to get employees list with tasks statistics.
 */
function ai_employees_list_get_list() {
  $employees_ids = ai_employees_list_get_entity();
  $employees_nodes = node_load_multiple($employees_ids);

  $employees_list = array();
  foreach ($employees_nodes as $employee_node) {
    $employees_nodes_nid = $employee_node->nid;
    $done = ai_employees_list_get_entity($employees_nodes_nid, AI_EMPLOYEES_LIST_STATUS_DONE);
    $in_progress = ai_employees_list_get_entity($employees_nodes_nid, AI_EMPLOYEES_LIST_STATUS_IN_PROGRESS);

    $employees_list[$employee_node->title]['done'] = count($done);
    $employees_list[$employee_node->title]['in_progress'] = count($in_progress);
    $employees_list[$employee_node->title]['all'] = count($done) + count($in_progress);
  }

  return $employees_list;
}

/**
 * Function to get all entities.
 *
 * If $employee_id = FALSE, function returns array of employees node ids.
 * If $employee_id has some value, function returns array of assigned tasks,
 * depending on tasks status and employee.
 */
function ai_employees_list_get_entity($employee_id = FALSE, $status = AI_EMPLOYEES_LIST_STATUS_DONE) {
  $query = new EntityFieldQuery();
  if ($employee_id) {
    $query->entityCondition('entity_type', 'node');
    $query->propertyCondition('type', 'assigned_tasks');
    $query->fieldCondition('field_nid_employee', 'target_id', $employee_id);
    $query->fieldCondition('field_status', 'tid', $status);
    $result = $query->execute();
    if (!empty($result)) {
      $entity = $result['node'];
    }
    else {
      $entity = $result;
    }
  }
  else {
    $query->entityCondition('entity_type', 'node');
    $query->propertyCondition('type', 'employees');
    $result = $query->execute();
    $entity = array_keys($result['node']);
  }

  return $entity;
}

/**
 * Create table header and rows.
 */
function ai_employees_list_prepare_list($lists) {
  $header = array(
    'Employee',
    'Done',
    'In Progress',
    'Total',
  );
  $rows = array();
  foreach ($lists as $employee => $list) {
    $rows[] = array(
      'data' => array(
        check_plain($employee),
        check_plain($list['done']),
        check_plain($list['in_progress']),
        check_plain($list['all']),
      ),
    );
  }
  $table_settings = array('header' => $header, 'rows' => $rows);
  return $table_settings;
}
