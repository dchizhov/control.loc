<?php
/**
 * @file
 * feature_page_tasks.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function feature_page_tasks_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_2561c3df-4f99-437c-8d8f-1aebf87751f4';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Tasks',
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
              'tasks' => 'tasks',
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
  $display->layout = 'twocol_bricks';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8c8e3956-191a-4879-b0cc-efe85a69d74a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_2561c3df-4f99-437c-8d8f-1aebf87751f4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5c67d5d1-add5-420a-97e3-c660adc57dc9';
  $pane->panel = 'left_below';
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
    'display' => 'block_3',
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
  $pane->uuid = '5c67d5d1-add5-420a-97e3-c660adc57dc9';
  $display->content['new-5c67d5d1-add5-420a-97e3-c660adc57dc9'] = $pane;
  $display->panels['left_below'][0] = 'new-5c67d5d1-add5-420a-97e3-c660adc57dc9';
  $pane = new stdClass();
  $pane->pid = 'new-a5da685c-312f-47bb-9cd2-780de74e520b';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_comment';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = 'a5da685c-312f-47bb-9cd2-780de74e520b';
  $display->content['new-a5da685c-312f-47bb-9cd2-780de74e520b'] = $pane;
  $display->panels['middle'][0] = 'new-a5da685c-312f-47bb-9cd2-780de74e520b';
  $pane = new stdClass();
  $pane->pid = 'new-00b99e78-d29d-4528-988e-3a940445c905';
  $pane->panel = 'right_below';
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
    'display' => 'block_4',
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
  $pane->uuid = '00b99e78-d29d-4528-988e-3a940445c905';
  $display->content['new-00b99e78-d29d-4528-988e-3a940445c905'] = $pane;
  $display->panels['right_below'][0] = 'new-00b99e78-d29d-4528-988e-3a940445c905';
  $pane = new stdClass();
  $pane->pid = 'new-6294c31b-46c3-45c1-912b-9a92183469c3';
  $pane->panel = 'top';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '6294c31b-46c3-45c1-912b-9a92183469c3';
  $display->content['new-6294c31b-46c3-45c1-912b-9a92183469c3'] = $pane;
  $display->panels['top'][0] = 'new-6294c31b-46c3-45c1-912b-9a92183469c3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6294c31b-46c3-45c1-912b-9a92183469c3';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_2561c3df-4f99-437c-8d8f-1aebf87751f4'] = $handler;

  return $export;
}
