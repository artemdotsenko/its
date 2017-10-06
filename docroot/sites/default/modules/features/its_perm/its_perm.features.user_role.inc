<?php
/**
 * @file
 * its_perm.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function its_perm_user_default_roles() {
  $roles = array();

  // Exported role: Content Editor.
  $roles['Content Editor'] = array(
    'name' => 'Content Editor',
    'weight' => 2,
  );

  // Exported role: Teacher.
  $roles['Teacher'] = array(
    'name' => 'Teacher',
    'weight' => 3,
  );

  return $roles;
}
