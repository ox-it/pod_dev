<?php

/**
 * @file
 * Theme settings file for the pod_omega theme.
 */

require_once dirname(__FILE__) . '/template.php';

/**
 * Implements hook_form_FORM_alter().
 */
function pod_omega_form_system_theme_settings_alter(&$form, $form_state) {
  // You can use this hook to append your own theme settings to the theme
  // settings form for your subtheme. You should also take a look at the
  // 'extensions' concept in the Omega base theme.
}
