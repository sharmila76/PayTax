<?php
/**
 * @file
 * give_userpoints.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function give_userpoints_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-987f01852350f177bd67d1e96d6001f4'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '987f01852350f177bd67d1e96d6001f4',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'maintain_points',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'highlighted',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
