<?php
/**
 * @file
 * give_userpoints.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function give_userpoints_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create ask_question content'.
  $permissions['create ask_question content'] = array(
    'name' => 'create ask_question content',
    'roles' => array(
      'customer' => 'customer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view own userpoints'.
  $permissions['view own userpoints'] = array(
    'name' => 'view own userpoints',
    'roles' => array(
      'administrator' => 'administrator',
      'customer' => 'customer',
    ),
    'module' => 'userpoints',
  );

  return $permissions;
}
