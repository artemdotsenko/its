<?php
/**
 * @file
 * its_class.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function its_class_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
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
function its_class_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function its_class_image_default_styles() {
  $styles = array();

  // Exported image style: all_courses.
  $styles['all_courses'] = array(
    'label' => 'All Courses (52x52)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 52,
          'height' => 52,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_class.
  $styles['front_class'] = array(
    'label' => 'front_class (20x20)',
    'effects' => array(
      3 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 20,
          'height' => 20,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: teacher.
  $styles['teacher'] = array(
    'label' => 'Teacher',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 800,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => -10,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function its_class_node_info() {
  $items = array(
    'class' => array(
      'name' => t('Class'),
      'base' => 'node_content',
      'description' => t('Class composed from Subjects.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'subject' => array(
      'name' => t('Subject'),
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
