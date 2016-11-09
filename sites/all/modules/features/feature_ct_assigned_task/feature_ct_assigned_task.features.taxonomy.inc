<?php
/**
 * @file
 * feature_ct_assigned_task.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function feature_ct_assigned_task_taxonomy_default_vocabularies() {
  return array(
    'statuses' => array(
      'name' => 'Statuses',
      'machine_name' => 'statuses',
      'description' => 'Performance statuses',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
