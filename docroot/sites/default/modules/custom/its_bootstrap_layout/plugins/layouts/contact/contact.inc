<?php

/**
 * @file
 * Contact page panels layout.
 */

/**
 * Panels layout plugin definition.
 */
$plugin = array(
  'title' => t('Contact'),
  'icon' => 'contact.png',
  'category' => t('ITS'),
  'theme' => 'contact',
  'css' => 'contact.css',
  'regions' => array(
    'top-content'    => t('Top Content'),
    'main'           => t('Main'),
    'sidebar'        => t('Sidebar'),
    'bottom-content' => t('Footer block'),
  ),
);
