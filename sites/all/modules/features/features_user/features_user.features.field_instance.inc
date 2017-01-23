<?php
/**
 * @file
 * features_user.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function features_user_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_sections_user'.
  $field_instances['user-user-field_sections_user'] = array(
    'bundle' => 'user',
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_sections_user',
    'label' => 'Sections',
    'required' => 1,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Sections');

  return $field_instances;
}
