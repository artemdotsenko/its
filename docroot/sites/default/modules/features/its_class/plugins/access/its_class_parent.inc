<?php

/**
 * @file
 * Ctools visibility plugin for PMI Announcements as AU Tip (altered by market).
 *
 * Visibility rule for PMI announcements:
 * - default is US style (stripped HTML, an. title is a link and an. has a
 * separate page)
 * - it can be altered to AU style aka "tips" (show full an. text on the home
 * page, no link, no separate page).
 */

/**
 * Plugin to provide access control (visibility rule) for PMI announcements.
 *
 * Chtools expects the $plugin variable (array) with the keys as below
 * @link http://www.webwash.net/drupal/tutorials/create-custom-visibility-rules-panels-using-ctools-access-plugins.
 *
 * $plugin
 *  - title and description: These are used in the Panels interface so make them descriptive.
 *  - callback: This is the actual function which will be used. It should return a TRUE or FALSE.
 *  - default: This sets the default value for the access settings form.
 *  - summary: A summary is always displayed in the visibility rules and selection rules section.
 *  - settings form: This is used to define a settings form for the plugin.
 *  - required context: This tells Panels which context are required. In this case it's the node context.
 */
$plugin = array(
  'title' => t('Class is parent'),
  'callback' => 'its_class_parent_access_check',
  'default' => array('negate' => 0),
  'settings form' => 'its_class_parent_access_settings',
  'required context' => new ctools_context_required(t('Node'), 'node'),
  'summary' => 'its_class_parent_access_check_summary',
);

/**
 * Settings form for the 'by parent term' access plugin.
 */
function its_class_parent_access_settings($form, &$form_state, $conf) {
  // No additional configuration necessary.
  return $form;
}

/**
 * Custom callback defined by 'callback' in the $plugin array.
 */
function its_class_parent_access_check($conf, $context) {
  $is_parent = FALSE;

  $result = db_select('field_data_field_parent_subject', 'p')
    ->fields('p', array('entity_id'))
    ->condition('p.field_parent_subject_target_id', $context->data->nid)
    ->execute()
    ->fetchAll();

  if (count($result) > 0) {
    $is_parent = TRUE;
  }

  return $is_parent;
}

/**
 * Summary.
 */
function its_class_parent_access_check_summary($conf, $context) {
  return t('Node being viewed is parent Subject for at leat one other Subject');
}
