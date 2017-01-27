<?php
/**
 * @file
 * feature_t_sections.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function feature_t_sections_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-sections-field_logo_section'.
  $field_instances['taxonomy_term-sections-field_logo_section'] = array(
    'bundle' => 'sections',
    'deleted' => 0,
    'description' => 'You can attach logo for section ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_logo_section',
    'label' => 'Logo',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Logo');
  t('You can attach logo for section ');

  return $field_instances;
}
