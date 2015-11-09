<?php
/**
 * @file
 * PlanetElm profile.
 */

/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Allows the profile to alter the site configuration form.
 */
function planet_elm_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];
}

/**
 * Implements hook_install_tasks().
 */
function planet_elm_install_tasks() {
  $tasks = array();

  $tasks['planet_elm_setup_variables'] = array(
    'display_name' => st('Set Variables'),
    'display' => FALSE,
  );

  return $tasks;
}

/**
 * Task callback; Set variables.
 */
function planet_elm_setup_variables() {
  variable_set('features_default_export_path', 'profiles/planet_elm/modules/custom');
}
