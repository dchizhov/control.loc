<?php
/**
 * @file
 * feature_module_elysia_cron.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_module_elysia_cron_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "elysia_cron" && $api == "default_elysia_cron_rules") {
    return array("version" => "1");
  }
}
