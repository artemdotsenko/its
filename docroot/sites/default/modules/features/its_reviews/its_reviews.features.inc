<?php
/**
 * @file
 * its_reviews.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function its_reviews_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function its_reviews_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function its_reviews_image_default_styles() {
  $styles = array();

  // Exported image style: circle_image.
  $styles['circle_image'] = array(
    'label' => 'Circle Image (190x190)',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 190,
          'height' => 190,
        ),
        'weight' => -9,
      ),
      6 => NULL,
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function its_reviews_node_info() {
  $items = array(
    'reviews' => array(
      'name' => t('Reviews'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
