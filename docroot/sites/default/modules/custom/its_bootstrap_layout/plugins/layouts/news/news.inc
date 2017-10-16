<?php

/**
 * @file
 * News page panels layout.
 */

/**
 * Panels layout plugin definition.
 */
$plugin = array(
  'title' => t('News'),
  'icon' => 'news.png',
  'category' => t('ITS'),
  'theme' => 'news',
  'css' => 'news.css',
  'regions' => array(
    'top-content'    => t('Top Content'),
    'main'           => t('Main'),
    'sidebar'        => t('Sidebar'),
    'bottom-content' => t('Footer block'),
  ),
);
