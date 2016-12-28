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
    $done = ai_employees_list_get_tasks_quantity($employee_node->nid, DC_CHANGER_TASK_STATUS_DONE);
    $in_progress = ai_employees_list_get_tasks_quantity($employee_node->nid, DC_CHANGER_TASK_STATUS_IN_PROGRESS);
    $spent_time = ai_employees_list_get_spent_time_list($employee_node->nid);

    $employees_list[] = array(
      'status' => $employee_node->status,
      'name' => l(check_plain($employee_node->title), 'node/' . $employee_node->nid, array()),
      'done' => $done,
      'in_progress' => $in_progress,
      'all' => $all_tasks,
      'percentage' => !empty($all_tasks) ? number_format($done * 100 / $all_tasks) : 0,
      'spent_time' => $spent_time['time'],
    );
  }

  $default_sort_criterion = array();
  foreach ($employees_list as $list) {
    $default_sort_criterion[] = $list['done'];
  }
  array_multisort($default_sort_criterion, SORT_DESC, $employees_list);

  return $employees_list;
}

/**
 * Query to DB. Return List of spent time.
 */
function ai_employees_list_get_spent_time_list($employee_target_id) {
  $query = db_select('field_data_field_date_of_completion', 'fdfdoc');
  $query->innerJoin('field_data_field_nid_employee', 'fdfne', 'fdfne.entity_id = fdfdoc.entity_id');
  $query->fields('fdfdoc', array('field_date_of_completion_value'));
  $query->condition('fdfne.field_nid_employee_target_id', $employee_target_id);

  return ai_employees_list_sum_spent_time_list($query->execute()->fetchall());
}

/**
 * Sum spent time employees
 */
function ai_employees_list_sum_spent_time_list($result) {
  $result['time'] = 0;
  foreach ($result as $item) {
    if (isset($item->field_date_of_completion_value)) {
      $time = explode(':', $item->field_date_of_completion_value);
      if (isset($time[0]) && isset($time[1]) && isset($time[2]) && isset($time[3])) {
        $item->field_date_of_completion_value = $time[0] * 86400 + $time[1] * 3600 + $time[2] * 60 + $time[3];
      }
      $result['time'] += $item->field_date_of_completion_value;
    }
  }
  $result['time'] = gmdate("H:i:s", $result['time']);

  return $result;
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
    'Total spent time'
  );
  $rows = array();
  foreach ($lists as $list) {
    if ($list['status'] == 1) {
      $rows[] = array(
        'data' => array(
          $list['name'],
          check_plain($list['in_progress']),
          check_plain($list['done']),
          check_plain($list['all']),
          theme('cool_progressbar', array('percentage' => check_plain($list['percentage']))),
          check_plain($list['spent_time']),
        ),
      );
    }
  }
  $table_settings = array('header' => $header, 'rows' => $rows);
  return $table_settings;
}

/**
 * Create table header and rows.
 */
function ai_employees_list_prepare_list_who_leave($lists) {
  $header = array(
    'Employee',
    'In Progress',
    'Done',
    'Total',
    'Employee\'s progress',
    'Total spent time'
  );
  $rows = array();
  foreach ($lists as $list) {
    if ($list['status'] != 1) {
      $rows[] = array(
        'data' => array(
          $list['name'],
          check_plain($list['in_progress']),
          check_plain($list['done']),
          check_plain($list['all']),
          theme('cool_progressbar', array('percentage' => check_plain($list['percentage']))),
          check_plain($list['spent_time']),
        ),
      );
    }
  }
  $table_settings = array('header' => $header, 'rows' => $rows);
  return $table_settings;
}
