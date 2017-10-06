<?php

/**
 * @file
 * Subject page panels layout.
 */

/**
 * Panels layout plugin definition.
 */
$plugin = array(
  'title' => t('Subject'),
  'icon' => 'subject.png',
  'category' => t('ITS'),
  'theme' => 'subject',
  'css' => 'subject.css',
  'regions' => array(
    'top-content'    => t('Top Content'),
    'title'          => t('Title'),
    'date'           => t('Date'),
    'content'        => t('Content'),
    'sidebar'        => t('Sidebar'),
    'bottom-content' => t('Footer block'),
  ),
);
