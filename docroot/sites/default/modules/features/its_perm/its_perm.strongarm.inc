<?php
/**
 * @file
 * its_perm.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function its_perm_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'roleassign_roles';
  $strongarm->value = array(
    4 => '4',
    5 => '5',
  );
  $export['roleassign_roles'] = $strongarm;

  return $export;
}
