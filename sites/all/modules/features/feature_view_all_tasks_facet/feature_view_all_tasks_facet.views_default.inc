<?php
/**
 * @file
 * feature_view_all_tasks_facet.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_view_all_tasks_facet_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'all_tasks_solr';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_tasks';
  $view->human_name = 'All tasks by solr';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All tasks';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_tasks';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Indexed Node: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_tasks';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Indexed Node: Task tags */
  $handler->display->display_options['fields']['field_task_tags']['id'] = 'field_task_tags';
  $handler->display->display_options['fields']['field_task_tags']['table'] = 'search_api_index_tasks';
  $handler->display->display_options['fields']['field_task_tags']['field'] = 'field_task_tags';
  $handler->display->display_options['fields']['field_task_tags']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_task_tags']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_task_tags']['bypass_access'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_tasks';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/all_tasks/nojs/[nid]" class="ctools-use-modal ctools-modal-assign-popup-style use-ajax">assign</a>';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_tasks';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'all-tasks';
  $export['all_tasks_solr'] = $view;

  return $export;
}
