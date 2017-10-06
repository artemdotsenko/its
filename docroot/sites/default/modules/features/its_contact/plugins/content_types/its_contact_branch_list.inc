<?php

/**
 * @file
 * Pane block "Branch List".
 */

/**
 * Ctools plugin definition.
 *
 * @see ctools/plugins/content_types/node_context/node_author.inc
 */
$plugin = array(
  'title' => t('Branch List'),
  'category' => t('ITS'),
  'edit form' => 'its_contact_branch_list_form',
  'render callback' => 'its_contact_branch_list_form_render',
  'required context' => new ctools_context_required(t('Node'), 'node'),
);

/**
 * Callback on the 'Edit form' for the content type.
 */
function its_contact_branch_list_form($form, &$form_state) {
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
function its_contact_branch_list_form_render($subtype, $conf, $args, $context) {
  $block = new stdClass();
  $block->content = '';

  $node = $context->data;
  $fields = field_get_items('node', $node, 'field_about_map');

  if ($fields) {
    $title = field_get_items('node', $node, 'field_about_branch_list_title');
    $title = isset($title[0]['value']) ? $title[0]['value'] : NULL;
    if ($title) {
      $block->content = '<h3>' . $title . '</h3>';
    }

    $items = array();
    foreach ($fields as $field) {
      $items[] = $field['name'];
    }

    if (!empty($items)) {
      $block->content .= theme('item_list', array('items' => $items));
    }
  }

  return $block;
}
