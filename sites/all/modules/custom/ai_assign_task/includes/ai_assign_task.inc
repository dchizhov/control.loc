<?php
/**
 * @file
 * Module for opening assign task form in popup.
 */

/**
 * Ajax modal window callback.
 */
function ai_assign_task_callback($js = NULL) {
  $form_state = array(
    'ajax' => TRUE,
    'title' => t('Assign task'),
    'build_info' => array(
      'args' => array(),
    ),
  );
  form_load_include($form_state, 'inc', 'node', 'node.pages');
  if (!$js) {
    return drupal_get_form('assigned_tasks_node_form');
  }
  ctools_include('ajax');
  ctools_include('modal');
  _ai_assign_task_include_modal();

  $output = array();
//  $output = ctools_modal_form_wrapper('assigned_tasks_node_form', $form_state);
  $output = ctools_modal_form_wrapper('assigned_tasks_node_form', $form_state);
  return array('#type' => 'ajax', '#commands' => $output);
}

/**
 * Function to set modal window settings.
 */
function _ai_assign_task_include_modal() {
  static $added = FALSE;
  if ($added == FALSE) {
    $added = TRUE;
    ctools_include('modal');
    ctools_include('ajax');
    ctools_modal_add_js();
    $popup_style = array(
      'assign-popup-style' => array(
        'modalSize' => array(
          'type' => 'fixed',
          'width' => 700,
          'height' => 'auto',
          'addHeight' => 700,
        ),
        'modalOptions' => array(
          'opacity' => (float) 0.8,
          'background-color' => '#084b57',
        ),
        'closeText' => 'dismiss',
        'loadingText' => 'wait',
        'animation' => 'fadeIn',
        'animationSpeed' => 'fast',
      ),
    );

    drupal_add_js($popup_style, 'setting');
  }
}

/**
 * Assign task form for popup.
 */
function ai_assign_task_assign_form($form, $form_state) {
  $form = array();
  $form['assigned_tasks'] = array(
    '#title' => t('Assigned tasks'),
    '#type' => 'textfield',
    '#required' => TRUE,
  );
  $form['task'] = array(
    '#title' => t('Task'),
    '#type' => 'textfield',
    '#required' => TRUE,
  );
  $form['employee'] = array(
    '#title' => t('Employee'),
    '#type' => 'textfield',
    '#required' => TRUE,
  );
  $form['status'] = array(
    '#title' => t('Status'),
    '#type' => 'textfield',
    '#required' => TRUE,
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('OK'),
  );
  return $form;
}