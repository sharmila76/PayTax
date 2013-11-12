<?php
/**
 * @file
 * give_userpoints.features.inc
 */

/**
 * Implements hook_node_info().
 */
function give_userpoints_node_info() {
  $items = array(
    'ask_question' => array(
      'name' => t('Ask Question'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
