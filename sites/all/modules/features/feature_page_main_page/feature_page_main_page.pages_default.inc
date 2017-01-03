<?php
/**
 * @file
 * feature_page_main_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function feature_page_main_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'main_page';
  $page->task = 'page';
  $page->admin_title = 'main page';
  $page->admin_description = '';
  $page->path = 'assigned_tasks';
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
  $handler->name = 'page_main_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'main_page';
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
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'fb6ea204-f531-4977-9525-02ba812018ec';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_main_page__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e86fc889-4c58-431e-ab68-7425178be047';
  $pane->panel = 'center';
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
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'page',
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
  $pane->uuid = 'e86fc889-4c58-431e-ab68-7425178be047';
  $display->content['new-e86fc889-4c58-431e-ab68-7425178be047'] = $pane;
  $display->panels['center'][0] = 'new-e86fc889-4c58-431e-ab68-7425178be047';
  $pane = new stdClass();
  $pane->pid = 'new-5bb65b41-1fdc-405f-a629-9af3d81389c9';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'ai_employees_list-employee_list';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '5bb65b41-1fdc-405f-a629-9af3d81389c9';
  $display->content['new-5bb65b41-1fdc-405f-a629-9af3d81389c9'] = $pane;
  $display->panels['center'][1] = 'new-5bb65b41-1fdc-405f-a629-9af3d81389c9';
  $pane = new stdClass();
  $pane->pid = 'new-b3de3269-eccb-410c-8c86-8d245516eb32';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'date_of_employment';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'b3de3269-eccb-410c-8c86-8d245516eb32';
  $display->content['new-b3de3269-eccb-410c-8c86-8d245516eb32'] = $pane;
  $display->panels['center'][2] = 'new-b3de3269-eccb-410c-8c86-8d245516eb32';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['main_page'] = $page;

  return $pages;

}
