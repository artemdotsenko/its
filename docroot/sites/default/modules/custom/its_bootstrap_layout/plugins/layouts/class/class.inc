<?php

/**
 * @file
 * Class page panels layout.
 */

/**
 * Panels layout plugin definition.
 */
$plugin = array(
  'title' => t('Class'),
  'icon' => 'class.png',
  'category' => t('ITS'),
  'theme' => 'class',
  'css' => 'class.css',
  'regions' => array(
    'top-content'    => t('Top Content'),
    'left'        => t('Left'),
    'right'        => t('Right'),
    'bottom-content' => t('Footer block'),
  ),
);
