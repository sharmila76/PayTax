<?php
/**
 * @file
 * give_userpoints.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function give_userpoints_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'display_the_categories_and_userpoints_in_admin_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'categories';
  $view->human_name = 'Display the categories and userpoints in admin page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Display the categories and userpoints in admin page';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'category' => 'category',
    'points' => 'points',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'category' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'points' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: categories: selected_category */
  $handler->display->display_options['fields']['category']['id'] = 'category';
  $handler->display->display_options['fields']['category']['table'] = 'categories';
  $handler->display->display_options['fields']['category']['field'] = 'category';
  $handler->display->display_options['fields']['category']['label'] = 'Categories';
  $handler->display->display_options['fields']['category']['element_label_colon'] = FALSE;
  /* Field: categories: points */
  $handler->display->display_options['fields']['points']['id'] = 'points';
  $handler->display->display_options['fields']['points']['table'] = 'categories';
  $handler->display->display_options['fields']['points']['field'] = 'points';
  $handler->display->display_options['fields']['points']['label'] = 'Points';
  $handler->display->display_options['fields']['points']['element_label_colon'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'categories and points';
  $export['display_the_categories_and_userpoints_in_admin_page'] = $view;

  return $export;
}
