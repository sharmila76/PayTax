<?php

/**
 * implements hook_views_data()
 * 
 */
function maintain_points_views_data() {
  /**$table = array(
      'categories' => array(
          'table' => array(
              'group' => 'maintain_points',
              'base' => array(
                  'title'=> 'categories',
                  'help'=> 'categories custom database table name'
              ),
          ),
          'category' => array(
              'title' => t('get category'),
              'help' => t('custom table title field'),
              'field' => array(
                  'click sortable' => TRUE,
              ),
              'filter' => array(
                  'handler' => 'views_handler_filter_string'
              ),
              'sort' => array(
                  'handler' => 'views_handler_sort'
              ),
          ),
          'points' => array(
              'title' => t('get points'),
              'help' => t('custom table points field'),
              'field' => array('handler' => 'views_handler_field_numeric',
                  'click sortable' => TRUE,
              ),
               'filter' => array(
               'handler' => 'views_handler_filter_numeric',
              ), 
              'sort' => array(
               'handler' => 'views_handler_sort',
              ),
          ),
      ),
  );
  return $table;**/
  $data['categories']['table']['group'] = t('categories');
  $data['categories']['table']['base'] = array(
    // This is the identifier field for the view. 
    'title' => t('categories table'), 
    'help' => t('categories table contains custom table'), 
    
  );
  $data['category'] = array(
    'title' => t('selected_category'), 
    'help' => t('Just a plain text field.'), 
    'field' => array(
      'handler' => 'views_handler_field', 
      'click sortable' => TRUE, // This is use by the table display plugin.
    ), 
    'sort' => array(
      'handler' => 'views_handler_sort',
    ), 
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ), 
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );
  $data['points'] = array(
    'title' => t('points'), 
    'help' => t('To get user points.'), 
    'field' => array(
      'handler' => 'views_handler_field_numeric', 
      'click sortable' => TRUE,
    ), 
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ), 
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );
  return $data;
}


