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
  $pane->pid = 'new-321758df-4723-4989-90cf-18b0d4d02aab';
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
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'assigned_tasks_block',
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
  $pane->uuid = '321758df-4723-4989-90cf-18b0d4d02aab';
  $display->content['new-321758df-4723-4989-90cf-18b0d4d02aab'] = $pane;
  $display->panels['middle'][0] = 'new-321758df-4723-4989-90cf-18b0d4d02aab';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '1ebdb530-c45c-42ed-ac39-8d573e5b5e76';
  $display->content['new-1ebdb530-c45c-42ed-ac39-8d573e5b5e76'] = $pane;
  $display->panels['middle'][1] = 'new-1ebdb530-c45c-42ed-ac39-8d573e5b5e76';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-321758df-4723-4989-90cf-18b0d4d02aab';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['new_front_page'] = $page;

  return $pages;

}
