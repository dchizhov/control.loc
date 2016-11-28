<?php
/**
 * @file
 * feature_page_nfp.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feature_page_nfp_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'new_front_page';
  $export['site_frontpage'] = $strongarm;

  return $export;
}
