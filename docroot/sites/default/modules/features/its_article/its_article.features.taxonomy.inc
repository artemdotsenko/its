<?php
/**
 * @file
 * its_article.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function its_article_taxonomy_default_vocabularies() {
  return array(
    'news_categories' => array(
      'name' => 'News Categories',
      'machine_name' => 'news_categories',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 4,
    ),
  );
}
