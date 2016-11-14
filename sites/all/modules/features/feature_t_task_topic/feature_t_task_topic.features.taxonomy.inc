<?php
/**
 * @file
 * feature_t_task_topic.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function feature_t_task_topic_taxonomy_default_vocabularies() {
  return array(
    'task_topic' => array(
      'name' => 'Task topic',
      'machine_name' => 'task_topic',
      'description' => 'Topic of task',
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
