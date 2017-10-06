<?php
/**
 * @file
 * its_contact.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function its_contact_taxonomy_default_vocabularies() {
  return array(
    'adv_num' => array(
      'name' => 'Advantages in numbers',
      'machine_name' => 'adv_num',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 4,
    ),
    'advantages' => array(
      'name' => 'Advantages',
      'machine_name' => 'advantages',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 4,
    ),
  );
}
