<?php
/**
 * @file
 * ox_jwplayer.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ox_jwplayer_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-embed_codes-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'embed_codes-block',
    'module' => 'views',
    'node_types' => array(
      0 => 'episode',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'betacast' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'betacast',
        'weight' => -38,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
