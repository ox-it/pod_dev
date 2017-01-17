<?php

/**
 * @file
 *
 * Custom views handlers for the ox_jwplayer module.
 *
 */

/**
 * Implements hook_views_data_alter
 */
function ox_jwplayer_views_data_alter(&$data) {
  $data['file_managed']['ox_jwplayer_embed'] = array(
    'field' => array(
      'title' => t('JW Player Embed-Code Link'),
      'help' => t('Provide a Javascript link for copying a JWPlayer embed code.'),
      'handler' => 'ox_jwplayer_embed_handler',
    ),
  );
}
