<?php
/**
 * @file
 * feature_view_all_tasks_facet.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feature_view_all_tasks_facet_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi:block_cache:search_api@tasks';
  $strongarm->value = -1;
  $export['facetapi:block_cache:search_api@tasks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_facets_search_ids';
  $strongarm->value = array(
    'tasks' => array(
      'search_api_views:all_tasks_solr:page' => 'search_api_views:all_tasks_solr:page',
    ),
  );
  $export['search_api_facets_search_ids'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_solr_site_hash';
  $strongarm->value = 'l02vju';
  $export['search_api_solr_site_hash'] = $strongarm;

  return $export;
}
