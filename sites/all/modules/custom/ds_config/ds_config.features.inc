<?php
/**
 * @file
 * ds_config.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ds_config_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}
