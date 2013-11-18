<?php
/**
 * @file
 * give_userpoints.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function give_userpoints_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_post-your-question:node/add/question
  $menu_links['main-menu_post-your-question:node/add/question'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/question',
    'router_path' => 'node/add',
    'link_title' => 'Post your question',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_post-your-question:node/add/question',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 1,
  );
  // Exported menu link: main-menu_question:questions
  $menu_links['main-menu_question:questions'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'questions',
    'router_path' => 'questions',
    'link_title' => 'Question',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_question:questions',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Post your question');
  t('Question');


  return $menu_links;
}
