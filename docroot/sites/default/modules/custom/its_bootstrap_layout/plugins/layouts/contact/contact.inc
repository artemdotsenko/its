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
    'left'           => t('Left'),
    'middle'         => t('Middle'),
    'right'          => t('Right'),
    'bottom-content' => t('Footer block'),
  ),
);
