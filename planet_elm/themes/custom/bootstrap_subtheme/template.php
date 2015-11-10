<?php

/**
 * @file
 * template.php
 */

/**
 * Preprocess HTML.
 */
function bootstrap_subtheme_preprocess_html(&$variables) {
  if (in_array('node-type-voice', $variables['classes_array'])) {
    $variables['classes_array'][] = 'individual-voice';
  }

  if ($page_panel = page_manager_get_current_page()) {

    // Make sure CSS_ID defined in panels is attached  to the page.
    if (!empty($page_panel['handler']->conf['css_id'])) {
      $css_id_array =  array('id' => $page_panel['handler']->conf['css_id']);
      $variables['attributes_array'] = empty($variables['attributes_array']) ? $css_id_array : $variables['attributes_array'] += $css_id_array;
    }
  }
}

/**
 * Preprocess page.
 */
function bootstrap_subtheme_preprocess_page(&$variables) {
  $variables['logo'] = drupal_get_path('theme', 'bootstrap_subtheme') . '/logo.svg';
}
