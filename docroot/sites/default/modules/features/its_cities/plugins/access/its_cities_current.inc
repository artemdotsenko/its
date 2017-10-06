<?php

/**
 * @file
 * Plugin to provide access control based upon city.
 */

/**
 * Plugin to provide access control based upon market.
 */
$plugin = array(
  'title' => t('Current city access.'),
  'callback' => 'its_cities_current_access_check',
  'default' => array('negate' => 0),
  'settings form' => 'its_cities_current_access_settings',
  'summary' => 'its_cities_current_access_summary',
  'required context' => new ctools_context_required(t('Node'), 'node'),
);

/**
 * Settings form for the 'by parent term' access plugin.
 */
function its_cities_current_access_settings($form, &$form_state, $conf) {
  // No additional configuration necessary.
  return $form;
}

/**
 * Custom callback defined by 'callback' in the $plugin array.
 *
 * Check for access.
 */
function its_cities_current_access_check($conf, $context) {
  $access = FALSE;

  if ($context->data) {
    $tid = field_get_items('node', $context->data, 'field_city');
    $tid = isset($tid[0]['tid']) ? $tid[0]['tid'] : NULL;
    if ($tid) {
      if ($tid == its_cities_get_current_city()) {
        $access = TRUE;
      }
    }
  }

  return $access;
}

/**
 * Provide a summary description based upon the checked terms.
 */
function its_cities_current_access_summary($conf, $context) {
  // A summary is always displayed in the list of current visibility rules.
  // Your Panel > Variant > selected Pane > * (settings) > Visibility rules.
  return t('Current city.');
}
