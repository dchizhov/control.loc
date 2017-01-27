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
  $pane->pid = 'new-3bed591e-94f0-4b99-923e-2858c086325b';
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
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_2',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'table_mode_panel',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3bed591e-94f0-4b99-923e-2858c086325b';
  $display->content['new-3bed591e-94f0-4b99-923e-2858c086325b'] = $pane;
  $display->panels['bottom'][0] = 'new-3bed591e-94f0-4b99-923e-2858c086325b';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'list_mode_panel',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '971b1749-1f38-4bef-bd9b-e3c94c46801b';
  $display->content['new-971b1749-1f38-4bef-bd9b-e3c94c46801b'] = $pane;
  $display->panels['bottom'][1] = 'new-971b1749-1f38-4bef-bd9b-e3c94c46801b';
  $pane = new stdClass();
  $pane->pid = 'new-c2140273-d75e-46d6-a3c4-976bb39077aa';
  $pane->panel = 'right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'span',
    'body' => '<div class=\'modes\'><span class=\'table_mode\'>Table Mode</span> | <span class=\'list_mode\'>List mode</span> </div>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c2140273-d75e-46d6-a3c4-976bb39077aa';
  $display->content['new-c2140273-d75e-46d6-a3c4-976bb39077aa'] = $pane;
  $display->panels['right'][0] = 'new-c2140273-d75e-46d6-a3c4-976bb39077aa';
  $pane = new stdClass();
  $pane->pid = 'new-a82e9e2c-3b89-461c-a27a-6161b79da799';
  $pane->panel = 'top';
  $pane->type = 'views';
  $pane->subtype = 'employees';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '%1',
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
  $pane->uuid = 'a82e9e2c-3b89-461c-a27a-6161b79da799';
  $display->content['new-a82e9e2c-3b89-461c-a27a-6161b79da799'] = $pane;
  $display->panels['top'][0] = 'new-a82e9e2c-3b89-461c-a27a-6161b79da799';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_ab5c628b-49b8-4781-a775-7e42eabd44d4'] = $handler;

  return $export;
}
