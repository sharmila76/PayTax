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

  // Exported permission: 'create answer content'.
  $permissions['create answer content'] = array(
    'name' => 'create answer content',
    'roles' => array(
      'administrator' => 'administrator',
      'consultant' => 'consultant',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create question content'.
  $permissions['create question content'] = array(
    'name' => 'create question content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own answer content'.
  $permissions['delete own answer content'] = array(
    'name' => 'delete own answer content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own question content'.
  $permissions['delete own question content'] = array(
    'name' => 'delete own question content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own answer content'.
  $permissions['edit own answer content'] = array(
    'name' => 'edit own answer content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view own userpoints'.
  $permissions['view own userpoints'] = array(
    'name' => 'view own userpoints',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'userpoints',
  );

  return $permissions;
}
