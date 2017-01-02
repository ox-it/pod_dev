<?php
/**
 * @file
 * ox_podcasts.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function ox_podcasts_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__default__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['audio__default__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__default__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['audio__default__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__default__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['audio__default__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__default__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['audio__default__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__default__file_field_jw_player';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'jwplayer_preset' => 'views_jwplayer_audio',
    'preview_image_field' => 'file:audio|field_audio_image',
    'preview_image_style' => 'large',
    'check_support' => 1,
  );
  $export['audio__default__file_field_jw_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__default__file_field_jw_player_playlist';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'jwplayer_preset' => 'views_jwplayer_audio',
    'preview_image_field' => '',
    'preview_image_style' => '',
    'playlist_size' => '200',
    'playlist_position' => 'right',
    'check_support' => 0,
  );
  $export['audio__default__file_field_jw_player_playlist'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__default__file_field_jw_player_sources';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'jwplayer_preset' => 'views_jwplayer_audio',
    'preview_image_field' => '',
    'preview_image_style' => '',
    'check_support' => 0,
  );
  $export['audio__default__file_field_jw_player_sources'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__default__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['audio__default__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__default__file_field_mediafront_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'controller_only',
  );
  $export['audio__default__file_field_mediafront_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__default__mediafront_file_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'pod_views',
  );
  $export['audio__default__mediafront_file_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__preview__file_field_file_audio';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'autoplay' => 0,
    'loop' => 0,
    'preload' => '',
    'multiple_file_behavior' => 'tags',
  );
  $export['audio__preview__file_field_file_audio'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__preview__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['audio__preview__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__preview__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = '';
  $export['audio__preview__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__preview__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = '';
  $export['audio__preview__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__preview__file_field_jw_player';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'jwplayer_preset' => 'views_jwplayer_audio',
    'preview_image_field' => 'file:audio|field_audio_image',
    'preview_image_style' => 'large',
    'check_support' => 0,
  );
  $export['audio__preview__file_field_jw_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__preview__file_field_jw_player_playlist';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'jwplayer_preset' => 'views_jwplayer_audio',
    'preview_image_field' => '',
    'preview_image_style' => '',
    'playlist_size' => '200',
    'playlist_position' => 'right',
    'check_support' => 0,
  );
  $export['audio__preview__file_field_jw_player_playlist'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__preview__file_field_jw_player_sources';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'jwplayer_preset' => 'views_jwplayer_audio',
    'preview_image_field' => '',
    'preview_image_style' => '',
    'check_support' => 0,
  );
  $export['audio__preview__file_field_jw_player_sources'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__preview__file_field_mediafront_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'controller_only',
  );
  $export['audio__preview__file_field_mediafront_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__preview__mediafront_file_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'controller_only',
  );
  $export['audio__preview__mediafront_file_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__teaser__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['audio__teaser__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__teaser__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['audio__teaser__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__teaser__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = '';
  $export['audio__teaser__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__teaser__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = '';
  $export['audio__teaser__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__teaser__file_field_jw_player';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'jwplayer_preset' => 'views_av_responsive',
    'preview_image_field' => 'file:audio|field_audio_image',
    'preview_image_style' => 'large',
    'check_support' => 0,
  );
  $export['audio__teaser__file_field_jw_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__teaser__file_field_jw_player_playlist';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'jwplayer_preset' => 'views_jwplayer_audio',
    'preview_image_field' => '',
    'preview_image_style' => '',
    'playlist_size' => '200',
    'playlist_position' => 'right',
    'check_support' => 0,
  );
  $export['audio__teaser__file_field_jw_player_playlist'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__teaser__file_field_jw_player_sources';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'jwplayer_preset' => 'views_jwplayer_audio',
    'preview_image_field' => '',
    'preview_image_style' => '',
    'check_support' => 0,
  );
  $export['audio__teaser__file_field_jw_player_sources'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__teaser__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['audio__teaser__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__teaser__file_field_mediafront_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'playlist_block',
  );
  $export['audio__teaser__file_field_mediafront_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__teaser__mediafront_file_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'playlist_block',
  );
  $export['audio__teaser__mediafront_file_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__default__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['document__default__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__default__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['document__default__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__default__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['document__default__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__default__file_field_jw_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'jwplayer_preset' => 'jwplayer_episode_node',
    'preview_image_field' => '',
    'preview_image_style' => '',
    'check_support' => 0,
  );
  $export['document__default__file_field_jw_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__default__file_field_jw_player_playlist';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'jwplayer_preset' => 'jwplayer_episode_node',
    'preview_image_field' => '',
    'preview_image_style' => '',
    'playlist_size' => '200',
    'playlist_position' => 'right',
    'check_support' => 0,
  );
  $export['document__default__file_field_jw_player_playlist'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__default__file_field_jw_player_sources';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'jwplayer_preset' => 'jwplayer_episode_node',
    'preview_image_field' => '',
    'preview_image_style' => '',
    'check_support' => 0,
  );
  $export['document__default__file_field_jw_player_sources'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__default__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => 'medium',
  );
  $export['document__default__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__default__file_field_mediafront_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'controller_only',
  );
  $export['document__default__file_field_mediafront_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__default__mediafront_file_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'controller_only',
  );
  $export['document__default__mediafront_file_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__preview__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['document__preview__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__preview__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['document__preview__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__preview__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['document__preview__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__preview__file_field_jw_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'jwplayer_preset' => 'jwplayer_episode_node',
    'preview_image_field' => '',
    'preview_image_style' => '',
    'check_support' => 0,
  );
  $export['document__preview__file_field_jw_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__preview__file_field_jw_player_playlist';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'jwplayer_preset' => 'jwplayer_episode_node',
    'preview_image_field' => '',
    'preview_image_style' => '',
    'playlist_size' => '200',
    'playlist_position' => 'right',
    'check_support' => 0,
  );
  $export['document__preview__file_field_jw_player_playlist'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__preview__file_field_jw_player_sources';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'jwplayer_preset' => 'jwplayer_episode_node',
    'preview_image_field' => '',
    'preview_image_style' => '',
    'check_support' => 0,
  );
  $export['document__preview__file_field_jw_player_sources'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__preview__file_field_mediafront_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'controller_only',
  );
  $export['document__preview__file_field_mediafront_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__preview__mediafront_file_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'controller_only',
  );
  $export['document__preview__mediafront_file_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__teaser__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['document__teaser__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__teaser__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['document__teaser__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__teaser__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['document__teaser__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__teaser__file_field_jw_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'jwplayer_preset' => 'jwplayer_episode_node',
    'preview_image_field' => '',
    'preview_image_style' => '',
    'check_support' => 0,
  );
  $export['document__teaser__file_field_jw_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__teaser__file_field_jw_player_playlist';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'jwplayer_preset' => 'jwplayer_episode_node',
    'preview_image_field' => '',
    'preview_image_style' => '',
    'playlist_size' => '200',
    'playlist_position' => 'right',
    'check_support' => 0,
  );
  $export['document__teaser__file_field_jw_player_playlist'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__teaser__file_field_jw_player_sources';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'jwplayer_preset' => 'jwplayer_episode_node',
    'preview_image_field' => '',
    'preview_image_style' => '',
    'check_support' => 0,
  );
  $export['document__teaser__file_field_jw_player_sources'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__teaser__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['document__teaser__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__teaser__file_field_mediafront_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'controller_only',
  );
  $export['document__teaser__file_field_mediafront_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__teaser__mediafront_file_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'controller_only',
  );
  $export['document__teaser__mediafront_file_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__default__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['video__default__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__default__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__default__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_jw_player';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'jwplayer_preset' => 'views_av_responsive',
    'preview_image_field' => 'file:video|field_video_image',
    'preview_image_style' => 'large',
    'check_support' => 1,
  );
  $export['video__default__file_field_jw_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_jw_player_playlist';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'jwplayer_preset' => 'jwplayer_episode_node',
    'preview_image_field' => '',
    'preview_image_style' => 'thumbnail',
    'playlist_size' => '200',
    'playlist_position' => 'right',
    'check_support' => 1,
  );
  $export['video__default__file_field_jw_player_playlist'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_jw_player_sources';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'jwplayer_preset' => 'jwplayer_episode_node',
    'preview_image_field' => '',
    'preview_image_style' => '',
    'check_support' => 0,
  );
  $export['video__default__file_field_jw_player_sources'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__default__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_mediafront_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'pod_views',
  );
  $export['video__default__file_field_mediafront_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__mediafront_file_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'pod_views',
  );
  $export['video__default__mediafront_file_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__preview__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['video__preview__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__preview__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__preview__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__preview__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__preview__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__preview__file_field_file_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 1,
    'autoplay' => 0,
    'loop' => 0,
    'muted' => 0,
    'width' => '',
    'height' => '',
    'preload' => '',
    'multiple_file_behavior' => 'tags',
  );
  $export['video__preview__file_field_file_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__preview__file_field_jw_player';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'jwplayer_preset' => 'jwplayer_episode_node',
    'preview_image_field' => 'file:video|field_video_image',
    'preview_image_style' => 'medium',
    'check_support' => 0,
  );
  $export['video__preview__file_field_jw_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__preview__file_field_jw_player_playlist';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'jwplayer_preset' => 'jwplayer_episode_node',
    'preview_image_field' => '',
    'preview_image_style' => '',
    'playlist_size' => '200',
    'playlist_position' => 'right',
    'check_support' => 0,
  );
  $export['video__preview__file_field_jw_player_playlist'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__preview__file_field_jw_player_sources';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'jwplayer_preset' => 'jwplayer_episode_node',
    'preview_image_field' => '',
    'preview_image_style' => '',
    'check_support' => 0,
  );
  $export['video__preview__file_field_jw_player_sources'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__preview__file_field_mediafront_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'controller_only',
  );
  $export['video__preview__file_field_mediafront_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__preview__mediafront_file_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'controller_only',
  );
  $export['video__preview__mediafront_file_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__teaser__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__teaser__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__teaser__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['video__teaser__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__teaser__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__teaser__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__teaser__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__teaser__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__teaser__file_field_jw_player';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'jwplayer_preset' => 'views_av_responsive',
    'preview_image_field' => 'file:video|field_video_image',
    'preview_image_style' => 'large',
    'check_support' => 0,
  );
  $export['video__teaser__file_field_jw_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__teaser__file_field_jw_player_playlist';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'jwplayer_preset' => 'views_jwplayer_audio',
    'preview_image_field' => '',
    'preview_image_style' => '',
    'playlist_size' => '200',
    'playlist_position' => 'right',
    'check_support' => 0,
  );
  $export['video__teaser__file_field_jw_player_playlist'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__teaser__file_field_jw_player_sources';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'jwplayer_preset' => 'views_jwplayer_audio',
    'preview_image_field' => '',
    'preview_image_style' => '',
    'check_support' => 0,
  );
  $export['video__teaser__file_field_jw_player_sources'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__teaser__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__teaser__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__teaser__file_field_mediafront_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'controller_only',
  );
  $export['video__teaser__file_field_mediafront_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__teaser__mediafront_file_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'preset' => 'controller_only',
  );
  $export['video__teaser__mediafront_file_player'] = $file_display;

  return $export;
}
