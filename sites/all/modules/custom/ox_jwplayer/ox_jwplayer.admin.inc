<?php
/**
 * @file
 * Admin configuration pages for ox_jwplayer.
 */

/**
 * Settings page form.
 */
function ox_jwplayer_admin() {
  $form = array();

  // Embed-code settings
  $form['embed'] = array(
    '#type' => 'fieldset',
    '#title' => t('Embed-code dimensions'),
    '#description' => t('Dimensions of JWPlayers embedded on outside sites.')
  );
  $form['embed']['ox_jwplayer_embed_width'] = array(
    '#type' => 'textfield',
    '#title' => t('Default width'),
    '#default_value' => _ox_jwplayer_embed_width(),
    '#size' => 10,
    '#description' => t("Width of embed-code IFrames in pixels."),
  );
  $form['embed']['ox_jwplayer_embed_video_height'] = array(
    '#type' => 'textfield',
    '#title' => t('Default height (video)'),
    '#default_value' => _ox_jwplayer_embed_video_height(),
    '#size' => 10,
    '#description' => t("Height of embed-code IFrames with video content, in pixels."),
  );
  $form['embed']['ox_jwplayer_embed_audio_height'] = array(
    '#type' => 'textfield',
    '#title' => t('Default height (audio)'),
    '#default_value' => _ox_jwplayer_embed_audio_height(),
    '#size' => 10,
    '#description' => t("Height of embed-code IFrames with audio content, in pixels."),
  );

  return system_settings_form($form);
}
