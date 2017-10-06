<?php
/**
 * @file
 * its_class.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function its_class_taxonomy_default_vocabularies() {
  return array(
    'city' => array(
      'name' => 'City',
      'machine_name' => 'city',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 4,
    ),
  );
}
