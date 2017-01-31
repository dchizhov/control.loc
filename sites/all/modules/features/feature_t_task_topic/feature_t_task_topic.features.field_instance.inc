<?php
/**
 * @file
 * feature_t_task_topic.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function feature_t_task_topic_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-task_topic-field_author_topic'.
  $field_instances['taxonomy_term-task_topic-field_author_topic'] = array(
    'bundle' => 'task_topic',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_author_topic',
    'label' => 'author_topic',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'taxonomy_term-task_topic-field_section'.
  $field_instances['taxonomy_term-task_topic-field_section'] = array(
    'bundle' => 'task_topic',
    'default_value' => array(
      0 => array(
        'target_id' => 10,
      ),
    ),
    'deleted' => 0,
    'description' => 'Section of topics',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_section',
    'label' => 'Section',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Section');
  t('Section of topics');
  t('author_topic');

  return $field_instances;
}
