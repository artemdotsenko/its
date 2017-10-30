<?php

/**
 * @file
 * Activity page panels layout.
 */

/**
 * Panels layout plugin definition.
 */
$plugin = array(
  'title' => t('Activity'),
  'icon' => 'activity.png',
  'category' => t('ITS'),
  'theme' => 'activity',
  'css' => 'activity.css',
  'regions' => array(
    'top-content'    => t('Top Content'),
    'middle'         => t('Middle'),
    'bottom-content' => t('Footer Content'),
  ),
);
