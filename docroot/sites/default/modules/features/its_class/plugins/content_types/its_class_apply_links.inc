<?php

/**
 * @file
 * Pane block "Apply Subject Links".
 */

/**
 * Ctools plugin definition.
 *
 * @see ctools/plugins/content_types/node_context/node_author.inc
 */
$plugin = array(
  'title' => t('Apply Links'),
  'category' => t('ITS'),
  'edit form' => 'its_class_apply_links_form',
  'render callback' => 'its_class_apply_links_form_render',
  'required context' => new ctools_context_required(t('Node'), 'node'),
);

/**
 * Callback on the 'Edit form' for the content type.
 */
function its_class_apply_links_form($form, &$form_state) {
  return $form;
}

/**
 * Content page "Apply Subject Links".
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
function its_class_apply_links_form_render($subtype, $conf, $args, $context) {
  $block = new stdClass();
  $block->content = '';

  $block->content = l(
    '<span class="glyphicon glyphicon-pencil"></span>' . t('Apply for class'),
    '',
    array(
      'html' => TRUE,
      'external' => TRUE,
      'fragment' => 'apply-subject',
      'attributes' => array(
        'class' => array('btn', 'btn-dark'),
      ),
    )
  );

  $block->content .= l(
    '<span class="glyphicon glyphicon-earphone"></span>' . t('Free consultation'),
    'tel:+380501234567',
    array(
      'html' => TRUE,
      'attributes' => array(
        'class' => array('btn', 'btn-dark'),
      ),
    )
  );

  $node = $context->data;

  if ($fields) {

  }

  return $block;
}
