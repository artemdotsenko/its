<?php

/**
 * @file
 * About page panels layout.
 */

/**
 * Panels layout plugin definition.
 */
$plugin = array(
  'title' => t('About'),
  'icon' => 'about.png',
  'category' => t('ITS'),
  'theme' => 'about',
  'css' => 'about.css',
  'regions' => array(
    'top-content'    => t('Top Content'),
    'top-left'       => t('Top Left'),
    'top-right'      => t('Top Right'),
    'middle'         => t('Middle'),
    'full-middle'    => t('Full Middle'),
    'banner'         => t('Banner'),
    'middle-second'  => t('Middle Second'),
    'bottom-left'    => t('Footer Left'),
    'bottom-right'   => t('Footer Right'),
    'bottom-content' => t('Footer block'),
  ),
);
