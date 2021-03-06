<?php
/**
 * @file
 * Stub file for bootstrap_breadcrumb().
 */

/**
 * Returns HTML for a breadcrumb trail.
 *
 * @param array $variables
 *   An associative array containing:
 *   - breadcrumb: An array containing the breadcrumb links.
 *
 * @return string
 *   The constructed HTML.
 *
 * @see theme_breadcrumb()
 *
 * @ingroup theme_functions
 */
function itschool_breadcrumb($variables) {
  // Use the Path Breadcrumbs theme function if it should be used instead.
  if (_bootstrap_use_path_breadcrumbs()) {
    return path_breadcrumbs_breadcrumb($variables);
  }

  $output = '';
  $breadcrumb = $variables['breadcrumb'];
  foreach ($breadcrumb as &$crumb) {
    if (is_array($crumb) && isset($crumb['data'])) {
      $crumb['data'] .= '<span class="separator glyphicon glyphicon-menu-right"></span>';
      if (isset($crumb['class'])) {
        foreach ($crumb['class'] as $key => $value) {
          if ($value === 'active') {
            unset($crumb['class'][$key]);
          }
        }
      }
    }
    else {
      $crumb .= '<span class="separator glyphicon glyphicon-menu-right"></span>';
    }
  }


  // Determine if we are to display the breadcrumb.
  $bootstrap_breadcrumb = bootstrap_setting('breadcrumb');
  if (($bootstrap_breadcrumb == 1 || ($bootstrap_breadcrumb == 2 && arg(0) == 'admin')) && !empty($breadcrumb)) {
    $output = theme('item_list', array(
      'attributes' => array(
        'class' => array('breadcrumb'),
      ),
      'items' => $breadcrumb,
      'type' => 'ol',
    ));
  }
  return $output;
}
