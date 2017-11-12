<?php
/**
 * @file
 * its_master.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function its_master_taxonomy_default_vocabularies() {
  return array(
    'about_us' => array(
      'name' => 'About Us',
      'machine_name' => 'about_us',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 4,
    ),
  );
}
