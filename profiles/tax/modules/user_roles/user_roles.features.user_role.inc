<?php
/**
 * @file
 * user_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function user_roles_user_default_roles() {
  $roles = array();

  // Exported role: consultant.
  $roles['consultant'] = array(
    'name' => 'consultant',
    'weight' => 4,
  );

  // Exported role: customer.
  $roles['customer'] = array(
    'name' => 'customer',
    'weight' => 3,
  );

  // Exported role: router.
  $roles['router'] = array(
    'name' => 'router',
    'weight' => 5,
  );

  return $roles;
}
