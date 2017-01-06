<?php
/**
 * @file
 * feature_page_nfp.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function feature_page_nfp_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'new_front_page';
  $page->task = 'page';
  $page->admin_title = 'New front page';
  $page->admin_description = 'This overrides a default front page with custom new.';
  $page->path = 'new_front_page';
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
  $handler->name = 'page_new_front_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'new_front_page';
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
  $display->uuid = 'bb12c4bd-aaae-4d1c-8b30-c4643a1c7cb3';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_new_front_page__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b2e21736-bee4-4826-a396-d0b3b76579bb';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'ai_employees_list-tasks_list_download';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
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
  $pane->uuid = 'b2e21736-bee4-4826-a396-d0b3b76579bb';
  $display->content['new-b2e21736-bee4-4826-a396-d0b3b76579bb'] = $pane;
  $display->panels['middle'][0] = 'new-b2e21736-bee4-4826-a396-d0b3b76579bb';
  $pane = new stdClass();
  $pane->pid = 'new-71ec21f8-1b9e-492c-8353-ac46fb344fbc';
  $pane->panel = 'middle';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '71ec21f8-1b9e-492c-8353-ac46fb344fbc';
  $display->content['new-71ec21f8-1b9e-492c-8353-ac46fb344fbc'] = $pane;
  $display->panels['middle'][1] = 'new-71ec21f8-1b9e-492c-8353-ac46fb344fbc';
  $pane = new stdClass();
  $pane->pid = 'new-1ebdb530-c45c-42ed-ac39-8d573e5b5e76';
  $pane->panel = 'middle';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '1ebdb530-c45c-42ed-ac39-8d573e5b5e76';
  $display->content['new-1ebdb530-c45c-42ed-ac39-8d573e5b5e76'] = $pane;
  $display->panels['middle'][2] = 'new-1ebdb530-c45c-42ed-ac39-8d573e5b5e76';
  $pane = new stdClass();
  $pane->pid = 'new-c271d2ff-4d10-48b8-a34a-e02e7c418314';
  $pane->panel = 'middle';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'c271d2ff-4d10-48b8-a34a-e02e7c418314';
  $display->content['new-c271d2ff-4d10-48b8-a34a-e02e7c418314'] = $pane;
  $display->panels['middle'][3] = 'new-c271d2ff-4d10-48b8-a34a-e02e7c418314';
  $pane = new stdClass();
  $pane->pid = 'new-3e880abd-28b5-46c0-bc3e-904a75aaf1d1';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'ai_employees_list-employee_list_not_active';
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '3e880abd-28b5-46c0-bc3e-904a75aaf1d1';
  $display->content['new-3e880abd-28b5-46c0-bc3e-904a75aaf1d1'] = $pane;
  $display->panels['middle'][4] = 'new-3e880abd-28b5-46c0-bc3e-904a75aaf1d1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['new_front_page'] = $page;

  return $pages;

}
