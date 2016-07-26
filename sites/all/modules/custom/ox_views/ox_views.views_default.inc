<?php
/**
 * @file
 * ox_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ox_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'media_files';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'file_managed';
  $view->human_name = 'media_files';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: File Usage: Content */
  $handler->display->display_options['relationships']['file_to_node']['id'] = 'file_to_node';
  $handler->display->display_options['relationships']['file_to_node']['table'] = 'file_usage';
  $handler->display->display_options['relationships']['file_to_node']['field'] = 'file_to_node';
  /* Field: File: audio_image */
  $handler->display->display_options['fields']['field_audio_image']['id'] = 'field_audio_image';
  $handler->display->display_options['fields']['field_audio_image']['table'] = 'field_data_field_audio_image';
  $handler->display->display_options['fields']['field_audio_image']['field'] = 'field_audio_image';
  $handler->display->display_options['fields']['field_audio_image']['label'] = '';
  $handler->display->display_options['fields']['field_audio_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_audio_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_audio_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_audio_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: File: pdf_image */
  $handler->display->display_options['fields']['field_pdf_image']['id'] = 'field_pdf_image';
  $handler->display->display_options['fields']['field_pdf_image']['table'] = 'field_data_field_pdf_image';
  $handler->display->display_options['fields']['field_pdf_image']['field'] = 'field_pdf_image';
  $handler->display->display_options['fields']['field_pdf_image']['label'] = '';
  $handler->display->display_options['fields']['field_pdf_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pdf_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pdf_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pdf_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: File: video_image */
  $handler->display->display_options['fields']['field_video_image']['id'] = 'field_video_image';
  $handler->display->display_options['fields']['field_video_image']['table'] = 'field_data_field_video_image';
  $handler->display->display_options['fields']['field_video_image']['field'] = 'field_video_image';
  $handler->display->display_options['fields']['field_video_image']['label'] = '';
  $handler->display->display_options['fields']['field_video_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_video_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_video_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_video_image][field_pdf_image][field_audio_image]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'file_to_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  /* Field: File: Rendered */
  $handler->display->display_options['fields']['rendered']['id'] = 'rendered';
  $handler->display->display_options['fields']['rendered']['table'] = 'file_managed';
  $handler->display->display_options['fields']['rendered']['field'] = 'rendered';
  $handler->display->display_options['fields']['rendered']['label'] = '';
  $handler->display->display_options['fields']['rendered']['element_label_colon'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['relationship'] = 'file_to_node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
    'series' => 'series',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
  /* Contextual filter: Content: Has taxonomy term ID depth modifier */
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['relationship'] = 'file_to_node';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'audio' => 'audio',
    'document' => 'document',
    'video' => 'video',
  );
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['type']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['type']['group_info']['label'] = 'Media Type';
  $handler->display->display_options['filters']['type']['group_info']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Audio',
      'operator' => 'in',
      'value' => array(
        'audio' => 'audio',
        'all' => 0,
        'document' => 0,
        'image' => 0,
        'video' => 0,
      ),
    ),
    2 => array(
      'title' => 'Video',
      'operator' => 'in',
      'value' => array(
        'video' => 'video',
        'all' => 0,
        'audio' => 0,
        'document' => 0,
        'image' => 0,
      ),
    ),
    3 => array(
      'title' => 'Document',
      'operator' => 'in',
      'value' => array(
        'document' => 'document',
        'all' => 0,
        'audio' => 0,
        'image' => 0,
        'video' => 0,
      ),
    ),
  );
  /* Filter criterion: Content: Series (field_series) */
  $handler->display->display_options['filters']['field_series_tid']['id'] = 'field_series_tid';
  $handler->display->display_options['filters']['field_series_tid']['table'] = 'field_data_field_series';
  $handler->display->display_options['filters']['field_series_tid']['field'] = 'field_series_tid';
  $handler->display->display_options['filters']['field_series_tid']['relationship'] = 'file_to_node';
  $handler->display->display_options['filters']['field_series_tid']['value'] = '';
  $handler->display->display_options['filters']['field_series_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_series_tid']['expose']['operator_id'] = 'field_series_tid_op';
  $handler->display->display_options['filters']['field_series_tid']['expose']['label'] = 'Series';
  $handler->display->display_options['filters']['field_series_tid']['expose']['operator'] = 'field_series_tid_op';
  $handler->display->display_options['filters']['field_series_tid']['expose']['identifier'] = 'field_series_tid';
  $handler->display->display_options['filters']['field_series_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_series_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_series_tid']['vocabulary'] = 'series';

  /* Display: All Audio and Video */
  $handler = $view->new_display('page', 'All Audio and Video', 'page');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'audio' => 'audio',
    'document' => 'document',
    'video' => 'video',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['type']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['type']['group_info']['label'] = 'Media Type';
  $handler->display->display_options['filters']['type']['group_info']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Audio',
      'operator' => 'in',
      'value' => array(
        'audio' => 'audio',
        'all' => 0,
        'document' => 0,
        'image' => 0,
        'video' => 0,
      ),
    ),
    2 => array(
      'title' => 'Video',
      'operator' => 'in',
      'value' => array(
        'video' => 'video',
        'all' => 0,
        'audio' => 0,
        'document' => 0,
        'image' => 0,
      ),
    ),
    3 => array(
      'title' => 'Document',
      'operator' => 'in',
      'value' => array(
        'document' => 'document',
        'all' => 0,
        'audio' => 0,
        'image' => 0,
        'video' => 0,
      ),
    ),
  );
  /* Filter criterion: Content: Media Files (field_media_files:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_field_media_files';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['relationship'] = 'file_to_node';
  $handler->display->display_options['filters']['delta']['value']['value'] = '0';
  $handler->display->display_options['filters']['delta']['group'] = 1;
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'audio' => 'audio',
    'video' => 'video',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Episode Search';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
  );
  /* Filter criterion: Content: Series (field_series) */
  $handler->display->display_options['filters']['field_series_tid']['id'] = 'field_series_tid';
  $handler->display->display_options['filters']['field_series_tid']['table'] = 'field_data_field_series';
  $handler->display->display_options['filters']['field_series_tid']['field'] = 'field_series_tid';
  $handler->display->display_options['filters']['field_series_tid']['relationship'] = 'file_to_node';
  $handler->display->display_options['filters']['field_series_tid']['value'] = '';
  $handler->display->display_options['filters']['field_series_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_series_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_series_tid']['expose']['operator_id'] = 'field_series_tid_op';
  $handler->display->display_options['filters']['field_series_tid']['expose']['label'] = 'Series';
  $handler->display->display_options['filters']['field_series_tid']['expose']['operator'] = 'field_series_tid_op';
  $handler->display->display_options['filters']['field_series_tid']['expose']['identifier'] = 'field_series_tid';
  $handler->display->display_options['filters']['field_series_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_series_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_series_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_series_tid']['vocabulary'] = 'series';
  $handler->display->display_options['path'] = 'media-files';

  /* Display: Series Taxonomy Page */
  $handler = $view->new_display('block', 'Series Taxonomy Page', 'block_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'audio' => 'audio',
    'document' => 'document',
    'video' => 'video',
  );
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['type']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['type']['group_info']['label'] = 'Media Type';
  $handler->display->display_options['filters']['type']['group_info']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Audio',
      'operator' => 'in',
      'value' => array(
        'audio' => 'audio',
        'all' => 0,
        'document' => 0,
        'image' => 0,
        'video' => 0,
      ),
    ),
    2 => array(
      'title' => 'Video',
      'operator' => 'in',
      'value' => array(
        'video' => 'video',
        'all' => 0,
        'audio' => 0,
        'document' => 0,
        'image' => 0,
      ),
    ),
    3 => array(
      'title' => 'Document',
      'operator' => 'in',
      'value' => array(
        'document' => 'document',
        'all' => 0,
        'audio' => 0,
        'image' => 0,
        'video' => 0,
      ),
    ),
  );
  $export['media_files'] = $view;

  return $export;
}
