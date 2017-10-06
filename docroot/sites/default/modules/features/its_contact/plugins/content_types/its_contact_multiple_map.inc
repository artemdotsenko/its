<?php

/**
 * @file
 * Pane block "Multiple Map".
 */

/**
 * Ctools plugin definition.
 *
 * @see ctools/plugins/content_types/node_context/node_author.inc
 */
$plugin = array(
  'title' => t('Multiple Map'),
  'category' => t('ITS'),
  'edit form' => 'its_contact_multiple_map_form',
  'render callback' => 'its_contact_multiple_map_form_render',
  'required context' => new ctools_context_required(t('Node'), 'node'),
);

/**
 * Callback on the 'Edit form' for the content type.
 */
function its_contact_multiple_map_form($form, &$form_state) {
  return $form;
}

/**
 * Content page "Multiple Map".
 *
 * @param string $subtype
 *   The name of the subtype being rendered.
 * @param array $conf
 *   Configuration as done at admin time.
 * @param array $args
 *   The arguments provided to the owner of the content type.
 * @param array $context
 *   Context - in this case we don't have any.
 *
 * @return object
 *   An object with at least title and content members.
 */
function its_contact_multiple_map_form_render($subtype, $conf, $args, $context) {
  $block = new stdClass();
  $block->content = '';

  $node = clone $context->data;
  $fields = field_get_items('node', $node, 'field_about_map');

  if ($fields) {
    $node->field_about_map = array(LANGUAGE_NONE => array($fields[0]));
    // Required to init map.
    $view = field_view_field('node', $node, 'field_about_map', array('label' => 'hidden'));

    $block->content = array(
      '#markup' => theme('google_map_field', array(
        'name' => NULL,
        'lat' => 0,
        'lng' => 0,
        'zoom' => 9,
      )),
      '#attached' => array(
        'js' => array(
          array(
            'data' => array('itsContactMap' => $fields),
            'type' => 'setting',
          ),
          drupal_get_path('module', 'its_contact') . '/js/its_contact_multiple_map.js',
        ),
      ),
    );
  }

  return $block;
}
