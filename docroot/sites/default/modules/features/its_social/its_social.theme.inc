<?php

/**
 * @file
 * ITS Social theme.
 */

/**
 * Social Links.
 */
function theme_its_social_links($vars) {
  $output = '';

  $links = array();
  foreach ($vars['links'] as $key => $l) {
    $links[] = l(
      '<span class="socicon-' . $key . '"></span>',
      $l['path'],
      array(
        'html' => TRUE,
        'attributes' => array(
          'target' => '_blank',
          'title' => $l['text'],
        ),
      )
    );
  }
  $output = theme('item_list', array(
    'items' => $links,
    'attributes' => array(
      'class' => array('its-social-links-list'),
    ),
  ));

  return $output;
}
