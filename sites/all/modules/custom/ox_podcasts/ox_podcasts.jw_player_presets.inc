<?php
/**
 * @file
 * ox_podcasts.jw_player_presets.inc
 */

/**
 * Implements hook_default_jw_player_presets().
 */
function ox_podcasts_default_jw_player_presets() {
  $export = array();

  $jw_player_preset = new stdClass();
  $jw_player_preset->disabled = FALSE; /* Edit this to true to make a default jw_player_preset disabled initially */
  $jw_player_preset->api_version = 1;
  $jw_player_preset->preset_name = 'views_av_responsive';
  $jw_player_preset->machine_name = 'views_av_responsive';
  $jw_player_preset->description = '';
  $jw_player_preset->settings = array(
    'preset_source' => 'drupal',
    'skin' => '',
    'stretching' => 'uniform',
    'responsive' => 1,
    'width' => '100',
    'aspectratio' => '16:9',
    'autostart' => 0,
    'mute' => 0,
    'controls' => 1,
    'sharing' => 0,
  );
  $export['views_av_responsive'] = $jw_player_preset;

  return $export;
}
