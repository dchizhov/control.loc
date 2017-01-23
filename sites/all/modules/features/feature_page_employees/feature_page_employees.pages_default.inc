<?php
/**
 * @file
 * feature_page_employees.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function feature_page_employees_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_ab5c628b-49b8-4781-a775-7e42eabd44d4';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'employees',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'employees' => 'employees',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '459f7f13-94a3-4f16-95b9-2fa5ef63c6da';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_ab5c628b-49b8-4781-a775-7e42eabd44d4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-971b1749-1f38-4bef-bd9b-e3c94c46801b';
  $pane->panel = 'bottom';
  $pane->type = 'views';
  $pane->subtype = 'all_tasks';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '%node:nid',
    'url' => '',
    'display' => 'block_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '971b1749-1f38-4bef-bd9b-e3c94c46801b';
  $display->content['new-971b1749-1f38-4bef-bd9b-e3c94c46801b'] = $pane;
  $display->panels['bottom'][0] = 'new-971b1749-1f38-4bef-bd9b-e3c94c46801b';
  $pane = new stdClass();
  $pane->pid = 'new-f8afa3f4-6b8d-4b24-8c49-d8e2e9bd1315';
  $pane->panel = 'top';
  $pane->type = 'views';
  $pane->subtype = 'pagetask';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '50',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'context' => array(
      0 => '',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f8afa3f4-6b8d-4b24-8c49-d8e2e9bd1315';
  $display->content['new-f8afa3f4-6b8d-4b24-8c49-d8e2e9bd1315'] = $pane;
  $display->panels['top'][0] = 'new-f8afa3f4-6b8d-4b24-8c49-d8e2e9bd1315';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_ab5c628b-49b8-4781-a775-7e42eabd44d4'] = $handler;

  return $export;
}
