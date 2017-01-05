<?php
/**
 * @file
 * feature_date_of_employment_.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_date_of_employment__views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'date_of_employment';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Date of employment';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Additional information about employees';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_date_of_birthday' => 'field_date_of_birthday',
    'field_date_of_start_probation' => 'field_date_of_start_probation',
    'field_date_of_finish_probation' => 'field_date_of_finish_probation',
    'status' => 'status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_of_birthday' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_of_start_probation' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_of_finish_probation' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'NID';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Employee';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  /* Field: Content: Phone number */
  $handler->display->display_options['fields']['field_phone_number']['id'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['table'] = 'field_data_field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['field'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['element_label_colon'] = FALSE;
  /* Field: Content: Date of birthday */
  $handler->display->display_options['fields']['field_date_of_birthday']['id'] = 'field_date_of_birthday';
  $handler->display->display_options['fields']['field_date_of_birthday']['table'] = 'field_data_field_date_of_birthday';
  $handler->display->display_options['fields']['field_date_of_birthday']['field'] = 'field_date_of_birthday';
  $handler->display->display_options['fields']['field_date_of_birthday']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_of_birthday']['settings'] = array(
    'format_type' => 'search_api_facetapi_DAY',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Date of start probation */
  $handler->display->display_options['fields']['field_date_of_start_probation']['id'] = 'field_date_of_start_probation';
  $handler->display->display_options['fields']['field_date_of_start_probation']['table'] = 'field_data_field_date_of_start_probation';
  $handler->display->display_options['fields']['field_date_of_start_probation']['field'] = 'field_date_of_start_probation';
  $handler->display->display_options['fields']['field_date_of_start_probation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_of_start_probation']['settings'] = array(
    'format_type' => 'search_api_facetapi_DAY',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Date of finish probation */
  $handler->display->display_options['fields']['field_date_of_finish_probation']['id'] = 'field_date_of_finish_probation';
  $handler->display->display_options['fields']['field_date_of_finish_probation']['table'] = 'field_data_field_date_of_finish_probation';
  $handler->display->display_options['fields']['field_date_of_finish_probation']['field'] = 'field_date_of_finish_probation';
  $handler->display->display_options['fields']['field_date_of_finish_probation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_of_finish_probation']['settings'] = array(
    'format_type' => 'search_api_facetapi_DAY',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Sort criterion: Content: Published */
  $handler->display->display_options['sorts']['status']['id'] = 'status';
  $handler->display->display_options['sorts']['status']['table'] = 'node';
  $handler->display->display_options['sorts']['status']['field'] = 'status';
  $handler->display->display_options['sorts']['status']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'employees' => 'employees',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['date_of_employment'] = $view;

  return $export;
}
