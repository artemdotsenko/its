<?php
/**
 * @file
 * its_article.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function its_article_ctools_plugin_api($module = NULL, $api = NULL) {
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
function its_article_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function its_article_image_default_styles() {
  $styles = array();

  // Exported image style: news_teaser.
  $styles['news_teaser'] = array(
    'label' => 'News Teaser (w820)',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 820,
          'height' => 328,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: popular_news.
  $styles['popular_news'] = array(
    'label' => 'Popular News (h200)',
    'effects' => array(
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 200,
          'upscale' => 1,
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
function its_article_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Новости'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
