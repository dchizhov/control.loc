<?php
/**
 * @file
 * feature_page_all_tasks.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function feature_page_all_tasks_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'all_tasks';
  $page->task = 'page';
  $page->admin_title = 'All tasks';
  $page->admin_description = '';
  $page->path = 'all_tasks';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_all_tasks__panel';
  $handler->task = 'page';
  $handler->subtask = 'all_tasks';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '441376e7-45c1-4014-a17d-652d7803e8c3';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_all_tasks__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-30a41691-2d98-4013-bec2-2a6326ef3f3f';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'all_tasks';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
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
  $pane->uuid = '30a41691-2d98-4013-bec2-2a6326ef3f3f';
  $display->content['new-30a41691-2d98-4013-bec2-2a6326ef3f3f'] = $pane;
  $display->panels['middle'][0] = 'new-30a41691-2d98-4013-bec2-2a6326ef3f3f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-30a41691-2d98-4013-bec2-2a6326ef3f3f';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['all_tasks'] = $page;

  return $pages;

}
