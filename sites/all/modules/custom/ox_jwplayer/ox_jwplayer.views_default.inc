<?php
/**
 * @file
 * ox_jwplayer.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ox_jwplayer_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'embed_codes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'file_managed';
  $view->human_name = 'Embed codes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Embed codes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: File: Content using Media Files */
  $handler->display->display_options['relationships']['reverse_field_media_files_node']['id'] = 'reverse_field_media_files_node';
  $handler->display->display_options['relationships']['reverse_field_media_files_node']['table'] = 'file_managed';
  $handler->display->display_options['relationships']['reverse_field_media_files_node']['field'] = 'reverse_field_media_files_node';
  $handler->display->display_options['relationships']['reverse_field_media_files_node']['required'] = TRUE;
  /* Field: File: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'file_managed';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['machine_name'] = 0;
  /* Field: File: JW Player Embed-Code Link */
  $handler->display->display_options['fields']['ox_jwplayer_embed']['id'] = 'ox_jwplayer_embed';
  $handler->display->display_options['fields']['ox_jwplayer_embed']['table'] = 'file_managed';
  $handler->display->display_options['fields']['ox_jwplayer_embed']['field'] = 'ox_jwplayer_embed';
  $handler->display->display_options['fields']['ox_jwplayer_embed']['label'] = '';
  $handler->display->display_options['fields']['ox_jwplayer_embed']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['ox_jwplayer_embed']['alter']['text'] = '[type] Embed Code';
  $handler->display->display_options['fields']['ox_jwplayer_embed']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['ox_jwplayer_embed']['alter']['alt'] = 'Click here to copy HTML to embed this file on your site.';
  $handler->display->display_options['fields']['ox_jwplayer_embed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['ox_jwplayer_embed']['ox_jwplayer_message'] = 'Copy and paste this HTML snippet to embed the audio or video on your site:';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_media_files_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: File: Disable embedding (field_disable_embedding) */
  $handler->display->display_options['filters']['field_disable_embedding_value']['id'] = 'field_disable_embedding_value';
  $handler->display->display_options['filters']['field_disable_embedding_value']['table'] = 'field_data_field_disable_embedding';
  $handler->display->display_options['filters']['field_disable_embedding_value']['field'] = 'field_disable_embedding_value';
  $handler->display->display_options['filters']['field_disable_embedding_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_disable_embedding_value']['value'] = array(
    1 => '1',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="http://help.it.ox.ac.uk/podcasts/how-to-podcast#embedding_podcasts">Embed HELP</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $translatables['embed_codes'] = array(
    t('Master'),
    t('Embed codes'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('field_media_files'),
    t('[type] Embed Code'),
    t('Click here to copy HTML to embed this file on your site.'),
    t('All'),
    t('Block'),
    t('<a href="http://help.it.ox.ac.uk/podcasts/how-to-podcast#embedding_podcasts">Embed HELP</a>'),
  );
  $export['embed_codes'] = $view;

  return $export;
}
