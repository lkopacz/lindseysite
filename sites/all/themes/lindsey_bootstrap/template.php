<?php

/**
 * @file
 * template.php
 */
function lindsey_bootstrap_preprocess_html(&$variables) {
  $options = array(
    'group' => JS_THEME,
  );
  drupal_add_js('https://ajax.googleapis.com/ajax/libs/jquery/1.11.0/jquery.min.js', 'external');
  drupal_add_js(drupal_get_path('theme', 'lindsey_bootstrap') . '/js/script.js');
}

function lindsey_bootstrap_preprocess_page(&$variables) {
  $variables['navbar_classes_array'][] = 'navbar-fixed-top';
}
