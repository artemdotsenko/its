<?php
/**
 * @file
 * its_perm.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function its_perm_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
