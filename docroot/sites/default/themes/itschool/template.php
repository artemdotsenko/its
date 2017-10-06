<?php
/**
 * @file
 * The primary PHP file for this theme.
 */

/**
 * Implements hook_preprocess_node().
 */
function itschool_preprocess_node(&$vars) {
  $vars['theme_hook_suggestions'][] = 'node__' . $vars['type'] . '__' . $vars['view_mode'];
}

/**
 * Implements hook_preprocess_page().
 */
function itschool_preprocess_page(&$vars) {
  $vars['search_form'] = module_invoke('search', 'block_view', 'search_block_form');

  // Special breadcrumb for search page.
  if (in_array('page__search__node', $vars['theme_hook_suggestions'])) {
    $crumbs = theme('item_list', array(
      'attributes' => array(
        'class' => array('breadcrumb'),
      ),
      'items' => array(
        l(t('home'), '<front>') . '<span class="separator glyphicon glyphicon-menu-right"></span>',
        t('search') . '<span class="separator glyphicon glyphicon-menu-right"></span>',
      ),
      'type' => 'ol',
    ));

    $vars['breadcrumb'] = $crumbs;
  }
}
