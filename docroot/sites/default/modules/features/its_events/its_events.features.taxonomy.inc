<?php
/**
 * @file
 * its_events.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function its_events_taxonomy_default_vocabularies() {
  return array(
    'events_description' => array(
      'name' => 'Events Description',
      'machine_name' => 'events_description',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 4,
    ),
  );
}
