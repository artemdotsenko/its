<?php
/**
 * @file
 * its_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function its_events_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function its_events_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function its_events_image_default_styles() {
  $styles = array();

  // Exported image style: events_list.
  $styles['events_list'] = array(
    'label' => 'Events List (240x318)',
    'effects' => array(
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 240,
          'height' => 318,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: nearest_event.
  $styles['nearest_event'] = array(
    'label' => 'Nearest Event (1240x560)',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1240,
          'height' => 560,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: upcoming_events.
  $styles['upcoming_events'] = array(
    'label' => 'Upcoming Events (474x420)',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 474,
          'height' => 420,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function its_events_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
