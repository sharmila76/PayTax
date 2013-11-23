<?php

/**
 * implements hook_views_data()
 * 
 */
function maintain_points_views_data() {
  $data['categories']['table']['group'] = t('categories');
  $data['categories']['table']['base'] = array(
    // This is the identifier field for the view. 
    'title' => t('categories table'), 
    'help' => t('categories table contains custom table'), 
    
  );
  $data['categories']['category'] = array(
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
  $data['categories']['points'] = array(
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


