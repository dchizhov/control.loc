<?php
/**
 * @file
 * feature_m_main_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function feature_m_main_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_add-employee:node/add/employees.
  $menu_links['main-menu_add-employee:node/add/employees'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/employees',
    'router_path' => 'node/add/employees',
    'link_title' => 'Add employee',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_add-employee:node/add/employees',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
    'parent_identifier' => 'main-menu_employees:employees',
  );
  // Exported menu link: main-menu_assign-task:node/add/assigned-tasks.
  $menu_links['main-menu_assign-task:node/add/assigned-tasks'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/assigned-tasks',
    'router_path' => 'node/add/assigned-tasks',
    'link_title' => 'Assign task',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_assign-task:node/add/assigned-tasks',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_tasks:all_tasks',
  );
  // Exported menu link: main-menu_attached-files:content/tasks/files.
  $menu_links['main-menu_attached-files:content/tasks/files'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'content/tasks/files',
    'router_path' => 'content/tasks/files',
    'link_title' => 'Attached Files',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_attached-files:content/tasks/files',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 39,
    'customized' => 1,
    'parent_identifier' => 'main-menu_tasks:all_tasks',
  );
  // Exported menu link: main-menu_create-task:node/add/tasks.
  $menu_links['main-menu_create-task:node/add/tasks'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/tasks',
    'router_path' => 'node/add/tasks',
    'link_title' => 'Create task',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_create-task:node/add/tasks',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_tasks:all_tasks',
  );
  // Exported menu link: main-menu_employees:employees.
  $menu_links['main-menu_employees:employees'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'employees',
    'router_path' => 'employees',
    'link_title' => 'Employees',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_employees:employees',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -10,
    'customized' => 1,
  );
  // Exported menu link: main-menu_list-of-employees:employees.
  $menu_links['main-menu_list-of-employees:employees'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'employees',
    'router_path' => 'employees',
    'link_title' => 'List of employees',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_list-of-employees:employees',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_employees:employees',
  );
  // Exported menu link: main-menu_list-of-tasks-solr:all-tasks.
  $menu_links['main-menu_list-of-tasks-solr:all-tasks'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'all-tasks',
    'router_path' => 'all-tasks',
    'link_title' => 'List of tasks SOLR',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_list-of-tasks-solr:all-tasks',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 4,
    'customized' => 1,
    'parent_identifier' => 'main-menu_tasks:all_tasks',
  );
  // Exported menu link: main-menu_list-of-tasks:all_tasks.
  $menu_links['main-menu_list-of-tasks:all_tasks'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'all_tasks',
    'router_path' => 'all_tasks',
    'link_title' => 'List of tasks',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_list-of-tasks:all_tasks',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
    'parent_identifier' => 'main-menu_tasks:all_tasks',
  );
  // Exported menu link: main-menu_tags:admin/structure/taxonomy/tags.
  $menu_links['main-menu_tags:admin/structure/taxonomy/tags'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/tags',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Tags',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_tags:admin/structure/taxonomy/tags',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 22,
    'customized' => 1,
  );
  // Exported menu link: main-menu_tasks:all_tasks.
  $menu_links['main-menu_tasks:all_tasks'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'all_tasks',
    'router_path' => 'all_tasks',
    'link_title' => 'Tasks',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_tasks:all_tasks',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -14,
    'customized' => 1,
  );
  // Exported menu link: management_main-menu:admin/structure/menu/manage/main-menu.
  $menu_links['management_main-menu:admin/structure/menu/manage/main-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/main-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Main menu',
    'options' => array(
      'identifier' => 'management_main-menu:admin/structure/menu/manage/main-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add employee');
  t('Assign task');
  t('Attached Files');
  t('Create task');
  t('Employees');
  t('List of employees');
  t('List of tasks');
  t('List of tasks SOLR');
  t('Main menu');
  t('Tags');
  t('Tasks');

  return $menu_links;
}
