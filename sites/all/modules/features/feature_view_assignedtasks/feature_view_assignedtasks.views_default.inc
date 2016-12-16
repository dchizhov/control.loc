<?php
/**
 * @file
 * feature_view_assignedtasks.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_view_assignedtasks_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'pagetask';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'assignedtasks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Assigned Tasks';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_nid_employee' => 'field_nid_employee',
    'field_nid_task' => 'field_nid_task',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_nid_employee' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_nid_task' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Employee */
  $handler->display->display_options['fields']['field_nid_employee']['id'] = 'field_nid_employee';
  $handler->display->display_options['fields']['field_nid_employee']['table'] = 'field_data_field_nid_employee';
  $handler->display->display_options['fields']['field_nid_employee']['field'] = 'field_nid_employee';
  $handler->display->display_options['fields']['field_nid_employee']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nid_employee']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Task */
  $handler->display->display_options['fields']['field_nid_task']['id'] = 'field_nid_task';
  $handler->display->display_options['fields']['field_nid_task']['table'] = 'field_data_field_nid_task';
  $handler->display->display_options['fields']['field_nid_task']['field'] = 'field_nid_task';
  $handler->display->display_options['fields']['field_nid_task']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nid_task']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_status']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Task topic (field_task_topic) */
  $handler->display->display_options['sorts']['field_task_topic_target_id']['id'] = 'field_task_topic_target_id';
  $handler->display->display_options['sorts']['field_task_topic_target_id']['table'] = 'field_data_field_task_topic';
  $handler->display->display_options['sorts']['field_task_topic_target_id']['field'] = 'field_task_topic_target_id';
  $handler->display->display_options['sorts']['field_task_topic_target_id']['expose']['label'] = 'Task topic (field_task_topic)';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'assigned_tasks' => 'assigned_tasks',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '2',
  );
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Has taxonomy term';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'statuses';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_nid_employee' => 'field_nid_employee',
    'field_nid_task' => 'field_nid_task',
    'created' => 'created',
    'field_status' => 'field_status',
    'nid' => 'nid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_nid_employee' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_nid_task' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_nid_task_target_id']['id'] = 'field_nid_task_target_id';
  $handler->display->display_options['relationships']['field_nid_task_target_id']['table'] = 'field_data_field_nid_task';
  $handler->display->display_options['relationships']['field_nid_task_target_id']['field'] = 'field_nid_task_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Employee */
  $handler->display->display_options['fields']['field_nid_employee']['id'] = 'field_nid_employee';
  $handler->display->display_options['fields']['field_nid_employee']['table'] = 'field_data_field_nid_employee';
  $handler->display->display_options['fields']['field_nid_employee']['field'] = 'field_nid_employee';
  $handler->display->display_options['fields']['field_nid_employee']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nid_employee']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Task */
  $handler->display->display_options['fields']['field_nid_task']['id'] = 'field_nid_task';
  $handler->display->display_options['fields']['field_nid_task']['table'] = 'field_data_field_nid_task';
  $handler->display->display_options['fields']['field_nid_task']['field'] = 'field_nid_task';
  $handler->display->display_options['fields']['field_nid_task']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nid_task']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_nid_task_target_id';
  $handler->display->display_options['fields']['body']['label'] = 'Task description';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_status']['alter']['text'] = '<span class="assigned-task-status" data-nid="[nid]">[field_status]</span>';
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="change-status/ajax/[nid]" class="use-ajax control-actions-link" data-nid="[nid]">Completed</a>';
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'change-status/ajax/[nid]';
  $handler->display->display_options['fields']['nothing']['alter']['link_class'] = 'use-ajax';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'assigned_tasks' => 'assigned_tasks',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '2',
  );
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Has taxonomy term';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'statuses';
  $handler->display->display_options['path'] = 'assignedtasks';

  /* Display: Tasks in process */
  $handler = $view->new_display('block', 'Tasks in process', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Tasks in process';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_nid_task' => 'field_nid_task',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_nid_task' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_nid_task_target_id']['id'] = 'field_nid_task_target_id';
  $handler->display->display_options['relationships']['field_nid_task_target_id']['table'] = 'field_data_field_nid_task';
  $handler->display->display_options['relationships']['field_nid_task_target_id']['field'] = 'field_nid_task_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_nid_task_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Task topic (field_task_topic) */
  $handler->display->display_options['sorts']['field_task_topic_target_id']['id'] = 'field_task_topic_target_id';
  $handler->display->display_options['sorts']['field_task_topic_target_id']['table'] = 'field_data_field_task_topic';
  $handler->display->display_options['sorts']['field_task_topic_target_id']['field'] = 'field_task_topic_target_id';
  $handler->display->display_options['sorts']['field_task_topic_target_id']['expose']['label'] = 'Task topic (field_task_topic)';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Employee (field_nid_employee) */
  $handler->display->display_options['arguments']['field_nid_employee_target_id']['id'] = 'field_nid_employee_target_id';
  $handler->display->display_options['arguments']['field_nid_employee_target_id']['table'] = 'field_data_field_nid_employee';
  $handler->display->display_options['arguments']['field_nid_employee_target_id']['field'] = 'field_nid_employee_target_id';
  $handler->display->display_options['arguments']['field_nid_employee_target_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_nid_employee_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_nid_employee_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_nid_employee_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_nid_employee_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'assigned_tasks' => 'assigned_tasks',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '2',
  );
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Has taxonomy term';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'statuses';
  $handler->display->display_options['block_description'] = 'Tasks in process ';

  /* Display: Tasks are done */
  $handler = $view->new_display('block', 'Tasks are done', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Tasks is done';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_task_topic',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'col-lg-3 panel panel-default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_nid_task_target_id']['id'] = 'field_nid_task_target_id';
  $handler->display->display_options['relationships']['field_nid_task_target_id']['table'] = 'field_data_field_nid_task';
  $handler->display->display_options['relationships']['field_nid_task_target_id']['field'] = 'field_nid_task_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_nid_task_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Date of completion */
  $handler->display->display_options['fields']['field_date_of_completion']['id'] = 'field_date_of_completion';
  $handler->display->display_options['fields']['field_date_of_completion']['table'] = 'field_data_field_date_of_completion';
  $handler->display->display_options['fields']['field_date_of_completion']['field'] = 'field_date_of_completion';
  $handler->display->display_options['fields']['field_date_of_completion']['label'] = 'Spent time';
  $handler->display->display_options['fields']['field_date_of_completion']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_date_of_completion']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_of_completion']['type'] = 'text_plain';
  /* Field: Content: Task topic */
  $handler->display->display_options['fields']['field_task_topic']['id'] = 'field_task_topic';
  $handler->display->display_options['fields']['field_task_topic']['table'] = 'field_data_field_task_topic';
  $handler->display->display_options['fields']['field_task_topic']['field'] = 'field_task_topic';
  $handler->display->display_options['fields']['field_task_topic']['relationship'] = 'field_nid_task_target_id';
  $handler->display->display_options['fields']['field_task_topic']['label'] = '';
  $handler->display->display_options['fields']['field_task_topic']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_task_topic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_task_topic']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Task topic (field_task_topic) */
  $handler->display->display_options['sorts']['field_task_topic_target_id']['id'] = 'field_task_topic_target_id';
  $handler->display->display_options['sorts']['field_task_topic_target_id']['table'] = 'field_data_field_task_topic';
  $handler->display->display_options['sorts']['field_task_topic_target_id']['field'] = 'field_task_topic_target_id';
  $handler->display->display_options['sorts']['field_task_topic_target_id']['relationship'] = 'field_nid_task_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Employee (field_nid_employee) */
  $handler->display->display_options['arguments']['field_nid_employee_target_id']['id'] = 'field_nid_employee_target_id';
  $handler->display->display_options['arguments']['field_nid_employee_target_id']['table'] = 'field_data_field_nid_employee';
  $handler->display->display_options['arguments']['field_nid_employee_target_id']['field'] = 'field_nid_employee_target_id';
  $handler->display->display_options['arguments']['field_nid_employee_target_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_nid_employee_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_nid_employee_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_nid_employee_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_nid_employee_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_nid_employee_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_nid_employee_target_id']['validate']['fail'] = 'empty';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'assigned_tasks' => 'assigned_tasks',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '1',
  );
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Has taxonomy term';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'statuses';
  $handler->display->display_options['block_description'] = 'Tasks is done';

  /* Display: Employees who performed task */
  $handler = $view->new_display('block', 'Employees who performed task', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Who performed';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Employee */
  $handler->display->display_options['fields']['field_nid_employee']['id'] = 'field_nid_employee';
  $handler->display->display_options['fields']['field_nid_employee']['table'] = 'field_data_field_nid_employee';
  $handler->display->display_options['fields']['field_nid_employee']['field'] = 'field_nid_employee';
  $handler->display->display_options['fields']['field_nid_employee']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nid_employee']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Date of completion */
  $handler->display->display_options['fields']['field_date_of_completion']['id'] = 'field_date_of_completion';
  $handler->display->display_options['fields']['field_date_of_completion']['table'] = 'field_data_field_date_of_completion';
  $handler->display->display_options['fields']['field_date_of_completion']['field'] = 'field_date_of_completion';
  $handler->display->display_options['fields']['field_date_of_completion']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Task (field_nid_task) */
  $handler->display->display_options['arguments']['field_nid_task_target_id']['id'] = 'field_nid_task_target_id';
  $handler->display->display_options['arguments']['field_nid_task_target_id']['table'] = 'field_data_field_nid_task';
  $handler->display->display_options['arguments']['field_nid_task_target_id']['field'] = 'field_nid_task_target_id';
  $handler->display->display_options['arguments']['field_nid_task_target_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_nid_task_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_nid_task_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_nid_task_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_nid_task_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_nid_task_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_nid_task_target_id']['validate']['fail'] = 'empty';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'assigned_tasks' => 'assigned_tasks',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '1',
  );
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Has taxonomy term';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'statuses';
  $handler->display->display_options['block_description'] = 'Employees who performed task';

  /* Display: In process */
  $handler = $view->new_display('block', 'In process', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Who in process';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Employee */
  $handler->display->display_options['fields']['field_nid_employee']['id'] = 'field_nid_employee';
  $handler->display->display_options['fields']['field_nid_employee']['table'] = 'field_data_field_nid_employee';
  $handler->display->display_options['fields']['field_nid_employee']['field'] = 'field_nid_employee';
  $handler->display->display_options['fields']['field_nid_employee']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nid_employee']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'medium';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Task (field_nid_task) */
  $handler->display->display_options['arguments']['field_nid_task_target_id']['id'] = 'field_nid_task_target_id';
  $handler->display->display_options['arguments']['field_nid_task_target_id']['table'] = 'field_data_field_nid_task';
  $handler->display->display_options['arguments']['field_nid_task_target_id']['field'] = 'field_nid_task_target_id';
  $handler->display->display_options['arguments']['field_nid_task_target_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_nid_task_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_nid_task_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_nid_task_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_nid_task_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_nid_task_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_nid_task_target_id']['validate']['fail'] = 'empty';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'assigned_tasks' => 'assigned_tasks',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '2',
  );
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Has taxonomy term';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'statuses';
  $handler->display->display_options['block_description'] = 'In process';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'exportalltasks';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_doc';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'tasks' => 'tasks',
  );
  $handler->display->display_options['path'] = 'alltasks-exprot';
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'page' => 0,
    'block_1' => 0,
    'block_2' => 0,
    'block_3' => 0,
    'block_4' => 0,
    'assigned_tasks_block' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Assigned tasks block */
  $handler = $view->new_display('block', 'Assigned tasks block', 'assigned_tasks_block');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_nid_task_target_id']['id'] = 'field_nid_task_target_id';
  $handler->display->display_options['relationships']['field_nid_task_target_id']['table'] = 'field_data_field_nid_task';
  $handler->display->display_options['relationships']['field_nid_task_target_id']['field'] = 'field_nid_task_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Employee */
  $handler->display->display_options['fields']['field_nid_employee']['id'] = 'field_nid_employee';
  $handler->display->display_options['fields']['field_nid_employee']['table'] = 'field_data_field_nid_employee';
  $handler->display->display_options['fields']['field_nid_employee']['field'] = 'field_nid_employee';
  $handler->display->display_options['fields']['field_nid_employee']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nid_employee']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Task */
  $handler->display->display_options['fields']['field_nid_task']['id'] = 'field_nid_task';
  $handler->display->display_options['fields']['field_nid_task']['table'] = 'field_data_field_nid_task';
  $handler->display->display_options['fields']['field_nid_task']['field'] = 'field_nid_task';
  $handler->display->display_options['fields']['field_nid_task']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nid_task']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_nid_task_target_id';
  $handler->display->display_options['fields']['body']['label'] = 'Task description';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_status']['alter']['text'] = '<span class="assigned-task-status" data-nid="[nid]">[field_status]</span>';
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="change-status/ajax/[nid]" class="use-ajax control-actions-link" data-nid="[nid]">Completed</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'assigned_tasks' => 'assigned_tasks',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '2',
  );
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Has taxonomy term';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'statuses';
  $handler->display->display_options['block_description'] = 'Assigned tasks';

  /* Display: Export Assigned tasks */
  $handler = $view->new_display('views_data_export', 'Export Assigned tasks', 'assigned_tasks_doc');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Export assigned Tasks';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_doc';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Employee */
  $handler->display->display_options['fields']['field_nid_employee']['id'] = 'field_nid_employee';
  $handler->display->display_options['fields']['field_nid_employee']['table'] = 'field_data_field_nid_employee';
  $handler->display->display_options['fields']['field_nid_employee']['field'] = 'field_nid_employee';
  $handler->display->display_options['fields']['field_nid_employee']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nid_employee']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Task */
  $handler->display->display_options['fields']['field_nid_task']['id'] = 'field_nid_task';
  $handler->display->display_options['fields']['field_nid_task']['table'] = 'field_data_field_nid_task';
  $handler->display->display_options['fields']['field_nid_task']['field'] = 'field_nid_task';
  $handler->display->display_options['fields']['field_nid_task']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nid_task']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_status']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['path'] = 'assigned-tasks-doc';
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'page' => 0,
    'block_1' => 0,
    'block_2' => 0,
    'block_3' => 0,
    'block_4' => 0,
    'assigned_tasks_block' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;
  $export['pagetask'] = $view;

  return $export;
}
