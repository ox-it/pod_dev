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
  $view->name = 'admin_manage_featured';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Admin Manage Featured';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Featured Series Admin';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'field_people_image' => 'field_people_image',
    'name' => 'name',
    'field_unit' => 'field_unit',
    'field_featured_editable' => 'field_featured_editable',
  );
  $handler->display->display_options['style_options']['default'] = 'field_featured_editable';
  $handler->display->display_options['style_options']['info'] = array(
    'field_people_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_unit' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_featured_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['batch_size'] = '10';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'This view manages the "featured series" view on the front page. Choose at least 8 of these for display. 
<br>
Must click SAVE below for changes to take effect.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Taxonomy term: Image */
  $handler->display->display_options['fields']['field_people_image']['id'] = 'field_people_image';
  $handler->display->display_options['fields']['field_people_image']['table'] = 'field_data_field_people_image';
  $handler->display->display_options['fields']['field_people_image']['field'] = 'field_people_image';
  $handler->display->display_options['fields']['field_people_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_people_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Field: Oxford Unit */
  $handler->display->display_options['fields']['field_unit']['id'] = 'field_unit';
  $handler->display->display_options['fields']['field_unit']['table'] = 'field_data_field_unit';
  $handler->display->display_options['fields']['field_unit']['field'] = 'field_unit';
  $handler->display->display_options['fields']['field_unit']['delta_offset'] = '0';
  /* Field: Taxonomy term: Featured People (editable) */
  $handler->display->display_options['fields']['field_featured_editable']['id'] = 'field_featured_editable';
  $handler->display->display_options['fields']['field_featured_editable']['table'] = 'field_data_field_featured';
  $handler->display->display_options['fields']['field_featured_editable']['field'] = 'field_featured_editable';
  $handler->display->display_options['fields']['field_featured_editable']['label'] = 'Featured';
  $handler->display->display_options['fields']['field_featured_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_editable']['widget_type'] = 'options_buttons';
  $handler->display->display_options['fields']['field_featured_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_featured_editable']['suppress_description'] = 1;
  /* Sort criterion: Taxonomy term: Featured People (field_featured) */
  $handler->display->display_options['sorts']['field_featured_value']['id'] = 'field_featured_value';
  $handler->display->display_options['sorts']['field_featured_value']['table'] = 'field_data_field_featured';
  $handler->display->display_options['sorts']['field_featured_value']['field'] = 'field_featured_value';
  $handler->display->display_options['sorts']['field_featured_value']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_featured_value']['expose']['label'] = 'Featured (field_featured)';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'people' => 'people',
  );
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search People';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'name' => 'name',
  );
  /* Filter criterion: Taxonomy term: Featured People (field_featured) */
  $handler->display->display_options['filters']['field_featured_value']['id'] = 'field_featured_value';
  $handler->display->display_options['filters']['field_featured_value']['table'] = 'field_data_field_featured';
  $handler->display->display_options['filters']['field_featured_value']['field'] = 'field_featured_value';
  $handler->display->display_options['filters']['field_featured_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_featured_value']['expose']['operator_id'] = 'field_featured_value_op';
  $handler->display->display_options['filters']['field_featured_value']['expose']['label'] = 'Featured';
  $handler->display->display_options['filters']['field_featured_value']['expose']['operator'] = 'field_featured_value_op';
  $handler->display->display_options['filters']['field_featured_value']['expose']['identifier'] = 'field_featured_value';
  $handler->display->display_options['filters']['field_featured_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_featured_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Taxonomy term: Image (field_people_image:fid) */
  $handler->display->display_options['filters']['field_people_image_fid']['id'] = 'field_people_image_fid';
  $handler->display->display_options['filters']['field_people_image_fid']['table'] = 'field_data_field_people_image';
  $handler->display->display_options['filters']['field_people_image_fid']['field'] = 'field_people_image_fid';
  $handler->display->display_options['filters']['field_people_image_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_people_image_fid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_people_image_fid']['expose']['operator_id'] = 'field_people_image_fid_op';
  $handler->display->display_options['filters']['field_people_image_fid']['expose']['label'] = 'Image (field_people_image:fid)';
  $handler->display->display_options['filters']['field_people_image_fid']['expose']['operator'] = 'field_people_image_fid_op';
  $handler->display->display_options['filters']['field_people_image_fid']['expose']['identifier'] = 'field_people_image_fid';
  $handler->display->display_options['filters']['field_people_image_fid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_people_image_fid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_people_image_fid']['group_info']['label'] = 'Image (field_people_image:fid)';
  $handler->display->display_options['filters']['field_people_image_fid']['group_info']['identifier'] = 'field_people_image_fid';
  $handler->display->display_options['filters']['field_people_image_fid']['group_info']['group_items'] = array(
    1 => array(
      'title' => '',
      'operator' => 'not empty',
      'value' => array(
        'value' => '',
        'min' => '',
        'max' => '',
      ),
    ),
    2 => array(
      'title' => '',
      'operator' => 'not empty',
      'value' => array(
        'value' => '',
        'min' => '',
        'max' => '',
      ),
    ),
    3 => array(
      'title' => '',
      'operator' => 'not empty',
      'value' => array(
        'value' => '',
        'min' => '',
        'max' => '',
      ),
    ),
  );

  /* Display: People Admin */
  $handler = $view->new_display('page', 'People Admin', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured People Admin';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'field_people_image' => 'field_people_image',
    'name' => 'name',
    'field_unit' => 'field_unit',
    'field_featured_editable' => 'field_featured_editable',
  );
  $handler->display->display_options['style_options']['default'] = 'field_featured_editable';
  $handler->display->display_options['style_options']['info'] = array(
    'field_people_image' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_unit' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_featured_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['batch_size'] = '10';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'This view manages the "featured people" view on the front page. Choose at least 12 of these for display. 
<br>
Must click SAVE below for changes to take effect.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Image */
  $handler->display->display_options['fields']['field_people_image']['id'] = 'field_people_image';
  $handler->display->display_options['fields']['field_people_image']['table'] = 'field_data_field_people_image';
  $handler->display->display_options['fields']['field_people_image']['field'] = 'field_people_image';
  $handler->display->display_options['fields']['field_people_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_people_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Field: Oxford Unit */
  $handler->display->display_options['fields']['field_unit']['id'] = 'field_unit';
  $handler->display->display_options['fields']['field_unit']['table'] = 'field_data_field_unit';
  $handler->display->display_options['fields']['field_unit']['field'] = 'field_unit';
  $handler->display->display_options['fields']['field_unit']['delta_offset'] = '0';
  /* Field: Taxonomy term: Featured People (editable) */
  $handler->display->display_options['fields']['field_featured_editable']['id'] = 'field_featured_editable';
  $handler->display->display_options['fields']['field_featured_editable']['table'] = 'field_data_field_featured';
  $handler->display->display_options['fields']['field_featured_editable']['field'] = 'field_featured_editable';
  $handler->display->display_options['fields']['field_featured_editable']['label'] = 'Featured';
  $handler->display->display_options['fields']['field_featured_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_editable']['widget_type'] = 'options_onoff';
  $handler->display->display_options['fields']['field_featured_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_featured_editable']['suppress_description'] = 1;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'people' => 'people',
  );
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'name' => 'name',
  );
  /* Filter criterion: Taxonomy term: Image (field_people_image:fid) */
  $handler->display->display_options['filters']['field_people_image_fid']['id'] = 'field_people_image_fid';
  $handler->display->display_options['filters']['field_people_image_fid']['table'] = 'field_data_field_people_image';
  $handler->display->display_options['filters']['field_people_image_fid']['field'] = 'field_people_image_fid';
  $handler->display->display_options['filters']['field_people_image_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_people_image_fid']['expose']['operator_id'] = 'field_people_image_fid_op';
  $handler->display->display_options['filters']['field_people_image_fid']['expose']['label'] = 'Image';
  $handler->display->display_options['filters']['field_people_image_fid']['expose']['operator'] = 'field_people_image_fid_op';
  $handler->display->display_options['filters']['field_people_image_fid']['expose']['identifier'] = 'field_people_image_fid';
  $handler->display->display_options['filters']['field_people_image_fid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_people_image_fid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_people_image_fid']['group_info']['label'] = 'Image (field_people_image:fid)';
  $handler->display->display_options['filters']['field_people_image_fid']['group_info']['identifier'] = 'field_people_image_fid';
  $handler->display->display_options['filters']['field_people_image_fid']['group_info']['group_items'] = array(
    1 => array(
      'title' => '',
      'operator' => 'not empty',
      'value' => array(
        'value' => '',
        'min' => '',
        'max' => '',
      ),
    ),
    2 => array(
      'title' => '',
      'operator' => 'not empty',
      'value' => array(
        'value' => '',
        'min' => '',
        'max' => '',
      ),
    ),
    3 => array(
      'title' => '',
      'operator' => 'not empty',
      'value' => array(
        'value' => '',
        'min' => '',
        'max' => '',
      ),
    ),
  );
  $handler->display->display_options['path'] = 'manage/people';

  /* Display: Series Admin */
  $handler = $view->new_display('page', 'Series Admin', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'field_series_album_cover' => 'field_series_album_cover',
    'name' => 'name',
    'field_featured_series_editable' => 'field_featured_series_editable',
  );
  $handler->display->display_options['style_options']['default'] = 'field_featured_series_editable';
  $handler->display->display_options['style_options']['info'] = array(
    'field_series_album_cover' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_featured_series_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['batch_size'] = '10';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'This view manages the "featured series" view on the front page. Choose at least 8 of these for display. 
<br>
Must click SAVE below for changes to take effect.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Album Cover */
  $handler->display->display_options['fields']['field_series_album_cover']['id'] = 'field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['table'] = 'field_data_field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['field'] = 'field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_series_album_cover']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Featured Series (editable) */
  $handler->display->display_options['fields']['field_featured_series_editable']['id'] = 'field_featured_series_editable';
  $handler->display->display_options['fields']['field_featured_series_editable']['table'] = 'field_data_field_featured_series';
  $handler->display->display_options['fields']['field_featured_series_editable']['field'] = 'field_featured_series_editable';
  $handler->display->display_options['fields']['field_featured_series_editable']['label'] = 'Featured';
  $handler->display->display_options['fields']['field_featured_series_editable']['widget_type'] = 'options_onoff';
  $handler->display->display_options['fields']['field_featured_series_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_featured_series_editable']['suppress_description'] = 1;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'series' => 'series',
  );
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['path'] = 'manage/series';

  /* Display: Unit Admin */
  $handler = $view->new_display('page', 'Unit Admin', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Unit Admin';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'field_unit_image' => 'field_unit_image',
    'name' => 'name',
    'field_unit_featured_editable' => 'field_unit_featured_editable',
  );
  $handler->display->display_options['style_options']['default'] = 'field_unit_featured_editable';
  $handler->display->display_options['style_options']['info'] = array(
    'field_unit_image' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_unit_featured_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['batch_size'] = '10';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'This view manages the "featured departments & colleges" view on the front page. Choose at least 8 of these for display. 
<br>
Must click SAVE below for changes to take effect.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Image */
  $handler->display->display_options['fields']['field_unit_image']['id'] = 'field_unit_image';
  $handler->display->display_options['fields']['field_unit_image']['table'] = 'field_data_field_unit_image';
  $handler->display->display_options['fields']['field_unit_image']['field'] = 'field_unit_image';
  $handler->display->display_options['fields']['field_unit_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_unit_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Featured Dept/College (editable) */
  $handler->display->display_options['fields']['field_unit_featured_editable']['id'] = 'field_unit_featured_editable';
  $handler->display->display_options['fields']['field_unit_featured_editable']['table'] = 'field_data_field_unit_featured';
  $handler->display->display_options['fields']['field_unit_featured_editable']['field'] = 'field_unit_featured_editable';
  $handler->display->display_options['fields']['field_unit_featured_editable']['label'] = 'Featured';
  $handler->display->display_options['fields']['field_unit_featured_editable']['widget_type'] = 'options_onoff';
  $handler->display->display_options['fields']['field_unit_featured_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_unit_featured_editable']['suppress_description'] = 1;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Featured Dept/College (field_unit_featured) */
  $handler->display->display_options['sorts']['field_unit_featured_value']['id'] = 'field_unit_featured_value';
  $handler->display->display_options['sorts']['field_unit_featured_value']['table'] = 'field_data_field_unit_featured';
  $handler->display->display_options['sorts']['field_unit_featured_value']['field'] = 'field_unit_featured_value';
  $handler->display->display_options['sorts']['field_unit_featured_value']['order'] = 'DESC';
  /* Sort criterion: Taxonomy term: Image (field_unit_image:fid) */
  $handler->display->display_options['sorts']['field_unit_image_fid']['id'] = 'field_unit_image_fid';
  $handler->display->display_options['sorts']['field_unit_image_fid']['table'] = 'field_data_field_unit_image';
  $handler->display->display_options['sorts']['field_unit_image_fid']['field'] = 'field_unit_image_fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'units' => 'units',
  );
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['path'] = 'manage/units';

  /* Display: CC only Series */
  $handler = $view->new_display('page', 'CC only Series', 'page_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'field_series_album_cover' => 'field_series_album_cover',
    'name' => 'name',
    'field_cc_series_editable' => 'field_cc_series_editable',
  );
  $handler->display->display_options['style_options']['default'] = 'field_cc_series_editable';
  $handler->display->display_options['style_options']['info'] = array(
    'field_series_album_cover' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cc_series_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['batch_size'] = '10';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Album Cover */
  $handler->display->display_options['fields']['field_series_album_cover']['id'] = 'field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['table'] = 'field_data_field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['field'] = 'field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['label'] = '';
  $handler->display->display_options['fields']['field_series_album_cover']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_album_cover']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_series_album_cover']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Series Name';
  /* Field: Taxonomy term: CC Series (editable) */
  $handler->display->display_options['fields']['field_cc_series_editable']['id'] = 'field_cc_series_editable';
  $handler->display->display_options['fields']['field_cc_series_editable']['table'] = 'field_data_field_cc_series';
  $handler->display->display_options['fields']['field_cc_series_editable']['field'] = 'field_cc_series_editable';
  $handler->display->display_options['fields']['field_cc_series_editable']['label'] = 'CC-only Series';
  $handler->display->display_options['fields']['field_cc_series_editable']['widget_type'] = 'options_onoff';
  $handler->display->display_options['fields']['field_cc_series_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_cc_series_editable']['suppress_description'] = 1;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'series' => 'series',
  );
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['path'] = 'manage/cc-only';
  $export['admin_manage_featured'] = $view;

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

  /* Display: Embed Code Block */
  $handler = $view->new_display('block', 'Embed Code Block', 'block');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="http://help.it.ox.ac.uk/podcasts/how-to-podcast#embedding_podcasts">Embed HELP</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['block_description'] = 'Embed Code Block';
  $export['embed_codes'] = $view;

  $view = new view();
  $view->name = 'episode_featured_latest';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Episode Featured Latest';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Latest Episodes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Series (field_series) */
  $handler->display->display_options['relationships']['field_series_tid']['id'] = 'field_series_tid';
  $handler->display->display_options['relationships']['field_series_tid']['table'] = 'field_data_field_series';
  $handler->display->display_options['relationships']['field_series_tid']['field'] = 'field_series_tid';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'fieldset-latest-left';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'field_series_album_cover',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  /* Field: Taxonomy term: Album Cover */
  $handler->display->display_options['fields']['field_series_album_cover']['id'] = 'field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['table'] = 'field_data_field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['field'] = 'field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['relationship'] = 'field_series_tid';
  $handler->display->display_options['fields']['field_series_album_cover']['label'] = '';
  $handler->display->display_options['fields']['field_series_album_cover']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_album_cover']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_series_album_cover']['settings'] = array(
    'image_style' => 'series',
    'image_link' => '',
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['label'] = 'fieldset-latest-right';
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'title',
    1 => 'created',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'Y M d';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'search_api_facetapi_YEAR';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'episode' => 'episode',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['block_description'] = 'Episode Featured (latest) Block';
  $export['episode_featured_latest'] = $view;

  $view = new view();
  $view->name = 'episode_node_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'file_managed';
  $view->human_name = 'Episode Node View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'media-grid';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
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
  /* Relationship: Content: Series (field_series) */
  $handler->display->display_options['relationships']['field_series_tid']['id'] = 'field_series_tid';
  $handler->display->display_options['relationships']['field_series_tid']['table'] = 'field_data_field_series';
  $handler->display->display_options['relationships']['field_series_tid']['field'] = 'field_series_tid';
  $handler->display->display_options['relationships']['field_series_tid']['relationship'] = 'file_to_node';
  /* Field: Taxonomy term: Album Cover */
  $handler->display->display_options['fields']['field_series_album_cover']['id'] = 'field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['table'] = 'field_data_field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['field'] = 'field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['relationship'] = 'field_series_tid';
  $handler->display->display_options['fields']['field_series_album_cover']['label'] = '';
  $handler->display->display_options['fields']['field_series_album_cover']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_series_album_cover']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_album_cover']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_series_album_cover']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['relationship'] = 'file_to_node';
  $handler->display->display_options['fields']['term_node_tid']['label'] = '';
  $handler->display->display_options['fields']['term_node_tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['alter']['text'] = '[field_series_album_cover]
[term_node_tid-name]';
  $handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['limit'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'series' => 'series',
    'categories' => 0,
    'units' => 0,
    'keywords' => 0,
    'people' => 0,
    'tags' => 0,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_series_album_cover]
<br>
[term_node_tid]
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'file_to_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  /* Field: File: Rendered File */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_file';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
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

  /* Display: Episode Node Page (AV) */
  $handler = $view->new_display('block', 'Episode Node Page (AV)', 'episode_node_view');
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: File: Rendered File */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_file';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'file_to_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'episode' => 'episode',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'audio' => 'audio',
    'video' => 'video',
  );
  $handler->display->display_options['block_description'] = 'Episode Node View (AV)';

  /* Display: Episode Node Page (DOC) */
  $handler = $view->new_display('block', 'Episode Node Page (DOC)', 'block_1');
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: File: Rendered File */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_file';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'file_to_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'episode' => 'episode',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  $handler->display->display_options['block_description'] = 'Episode Node View (DOC)';
  $export['episode_node_view'] = $view;

  $view = new view();
  $view->name = 'episode_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Episode Page';
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'episode' => 'episode',
  );

  /* Display: EVA Title */
  $handler = $view->new_display('entity_view', 'EVA Title', 'entity_view_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'episode' => 'episode',
  );
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'episode',
  );

  /* Display: EVA Series Album Cover */
  $handler = $view->new_display('entity_view', 'EVA Series Album Cover', 'entity_view_2');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Series (field_series) */
  $handler->display->display_options['relationships']['field_series_tid']['id'] = 'field_series_tid';
  $handler->display->display_options['relationships']['field_series_tid']['table'] = 'field_data_field_series';
  $handler->display->display_options['relationships']['field_series_tid']['field'] = 'field_series_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Album Cover */
  $handler->display->display_options['fields']['field_series_album_cover']['id'] = 'field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['table'] = 'field_data_field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['field'] = 'field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['relationship'] = 'field_series_tid';
  $handler->display->display_options['fields']['field_series_album_cover']['label'] = 'Belongs to series';
  $handler->display->display_options['fields']['field_series_album_cover']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_album_cover']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_series_album_cover']['settings'] = array(
    'image_style' => 'series',
    'image_link' => 'content',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_series_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'episode' => 'episode',
  );
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'episode',
  );

  /* Display: EVA Unit */
  $handler = $view->new_display('entity_view', 'EVA Unit', 'entity_view_3');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Department / College';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'series' => 'series',
    'categories' => 0,
    'units' => 0,
    'keywords' => 0,
    'people' => 0,
    'tags' => 0,
  );
  /* Relationship: Field: Oxford Unit (field_unit) */
  $handler->display->display_options['relationships']['field_unit_tid']['id'] = 'field_unit_tid';
  $handler->display->display_options['relationships']['field_unit_tid']['table'] = 'field_data_field_unit';
  $handler->display->display_options['relationships']['field_unit_tid']['field'] = 'field_unit_tid';
  $handler->display->display_options['relationships']['field_unit_tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_unit_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'episode' => 'episode',
  );
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'episode',
  );

  /* Display: EVA Date */
  $handler = $view->new_display('entity_view', 'EVA Date', 'entity_view_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Created Date';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd F Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'search_api_facetapi_YEAR';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'episode' => 'episode',
  );
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'episode',
  );
  $handler->display->display_options['show_title'] = 1;
  $export['episode_page'] = $view;

  $view = new view();
  $view->name = 'episode_search_db_';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_episode_index';
  $view->human_name = 'Episode Search (DB)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Go';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Indexed Node: Series */
  $handler->display->display_options['relationships']['field_series']['id'] = 'field_series';
  $handler->display->display_options['relationships']['field_series']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['relationships']['field_series']['field'] = 'field_series';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'fieldset-top';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'fieldset_1',
    1 => 'fieldset_2',
    2 => 'fieldset_3',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['label'] = 'fieldset_top-left';
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'field_series_album_cover',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  /* Field: Taxonomy term: Album Cover */
  $handler->display->display_options['fields']['field_series_album_cover']['id'] = 'field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['table'] = 'entity_taxonomy_term';
  $handler->display->display_options['fields']['field_series_album_cover']['field'] = 'field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['relationship'] = 'field_series';
  $handler->display->display_options['fields']['field_series_album_cover']['label'] = '';
  $handler->display->display_options['fields']['field_series_album_cover']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_album_cover']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_series_album_cover']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_2']['id'] = 'fieldset_2';
  $handler->display->display_options['fields']['fieldset_2']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_2']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_2']['label'] = 'fieldset-top-middle';
  $handler->display->display_options['fields']['fieldset_2']['children'] = array(
    0 => 'body_value',
    1 => 'created',
    2 => 'field_licence',
    3 => 'nothing',
    4 => 'field_series_name',
    5 => 'field_series_field_unit',
    6 => 'field_people',
  );
  $handler->display->display_options['fields']['fieldset_2']['fieldset']['type'] = 'div';
  /* Field: The main body text: Text (indexed) */
  $handler->display->display_options['fields']['body_value']['id'] = 'body_value';
  $handler->display->display_options['fields']['body_value']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['fields']['body_value']['field'] = 'body_value';
  $handler->display->display_options['fields']['body_value']['label'] = '';
  $handler->display->display_options['fields']['body_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_value']['link_to_entity'] = 0;
  /* Field: Indexed Node: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd F Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'search_api_facetapi_YEAR';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  /* Field: Indexed Node: Licence */
  $handler->display->display_options['fields']['field_licence']['id'] = 'field_licence';
  $handler->display->display_options['fields']['field_licence']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['fields']['field_licence']['field'] = 'field_licence';
  $handler->display->display_options['fields']['field_licence']['label'] = '';
  $handler->display->display_options['fields']['field_licence']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_licence']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="created-float">Created: [created]</div><div class="license-float">[field_licence]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Series: Name (indexed) */
  $handler->display->display_options['fields']['field_series_name']['id'] = 'field_series_name';
  $handler->display->display_options['fields']['field_series_name']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['fields']['field_series_name']['field'] = 'field_series_name';
  $handler->display->display_options['fields']['field_series_name']['label'] = 'Series';
  $handler->display->display_options['fields']['field_series_name']['link_to_entity'] = 1;
  /* Field: Series: Oxford Unit (indexed) */
  $handler->display->display_options['fields']['field_series_field_unit']['id'] = 'field_series_field_unit';
  $handler->display->display_options['fields']['field_series_field_unit']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['fields']['field_series_field_unit']['field'] = 'field_series_field_unit';
  $handler->display->display_options['fields']['field_series_field_unit']['label'] = 'Oxford Unit';
  $handler->display->display_options['fields']['field_series_field_unit']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_series_field_unit']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_series_field_unit']['bypass_access'] = 0;
  /* Field: Indexed Node: People */
  $handler->display->display_options['fields']['field_people']['id'] = 'field_people';
  $handler->display->display_options['fields']['field_people']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['fields']['field_people']['field'] = 'field_people';
  $handler->display->display_options['fields']['field_people']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_people']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_people']['bypass_access'] = 0;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_3']['id'] = 'fieldset_3';
  $handler->display->display_options['fields']['fieldset_3']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_3']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_3']['label'] = 'fieldset-top-right';
  $handler->display->display_options['fields']['fieldset_3']['children'] = array(
    0 => 'field_media_files',
  );
  $handler->display->display_options['fields']['fieldset_3']['fieldset']['type'] = 'div';
  /* Field: Indexed Node: Media Files */
  $handler->display->display_options['fields']['field_media_files']['id'] = 'field_media_files';
  $handler->display->display_options['fields']['field_media_files']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['fields']['field_media_files']['field'] = 'field_media_files';
  $handler->display->display_options['fields']['field_media_files']['label'] = '';
  $handler->display->display_options['fields']['field_media_files']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_media_files']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_media_files']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_media_files']['settings'] = array(
    'file_view_mode' => 'preview',
  );
  $handler->display->display_options['fields']['field_media_files']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_media_files']['multi_type'] = 'ul';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_4']['id'] = 'fieldset_4';
  $handler->display->display_options['fields']['fieldset_4']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_4']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_4']['label'] = 'fieldset-bottom';
  $handler->display->display_options['fields']['fieldset_4']['children'] = array(
    0 => 'search_api_excerpt',
  );
  $handler->display->display_options['fields']['fieldset_4']['fieldset']['type'] = 'div';
  /* Field: Search: Excerpt */
  $handler->display->display_options['fields']['search_api_excerpt']['id'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['fields']['search_api_excerpt']['field'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['label'] = '';
  $handler->display->display_options['fields']['search_api_excerpt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['search_api_excerpt']['link_to_entity'] = 0;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Fulltext search (DB)';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'body:value' => 'body:value',
    'field_episode_description_long:value' => 'field_episode_description_long:value',
    'field_series:name' => 'field_series:name',
    'title' => 'title',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'fieldset-top';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'title',
    1 => 'fieldset_1',
    2 => 'fieldset_2',
    3 => 'fieldset_3',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['label'] = 'fieldset_top-left';
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'field_series_album_cover',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  /* Field: Taxonomy term: Album Cover */
  $handler->display->display_options['fields']['field_series_album_cover']['id'] = 'field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['table'] = 'entity_taxonomy_term';
  $handler->display->display_options['fields']['field_series_album_cover']['field'] = 'field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['relationship'] = 'field_series';
  $handler->display->display_options['fields']['field_series_album_cover']['label'] = '';
  $handler->display->display_options['fields']['field_series_album_cover']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_album_cover']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_series_album_cover']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_2']['id'] = 'fieldset_2';
  $handler->display->display_options['fields']['fieldset_2']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_2']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_2']['label'] = 'fieldset-top-middle';
  $handler->display->display_options['fields']['fieldset_2']['children'] = array(
    0 => 'body_value',
    1 => 'created',
    2 => 'field_licence',
    3 => 'nothing',
    4 => 'field_series_name',
    5 => 'field_series_field_unit',
    6 => 'field_people',
  );
  $handler->display->display_options['fields']['fieldset_2']['fieldset']['type'] = 'div';
  /* Field: The main body text: Text (indexed) */
  $handler->display->display_options['fields']['body_value']['id'] = 'body_value';
  $handler->display->display_options['fields']['body_value']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['fields']['body_value']['field'] = 'body_value';
  $handler->display->display_options['fields']['body_value']['label'] = '';
  $handler->display->display_options['fields']['body_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_value']['link_to_entity'] = 0;
  /* Field: Indexed Node: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd F Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'search_api_facetapi_YEAR';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  /* Field: Indexed Node: Licence */
  $handler->display->display_options['fields']['field_licence']['id'] = 'field_licence';
  $handler->display->display_options['fields']['field_licence']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['fields']['field_licence']['field'] = 'field_licence';
  $handler->display->display_options['fields']['field_licence']['label'] = '';
  $handler->display->display_options['fields']['field_licence']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_licence']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="created-float">Created: [created]</div><div class="license-float">[field_licence]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Series: Name (indexed) */
  $handler->display->display_options['fields']['field_series_name']['id'] = 'field_series_name';
  $handler->display->display_options['fields']['field_series_name']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['fields']['field_series_name']['field'] = 'field_series_name';
  $handler->display->display_options['fields']['field_series_name']['label'] = 'Series';
  $handler->display->display_options['fields']['field_series_name']['link_to_entity'] = 1;
  /* Field: Series: Oxford Unit (indexed) */
  $handler->display->display_options['fields']['field_series_field_unit']['id'] = 'field_series_field_unit';
  $handler->display->display_options['fields']['field_series_field_unit']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['fields']['field_series_field_unit']['field'] = 'field_series_field_unit';
  $handler->display->display_options['fields']['field_series_field_unit']['label'] = 'Oxford Unit';
  $handler->display->display_options['fields']['field_series_field_unit']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_series_field_unit']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_series_field_unit']['bypass_access'] = 0;
  /* Field: Indexed Node: People */
  $handler->display->display_options['fields']['field_people']['id'] = 'field_people';
  $handler->display->display_options['fields']['field_people']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['fields']['field_people']['field'] = 'field_people';
  $handler->display->display_options['fields']['field_people']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_people']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_people']['bypass_access'] = 0;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_3']['id'] = 'fieldset_3';
  $handler->display->display_options['fields']['fieldset_3']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_3']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_3']['label'] = 'fieldset-top-right';
  $handler->display->display_options['fields']['fieldset_3']['children'] = array(
    0 => 'field_media_files',
  );
  $handler->display->display_options['fields']['fieldset_3']['fieldset']['type'] = 'div';
  /* Field: Indexed Node: Media Files */
  $handler->display->display_options['fields']['field_media_files']['id'] = 'field_media_files';
  $handler->display->display_options['fields']['field_media_files']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['fields']['field_media_files']['field'] = 'field_media_files';
  $handler->display->display_options['fields']['field_media_files']['label'] = '';
  $handler->display->display_options['fields']['field_media_files']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_media_files']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_media_files']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_media_files']['settings'] = array(
    'file_view_mode' => 'preview',
  );
  $handler->display->display_options['fields']['field_media_files']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_media_files']['multi_type'] = 'ul';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_4']['id'] = 'fieldset_4';
  $handler->display->display_options['fields']['fieldset_4']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_4']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_4']['label'] = 'fieldset-bottom';
  $handler->display->display_options['fields']['fieldset_4']['children'] = array(
    0 => 'search_api_excerpt',
  );
  $handler->display->display_options['fields']['fieldset_4']['fieldset']['type'] = 'div';
  /* Field: Search: Excerpt */
  $handler->display->display_options['fields']['search_api_excerpt']['id'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['fields']['search_api_excerpt']['field'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['label'] = '';
  $handler->display->display_options['fields']['search_api_excerpt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['search_api_excerpt']['link_to_entity'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Node: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Created';
  /* Sort criterion: Indexed Node: Title A-Z Glossary */
  $handler->display->display_options['sorts']['title_az_glossary']['id'] = 'title_az_glossary';
  $handler->display->display_options['sorts']['title_az_glossary']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['sorts']['title_az_glossary']['field'] = 'title_az_glossary';
  $handler->display->display_options['sorts']['title_az_glossary']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title_az_glossary']['expose']['label'] = 'Title A-Z';
  $handler->display->display_options['path'] = 'search';

  /* Display: EVA Field (Series) */
  $handler = $view->new_display('entity_view', 'EVA Field (Series)', 'entity_view_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '@total episodes (@start - @end) ';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'fieldset-top';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'title',
    1 => 'fieldset_1',
    2 => 'fieldset_2',
    3 => 'fieldset_3',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['label'] = 'fieldset_top-left';
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'field_series_album_cover',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_2']['id'] = 'fieldset_2';
  $handler->display->display_options['fields']['fieldset_2']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_2']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_2']['label'] = 'fieldset-top-middle';
  $handler->display->display_options['fields']['fieldset_2']['children'] = array(
    0 => 'body_value',
    1 => 'created',
    2 => 'field_licence',
    3 => 'nothing',
    4 => 'field_series_name',
    5 => 'field_series_field_unit',
    6 => 'field_people',
  );
  $handler->display->display_options['fields']['fieldset_2']['fieldset']['type'] = 'div';
  /* Field: The main body text: Text (indexed) */
  $handler->display->display_options['fields']['body_value']['id'] = 'body_value';
  $handler->display->display_options['fields']['body_value']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['fields']['body_value']['field'] = 'body_value';
  $handler->display->display_options['fields']['body_value']['label'] = '';
  $handler->display->display_options['fields']['body_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_value']['link_to_entity'] = 0;
  /* Field: Indexed Node: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd F Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'search_api_facetapi_YEAR';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  /* Field: Indexed Node: Licence */
  $handler->display->display_options['fields']['field_licence']['id'] = 'field_licence';
  $handler->display->display_options['fields']['field_licence']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['fields']['field_licence']['field'] = 'field_licence';
  $handler->display->display_options['fields']['field_licence']['label'] = '';
  $handler->display->display_options['fields']['field_licence']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_licence']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="created-float">Created: [created]</div><div class="license-float">[field_licence]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: People */
  $handler->display->display_options['fields']['field_people']['id'] = 'field_people';
  $handler->display->display_options['fields']['field_people']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['fields']['field_people']['field'] = 'field_people';
  $handler->display->display_options['fields']['field_people']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_people']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_people']['bypass_access'] = 0;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_3']['id'] = 'fieldset_3';
  $handler->display->display_options['fields']['fieldset_3']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_3']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_3']['label'] = 'fieldset-top-right';
  $handler->display->display_options['fields']['fieldset_3']['children'] = array(
    0 => 'field_media_files',
  );
  $handler->display->display_options['fields']['fieldset_3']['fieldset']['type'] = 'div';
  /* Field: Indexed Node: Media Files */
  $handler->display->display_options['fields']['field_media_files']['id'] = 'field_media_files';
  $handler->display->display_options['fields']['field_media_files']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['fields']['field_media_files']['field'] = 'field_media_files';
  $handler->display->display_options['fields']['field_media_files']['label'] = '';
  $handler->display->display_options['fields']['field_media_files']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_media_files']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_media_files']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_media_files']['settings'] = array(
    'file_view_mode' => 'preview',
  );
  $handler->display->display_options['fields']['field_media_files']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_media_files']['multi_type'] = 'ul';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_4']['id'] = 'fieldset_4';
  $handler->display->display_options['fields']['fieldset_4']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_4']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_4']['label'] = 'fieldset-bottom';
  $handler->display->display_options['fields']['fieldset_4']['children'] = array(
    0 => 'search_api_excerpt',
  );
  $handler->display->display_options['fields']['fieldset_4']['fieldset']['type'] = 'div';
  /* Field: Search: Excerpt */
  $handler->display->display_options['fields']['search_api_excerpt']['id'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['fields']['search_api_excerpt']['field'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['label'] = '';
  $handler->display->display_options['fields']['search_api_excerpt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['search_api_excerpt']['link_to_entity'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Node: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Date';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Search: Indexed taxonomy term fields */
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['id'] = 'search_api_views_taxonomy_term';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['field'] = 'search_api_views_taxonomy_term';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['default_action'] = 'default';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['default_argument_options']['vocabularies'] = array(
    'series' => 'series',
  );
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['validate_options']['vocabularies'] = array(
    'series' => 'series',
  );
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['not'] = 0;
  $handler->display->display_options['entity_type'] = 'taxonomy_term';
  $handler->display->display_options['bundles'] = array(
    0 => 'series',
  );

  /* Display: EVA Field (People) */
  $handler = $view->new_display('entity_view', 'EVA Field (People)', 'entity_view_2');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '@total episodes (@start - @end) ';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'fieldset-top';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'fieldset_1',
    1 => 'fieldset_2',
    2 => 'fieldset_3',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['label'] = 'fieldset_top-left';
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'field_series_album_cover',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  /* Field: Taxonomy term: Album Cover */
  $handler->display->display_options['fields']['field_series_album_cover']['id'] = 'field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['table'] = 'entity_taxonomy_term';
  $handler->display->display_options['fields']['field_series_album_cover']['field'] = 'field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['relationship'] = 'field_series';
  $handler->display->display_options['fields']['field_series_album_cover']['label'] = '';
  $handler->display->display_options['fields']['field_series_album_cover']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_album_cover']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_series_album_cover']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_2']['id'] = 'fieldset_2';
  $handler->display->display_options['fields']['fieldset_2']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_2']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_2']['label'] = 'fieldset-top-middle';
  $handler->display->display_options['fields']['fieldset_2']['children'] = array(
    0 => 'body_value',
    1 => 'created',
    2 => 'field_licence',
    3 => 'nothing',
    4 => 'field_series_name',
    5 => 'field_series_field_unit',
    6 => 'field_people',
  );
  $handler->display->display_options['fields']['fieldset_2']['fieldset']['type'] = 'div';
  /* Field: The main body text: Text (indexed) */
  $handler->display->display_options['fields']['body_value']['id'] = 'body_value';
  $handler->display->display_options['fields']['body_value']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['fields']['body_value']['field'] = 'body_value';
  $handler->display->display_options['fields']['body_value']['label'] = '';
  $handler->display->display_options['fields']['body_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_value']['link_to_entity'] = 0;
  /* Field: Indexed Node: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd F Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'search_api_facetapi_YEAR';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  /* Field: Indexed Node: Licence */
  $handler->display->display_options['fields']['field_licence']['id'] = 'field_licence';
  $handler->display->display_options['fields']['field_licence']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['fields']['field_licence']['field'] = 'field_licence';
  $handler->display->display_options['fields']['field_licence']['label'] = '';
  $handler->display->display_options['fields']['field_licence']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_licence']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="created-float">Created: [created]</div><div class="license-float">[field_licence]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Series: Name (indexed) */
  $handler->display->display_options['fields']['field_series_name']['id'] = 'field_series_name';
  $handler->display->display_options['fields']['field_series_name']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['fields']['field_series_name']['field'] = 'field_series_name';
  $handler->display->display_options['fields']['field_series_name']['label'] = 'Series';
  $handler->display->display_options['fields']['field_series_name']['link_to_entity'] = 1;
  /* Field: Series: Oxford Unit (indexed) */
  $handler->display->display_options['fields']['field_series_field_unit']['id'] = 'field_series_field_unit';
  $handler->display->display_options['fields']['field_series_field_unit']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['fields']['field_series_field_unit']['field'] = 'field_series_field_unit';
  $handler->display->display_options['fields']['field_series_field_unit']['label'] = 'Oxford Unit';
  $handler->display->display_options['fields']['field_series_field_unit']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_series_field_unit']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_series_field_unit']['bypass_access'] = 0;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_3']['id'] = 'fieldset_3';
  $handler->display->display_options['fields']['fieldset_3']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_3']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_3']['label'] = 'fieldset-top-right';
  $handler->display->display_options['fields']['fieldset_3']['children'] = array(
    0 => 'field_media_files',
  );
  $handler->display->display_options['fields']['fieldset_3']['fieldset']['type'] = 'div';
  /* Field: Indexed Node: Media Files */
  $handler->display->display_options['fields']['field_media_files']['id'] = 'field_media_files';
  $handler->display->display_options['fields']['field_media_files']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['fields']['field_media_files']['field'] = 'field_media_files';
  $handler->display->display_options['fields']['field_media_files']['label'] = '';
  $handler->display->display_options['fields']['field_media_files']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_media_files']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_media_files']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_media_files']['settings'] = array(
    'file_view_mode' => 'preview',
  );
  $handler->display->display_options['fields']['field_media_files']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_media_files']['multi_type'] = 'ul';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_4']['id'] = 'fieldset_4';
  $handler->display->display_options['fields']['fieldset_4']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_4']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_4']['label'] = 'fieldset-bottom';
  $handler->display->display_options['fields']['fieldset_4']['children'] = array(
    0 => 'search_api_excerpt',
  );
  $handler->display->display_options['fields']['fieldset_4']['fieldset']['type'] = 'div';
  /* Field: Search: Excerpt */
  $handler->display->display_options['fields']['search_api_excerpt']['id'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['fields']['search_api_excerpt']['field'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['label'] = '';
  $handler->display->display_options['fields']['search_api_excerpt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['search_api_excerpt']['link_to_entity'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Node: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Date';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Search: Indexed taxonomy term fields */
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['id'] = 'search_api_views_taxonomy_term';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['field'] = 'search_api_views_taxonomy_term';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['default_action'] = 'default';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['default_argument_options']['vocabularies'] = array(
    'people' => 'people',
  );
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['validate_options']['vocabularies'] = array(
    'people' => 'people',
  );
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['not'] = 0;
  $handler->display->display_options['entity_type'] = 'taxonomy_term';
  $handler->display->display_options['bundles'] = array(
    0 => 'people',
  );

  /* Display: EVA Field (Unit) */
  $handler = $view->new_display('entity_view', 'EVA Field (Unit)', 'entity_view_3');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '@total episodes (@start - @end) ';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'fieldset-top';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'fieldset_1',
    1 => 'fieldset_2',
    2 => 'fieldset_3',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['label'] = 'fieldset_top-left';
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'field_series_album_cover',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  /* Field: Taxonomy term: Album Cover */
  $handler->display->display_options['fields']['field_series_album_cover']['id'] = 'field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['table'] = 'entity_taxonomy_term';
  $handler->display->display_options['fields']['field_series_album_cover']['field'] = 'field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['relationship'] = 'field_series';
  $handler->display->display_options['fields']['field_series_album_cover']['label'] = '';
  $handler->display->display_options['fields']['field_series_album_cover']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_album_cover']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_series_album_cover']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_2']['id'] = 'fieldset_2';
  $handler->display->display_options['fields']['fieldset_2']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_2']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_2']['label'] = 'fieldset-top-middle';
  $handler->display->display_options['fields']['fieldset_2']['children'] = array(
    0 => 'body_value',
    1 => 'created',
    2 => 'field_licence',
    3 => 'nothing',
    4 => 'field_series_name',
    5 => 'field_series_field_unit',
    6 => 'field_people',
  );
  $handler->display->display_options['fields']['fieldset_2']['fieldset']['type'] = 'div';
  /* Field: The main body text: Text (indexed) */
  $handler->display->display_options['fields']['body_value']['id'] = 'body_value';
  $handler->display->display_options['fields']['body_value']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['fields']['body_value']['field'] = 'body_value';
  $handler->display->display_options['fields']['body_value']['label'] = '';
  $handler->display->display_options['fields']['body_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_value']['link_to_entity'] = 0;
  /* Field: Indexed Node: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd F Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'search_api_facetapi_YEAR';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  /* Field: Indexed Node: Licence */
  $handler->display->display_options['fields']['field_licence']['id'] = 'field_licence';
  $handler->display->display_options['fields']['field_licence']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['fields']['field_licence']['field'] = 'field_licence';
  $handler->display->display_options['fields']['field_licence']['label'] = '';
  $handler->display->display_options['fields']['field_licence']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_licence']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="created-float">Created: [created]</div><div class="license-float">[field_licence]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Series: Name (indexed) */
  $handler->display->display_options['fields']['field_series_name']['id'] = 'field_series_name';
  $handler->display->display_options['fields']['field_series_name']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['fields']['field_series_name']['field'] = 'field_series_name';
  $handler->display->display_options['fields']['field_series_name']['label'] = 'Series';
  $handler->display->display_options['fields']['field_series_name']['link_to_entity'] = 1;
  /* Field: Indexed Node: People */
  $handler->display->display_options['fields']['field_people']['id'] = 'field_people';
  $handler->display->display_options['fields']['field_people']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['fields']['field_people']['field'] = 'field_people';
  $handler->display->display_options['fields']['field_people']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_people']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_people']['bypass_access'] = 0;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_3']['id'] = 'fieldset_3';
  $handler->display->display_options['fields']['fieldset_3']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_3']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_3']['label'] = 'fieldset-top-right';
  $handler->display->display_options['fields']['fieldset_3']['children'] = array(
    0 => 'field_media_files',
  );
  $handler->display->display_options['fields']['fieldset_3']['fieldset']['type'] = 'div';
  /* Field: Indexed Node: Media Files */
  $handler->display->display_options['fields']['field_media_files']['id'] = 'field_media_files';
  $handler->display->display_options['fields']['field_media_files']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['fields']['field_media_files']['field'] = 'field_media_files';
  $handler->display->display_options['fields']['field_media_files']['label'] = '';
  $handler->display->display_options['fields']['field_media_files']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_media_files']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_media_files']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_media_files']['settings'] = array(
    'file_view_mode' => 'preview',
  );
  $handler->display->display_options['fields']['field_media_files']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_media_files']['multi_type'] = 'ul';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_4']['id'] = 'fieldset_4';
  $handler->display->display_options['fields']['fieldset_4']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_4']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_4']['label'] = 'fieldset-bottom';
  $handler->display->display_options['fields']['fieldset_4']['children'] = array(
    0 => 'search_api_excerpt',
  );
  $handler->display->display_options['fields']['fieldset_4']['fieldset']['type'] = 'div';
  /* Field: Search: Excerpt */
  $handler->display->display_options['fields']['search_api_excerpt']['id'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['fields']['search_api_excerpt']['field'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['label'] = '';
  $handler->display->display_options['fields']['search_api_excerpt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['search_api_excerpt']['link_to_entity'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Node: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Date';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Search: Indexed taxonomy term fields */
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['id'] = 'search_api_views_taxonomy_term';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['field'] = 'search_api_views_taxonomy_term';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['default_action'] = 'default';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['default_argument_options']['vocabularies'] = array(
    'units' => 'units',
  );
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['validate_options']['vocabularies'] = array(
    'units' => 'units',
  );
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['not'] = 0;
  $handler->display->display_options['entity_type'] = 'taxonomy_term';
  $handler->display->display_options['bundles'] = array(
    0 => 'units',
  );
  $export['episode_search_db_'] = $view;

  $view = new view();
  $view->name = 'episode_search_db_pageholder';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_episode_index';
  $view->human_name = 'Episode Search (DB) Pageholder';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<input id="hideseek-search" name="hideseek-search" placeholder="Search Keywords" type="text" data-list=".sidr-class-view-content" >
<a id="sidr-close-menu">✕</a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_episode_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;

  /* Display: Keyword Facets block */
  $handler = $view->new_display('search_api_views_facets_block', 'Keyword Facets block', 'search_api_views_facets_block_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '800';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['block_description'] = 'Episode Search (DB) Anywhere Keywords';
  $handler->display->display_options['linked_path'] = 'search';
  $handler->display->display_options['facet_field'] = 'field_keywords';
  $handler->display->display_options['hide_block'] = 0;
  $export['episode_search_db_pageholder'] = $view;

  $view = new view();
  $view->name = 'episode_search_solr_';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_episode_index_solr';
  $view->human_name = 'Episode Search (Solr)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['search_api_bypass_access'] = 0;
  $handler->display->display_options['query']['options']['entity_access'] = 0;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Go';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '35';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Indexed Node: Series */
  $handler->display->display_options['relationships']['field_series']['id'] = 'field_series';
  $handler->display->display_options['relationships']['field_series']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['relationships']['field_series']['field'] = 'field_series';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_2']['id'] = 'fieldset_2';
  $handler->display->display_options['fields']['fieldset_2']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_2']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_2']['label'] = 'fieldset-top';
  $handler->display->display_options['fields']['fieldset_2']['children'] = array(
    0 => 'title',
    1 => 'fieldset',
    2 => 'fieldset_5',
    3 => 'fieldset_1',
  );
  $handler->display->display_options['fields']['fieldset_2']['fieldset']['type'] = 'div';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'fieldset_top-left';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'field_series_album_cover',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  /* Field: Taxonomy term: Album Cover */
  $handler->display->display_options['fields']['field_series_album_cover']['id'] = 'field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['table'] = 'entity_taxonomy_term';
  $handler->display->display_options['fields']['field_series_album_cover']['field'] = 'field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['relationship'] = 'field_series';
  $handler->display->display_options['fields']['field_series_album_cover']['label'] = '';
  $handler->display->display_options['fields']['field_series_album_cover']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_album_cover']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_series_album_cover']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_5']['id'] = 'fieldset_5';
  $handler->display->display_options['fields']['fieldset_5']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_5']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_5']['label'] = 'fieldset-top-middle';
  $handler->display->display_options['fields']['fieldset_5']['children'] = array(
    0 => 'body_value',
    1 => 'field_series_name',
    2 => 'field_series_field_unit',
    3 => 'field_people',
  );
  $handler->display->display_options['fields']['fieldset_5']['fieldset']['type'] = 'div';
  /* Field: The main body text: Text (indexed) */
  $handler->display->display_options['fields']['body_value']['id'] = 'body_value';
  $handler->display->display_options['fields']['body_value']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['fields']['body_value']['field'] = 'body_value';
  $handler->display->display_options['fields']['body_value']['label'] = '';
  $handler->display->display_options['fields']['body_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_value']['link_to_entity'] = 0;
  /* Field: Series: Name (indexed) */
  $handler->display->display_options['fields']['field_series_name']['id'] = 'field_series_name';
  $handler->display->display_options['fields']['field_series_name']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['fields']['field_series_name']['field'] = 'field_series_name';
  $handler->display->display_options['fields']['field_series_name']['label'] = 'Series';
  $handler->display->display_options['fields']['field_series_name']['link_to_entity'] = 1;
  /* Field: Series: Oxford Unit (indexed) */
  $handler->display->display_options['fields']['field_series_field_unit']['id'] = 'field_series_field_unit';
  $handler->display->display_options['fields']['field_series_field_unit']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['fields']['field_series_field_unit']['field'] = 'field_series_field_unit';
  $handler->display->display_options['fields']['field_series_field_unit']['label'] = 'Oxford Unit';
  $handler->display->display_options['fields']['field_series_field_unit']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_series_field_unit']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_series_field_unit']['bypass_access'] = 0;
  /* Field: Indexed Node: People */
  $handler->display->display_options['fields']['field_people']['id'] = 'field_people';
  $handler->display->display_options['fields']['field_people']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['fields']['field_people']['field'] = 'field_people';
  $handler->display->display_options['fields']['field_people']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_people']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_people']['bypass_access'] = 0;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['label'] = 'fieldset-top-right';
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'field_media_files',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  /* Field: Indexed Node: Media Files */
  $handler->display->display_options['fields']['field_media_files']['id'] = 'field_media_files';
  $handler->display->display_options['fields']['field_media_files']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['fields']['field_media_files']['field'] = 'field_media_files';
  $handler->display->display_options['fields']['field_media_files']['label'] = '';
  $handler->display->display_options['fields']['field_media_files']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_media_files']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_media_files']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_media_files']['settings'] = array(
    'file_view_mode' => 'preview',
  );
  $handler->display->display_options['fields']['field_media_files']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_media_files']['multi_type'] = 'ul';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_4']['id'] = 'fieldset_4';
  $handler->display->display_options['fields']['fieldset_4']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_4']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_4']['label'] = 'fieldset-bottom';
  $handler->display->display_options['fields']['fieldset_4']['children'] = array(
    0 => 'search_api_excerpt',
  );
  $handler->display->display_options['fields']['fieldset_4']['fieldset']['type'] = 'div';
  /* Field: Search: Excerpt */
  $handler->display->display_options['fields']['search_api_excerpt']['id'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['fields']['search_api_excerpt']['field'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['label'] = '';
  $handler->display->display_options['fields']['search_api_excerpt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['search_api_excerpt']['link_to_entity'] = 0;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Fulltext search (Solr)';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'body:value' => 'body:value',
    'field_episode_description_long:value' => 'field_episode_description_long:value',
    'field_series:name' => 'field_series:name',
    'title' => 'title',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '10, 20, 40, 60, 100';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_2']['id'] = 'fieldset_2';
  $handler->display->display_options['fields']['fieldset_2']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_2']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_2']['label'] = 'fieldset-top';
  $handler->display->display_options['fields']['fieldset_2']['children'] = array(
    0 => 'title',
    1 => 'fieldset',
    2 => 'fieldset_5',
    3 => 'fieldset_1',
  );
  $handler->display->display_options['fields']['fieldset_2']['fieldset']['type'] = 'div';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'fieldset_top-left';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'field_series_album_cover',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  /* Field: Taxonomy term: Album Cover */
  $handler->display->display_options['fields']['field_series_album_cover']['id'] = 'field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['table'] = 'entity_taxonomy_term';
  $handler->display->display_options['fields']['field_series_album_cover']['field'] = 'field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['relationship'] = 'field_series';
  $handler->display->display_options['fields']['field_series_album_cover']['label'] = '';
  $handler->display->display_options['fields']['field_series_album_cover']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_album_cover']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_series_album_cover']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_5']['id'] = 'fieldset_5';
  $handler->display->display_options['fields']['fieldset_5']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_5']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_5']['label'] = 'fieldset-top-middle';
  $handler->display->display_options['fields']['fieldset_5']['children'] = array(
    0 => 'body_value',
    1 => 'created',
    2 => 'field_licence',
    3 => 'nothing',
    4 => 'field_series_name',
    5 => 'field_series_field_unit',
    6 => 'field_people',
  );
  $handler->display->display_options['fields']['fieldset_5']['fieldset']['type'] = 'div';
  /* Field: The main body text: Text (indexed) */
  $handler->display->display_options['fields']['body_value']['id'] = 'body_value';
  $handler->display->display_options['fields']['body_value']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['fields']['body_value']['field'] = 'body_value';
  $handler->display->display_options['fields']['body_value']['label'] = '';
  $handler->display->display_options['fields']['body_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_value']['link_to_entity'] = 0;
  /* Field: Indexed Node: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd F Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'search_api_facetapi_YEAR';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  /* Field: Indexed Node: Licence */
  $handler->display->display_options['fields']['field_licence']['id'] = 'field_licence';
  $handler->display->display_options['fields']['field_licence']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['fields']['field_licence']['field'] = 'field_licence';
  $handler->display->display_options['fields']['field_licence']['label'] = '';
  $handler->display->display_options['fields']['field_licence']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_licence']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_licence']['alter']['text'] = 'CC';
  $handler->display->display_options['fields']['field_licence']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="created-float">Created: [created]</div><div class="license-float">[field_licence]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Series: Name (indexed) */
  $handler->display->display_options['fields']['field_series_name']['id'] = 'field_series_name';
  $handler->display->display_options['fields']['field_series_name']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['fields']['field_series_name']['field'] = 'field_series_name';
  $handler->display->display_options['fields']['field_series_name']['label'] = 'Series';
  $handler->display->display_options['fields']['field_series_name']['link_to_entity'] = 1;
  /* Field: Series: Oxford Unit (indexed) */
  $handler->display->display_options['fields']['field_series_field_unit']['id'] = 'field_series_field_unit';
  $handler->display->display_options['fields']['field_series_field_unit']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['fields']['field_series_field_unit']['field'] = 'field_series_field_unit';
  $handler->display->display_options['fields']['field_series_field_unit']['label'] = 'Oxford Unit';
  $handler->display->display_options['fields']['field_series_field_unit']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_series_field_unit']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_series_field_unit']['bypass_access'] = 0;
  /* Field: Indexed Node: People */
  $handler->display->display_options['fields']['field_people']['id'] = 'field_people';
  $handler->display->display_options['fields']['field_people']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['fields']['field_people']['field'] = 'field_people';
  $handler->display->display_options['fields']['field_people']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_people']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_people']['bypass_access'] = 0;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['label'] = 'fieldset-top-right';
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'field_media_files',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  /* Field: Indexed Node: Media Files */
  $handler->display->display_options['fields']['field_media_files']['id'] = 'field_media_files';
  $handler->display->display_options['fields']['field_media_files']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['fields']['field_media_files']['field'] = 'field_media_files';
  $handler->display->display_options['fields']['field_media_files']['label'] = '';
  $handler->display->display_options['fields']['field_media_files']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_media_files']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_media_files']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_media_files']['settings'] = array(
    'file_view_mode' => 'preview',
  );
  $handler->display->display_options['fields']['field_media_files']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_media_files']['multi_type'] = 'ul';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_4']['id'] = 'fieldset_4';
  $handler->display->display_options['fields']['fieldset_4']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_4']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_4']['label'] = 'fieldset-bottom';
  $handler->display->display_options['fields']['fieldset_4']['children'] = array(
    0 => 'search_api_excerpt',
  );
  $handler->display->display_options['fields']['fieldset_4']['fieldset']['type'] = 'div';
  /* Field: Search: Excerpt */
  $handler->display->display_options['fields']['search_api_excerpt']['id'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['fields']['search_api_excerpt']['field'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['label'] = '';
  $handler->display->display_options['fields']['search_api_excerpt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['search_api_excerpt']['link_to_entity'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Node: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Created';
  /* Sort criterion: Indexed Node: Title A-Z Glossary */
  $handler->display->display_options['sorts']['title_az_glossary']['id'] = 'title_az_glossary';
  $handler->display->display_options['sorts']['title_az_glossary']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['sorts']['title_az_glossary']['field'] = 'title_az_glossary';
  $handler->display->display_options['sorts']['title_az_glossary']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title_az_glossary']['expose']['label'] = 'Title A-Z';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Fulltext search (Solr)';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'body:value' => 'body:value',
    'field_episode_description_long:value' => 'field_episode_description_long:value',
    'field_series:name' => 'field_series:name',
    'title' => 'title',
  );
  $handler->display->display_options['path'] = 'solr';

  /* Display: EVA Field (Series) */
  $handler = $view->new_display('entity_view', 'EVA Field (Series)', 'entity_view_1');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['search_api_bypass_access'] = 0;
  $handler->display->display_options['query']['options']['entity_access'] = 0;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'episodes per page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '10, 20, 40, 60, 100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '@total episodes (@start - @end) ';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_2']['id'] = 'fieldset_2';
  $handler->display->display_options['fields']['fieldset_2']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_2']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_2']['label'] = 'fieldset-top';
  $handler->display->display_options['fields']['fieldset_2']['children'] = array(
    0 => 'title',
    1 => 'fieldset',
    2 => 'fieldset_5',
    3 => 'fieldset_1',
  );
  $handler->display->display_options['fields']['fieldset_2']['fieldset']['type'] = 'div';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'fieldset_top-left';
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_5']['id'] = 'fieldset_5';
  $handler->display->display_options['fields']['fieldset_5']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_5']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_5']['label'] = 'fieldset-top-middle';
  $handler->display->display_options['fields']['fieldset_5']['children'] = array(
    0 => 'body_value',
    1 => 'created',
    2 => 'field_licence',
    3 => 'nothing',
    4 => 'field_people',
  );
  $handler->display->display_options['fields']['fieldset_5']['fieldset']['type'] = 'div';
  /* Field: The main body text: Text (indexed) */
  $handler->display->display_options['fields']['body_value']['id'] = 'body_value';
  $handler->display->display_options['fields']['body_value']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['fields']['body_value']['field'] = 'body_value';
  $handler->display->display_options['fields']['body_value']['label'] = '';
  $handler->display->display_options['fields']['body_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_value']['link_to_entity'] = 0;
  /* Field: Indexed Node: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd F Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'search_api_facetapi_YEAR';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  /* Field: Indexed Node: Licence */
  $handler->display->display_options['fields']['field_licence']['id'] = 'field_licence';
  $handler->display->display_options['fields']['field_licence']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['fields']['field_licence']['field'] = 'field_licence';
  $handler->display->display_options['fields']['field_licence']['label'] = '';
  $handler->display->display_options['fields']['field_licence']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_licence']['alter']['text'] = 'CC';
  $handler->display->display_options['fields']['field_licence']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="created-float">Created: [created]</div><div class="license-float">[field_licence]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: People */
  $handler->display->display_options['fields']['field_people']['id'] = 'field_people';
  $handler->display->display_options['fields']['field_people']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['fields']['field_people']['field'] = 'field_people';
  $handler->display->display_options['fields']['field_people']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_people']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_people']['bypass_access'] = 0;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['label'] = 'fieldset-top-right';
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'field_media_files',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  /* Field: Indexed Node: Media Files */
  $handler->display->display_options['fields']['field_media_files']['id'] = 'field_media_files';
  $handler->display->display_options['fields']['field_media_files']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['fields']['field_media_files']['field'] = 'field_media_files';
  $handler->display->display_options['fields']['field_media_files']['label'] = '';
  $handler->display->display_options['fields']['field_media_files']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_media_files']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_media_files']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_media_files']['settings'] = array(
    'file_view_mode' => 'preview',
  );
  $handler->display->display_options['fields']['field_media_files']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_media_files']['multi_type'] = 'ul';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_4']['id'] = 'fieldset_4';
  $handler->display->display_options['fields']['fieldset_4']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_4']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_4']['label'] = 'fieldset-bottom';
  $handler->display->display_options['fields']['fieldset_4']['children'] = array(
    0 => 'search_api_excerpt',
  );
  $handler->display->display_options['fields']['fieldset_4']['fieldset']['type'] = 'div';
  /* Field: Search: Excerpt */
  $handler->display->display_options['fields']['search_api_excerpt']['id'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['fields']['search_api_excerpt']['field'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['label'] = '';
  $handler->display->display_options['fields']['search_api_excerpt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['search_api_excerpt']['link_to_entity'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Node: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Date';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Search: Indexed taxonomy term fields */
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['id'] = 'search_api_views_taxonomy_term';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['field'] = 'search_api_views_taxonomy_term';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['default_action'] = 'default';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['default_argument_options']['vocabularies'] = array(
    'series' => 'series',
  );
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['validate_options']['vocabularies'] = array(
    'series' => 'series',
  );
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Fulltext search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'body:value' => 'body:value',
    'field_episode_description_long:value' => 'field_episode_description_long:value',
    'field_series:name' => 'field_series:name',
    'title' => 'title',
  );
  $handler->display->display_options['entity_type'] = 'taxonomy_term';
  $handler->display->display_options['bundles'] = array(
    0 => 'series',
  );

  /* Display: EVA Field (People) */
  $handler = $view->new_display('entity_view', 'EVA Field (People)', 'entity_view_2');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '10, 20, 40, 60,100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['pager']['options']['advance']['content_class'] = '.view-content';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '@total episodes (@start - @end) ';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_2']['id'] = 'fieldset_2';
  $handler->display->display_options['fields']['fieldset_2']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_2']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_2']['label'] = 'fieldset-top';
  $handler->display->display_options['fields']['fieldset_2']['children'] = array(
    0 => 'fieldset',
    1 => 'fieldset_5',
    2 => 'fieldset_1',
  );
  $handler->display->display_options['fields']['fieldset_2']['fieldset']['type'] = 'div';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'fieldset_top-left';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'field_series_album_cover',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  /* Field: Taxonomy term: Album Cover */
  $handler->display->display_options['fields']['field_series_album_cover']['id'] = 'field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['table'] = 'entity_taxonomy_term';
  $handler->display->display_options['fields']['field_series_album_cover']['field'] = 'field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['relationship'] = 'field_series';
  $handler->display->display_options['fields']['field_series_album_cover']['label'] = '';
  $handler->display->display_options['fields']['field_series_album_cover']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_album_cover']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_series_album_cover']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_5']['id'] = 'fieldset_5';
  $handler->display->display_options['fields']['fieldset_5']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_5']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_5']['label'] = 'fieldset-top-middle';
  $handler->display->display_options['fields']['fieldset_5']['children'] = array(
    0 => 'body_value',
    1 => 'created',
    2 => 'field_licence',
    3 => 'nothing',
    4 => 'field_series_name',
    5 => 'field_series_field_unit',
  );
  $handler->display->display_options['fields']['fieldset_5']['fieldset']['type'] = 'div';
  /* Field: The main body text: Text (indexed) */
  $handler->display->display_options['fields']['body_value']['id'] = 'body_value';
  $handler->display->display_options['fields']['body_value']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['fields']['body_value']['field'] = 'body_value';
  $handler->display->display_options['fields']['body_value']['label'] = '';
  $handler->display->display_options['fields']['body_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_value']['link_to_entity'] = 0;
  /* Field: Indexed Node: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd F Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'search_api_facetapi_YEAR';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  /* Field: Indexed Node: Licence */
  $handler->display->display_options['fields']['field_licence']['id'] = 'field_licence';
  $handler->display->display_options['fields']['field_licence']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['fields']['field_licence']['field'] = 'field_licence';
  $handler->display->display_options['fields']['field_licence']['label'] = 'License';
  $handler->display->display_options['fields']['field_licence']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_licence']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_licence']['alter']['text'] = 'CC';
  $handler->display->display_options['fields']['field_licence']['hide_empty'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="created-float">Created: [created]</div><div class="license-float">[field_licence]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Series: Name (indexed) */
  $handler->display->display_options['fields']['field_series_name']['id'] = 'field_series_name';
  $handler->display->display_options['fields']['field_series_name']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['fields']['field_series_name']['field'] = 'field_series_name';
  $handler->display->display_options['fields']['field_series_name']['label'] = 'Series';
  $handler->display->display_options['fields']['field_series_name']['link_to_entity'] = 1;
  /* Field: Series: Oxford Unit (indexed) */
  $handler->display->display_options['fields']['field_series_field_unit']['id'] = 'field_series_field_unit';
  $handler->display->display_options['fields']['field_series_field_unit']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['fields']['field_series_field_unit']['field'] = 'field_series_field_unit';
  $handler->display->display_options['fields']['field_series_field_unit']['label'] = 'Oxford Unit';
  $handler->display->display_options['fields']['field_series_field_unit']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_series_field_unit']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_series_field_unit']['bypass_access'] = 0;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['label'] = 'fieldset-top-right';
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'field_media_files',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  /* Field: Indexed Node: Media Files */
  $handler->display->display_options['fields']['field_media_files']['id'] = 'field_media_files';
  $handler->display->display_options['fields']['field_media_files']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['fields']['field_media_files']['field'] = 'field_media_files';
  $handler->display->display_options['fields']['field_media_files']['label'] = '';
  $handler->display->display_options['fields']['field_media_files']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_media_files']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_media_files']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_media_files']['settings'] = array(
    'file_view_mode' => 'preview',
  );
  $handler->display->display_options['fields']['field_media_files']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_media_files']['multi_type'] = 'ul';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_4']['id'] = 'fieldset_4';
  $handler->display->display_options['fields']['fieldset_4']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_4']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_4']['label'] = 'fieldset-bottom';
  $handler->display->display_options['fields']['fieldset_4']['children'] = array(
    0 => 'search_api_excerpt',
  );
  $handler->display->display_options['fields']['fieldset_4']['fieldset']['type'] = 'div';
  /* Field: Search: Excerpt */
  $handler->display->display_options['fields']['search_api_excerpt']['id'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['fields']['search_api_excerpt']['field'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['label'] = '';
  $handler->display->display_options['fields']['search_api_excerpt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['search_api_excerpt']['link_to_entity'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Node: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Date';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Search: Indexed taxonomy term fields */
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['id'] = 'search_api_views_taxonomy_term';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['field'] = 'search_api_views_taxonomy_term';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['default_action'] = 'default';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['default_argument_options']['vocabularies'] = array(
    'people' => 'people',
  );
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['validate_options']['vocabularies'] = array(
    'people' => 'people',
  );
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['operator'] = 'OR';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Fulltext search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'body:value' => 'body:value',
    'field_episode_description_long:value' => 'field_episode_description_long:value',
    'field_series:name' => 'field_series:name',
    'title' => 'title',
  );
  $handler->display->display_options['entity_type'] = 'taxonomy_term';
  $handler->display->display_options['bundles'] = array(
    0 => 'people',
  );
  $handler->display->display_options['exposed_form_as_field'] = 0;

  /* Display: EVA Field (Unit) */
  $handler = $view->new_display('entity_view', 'EVA Field (Unit)', 'entity_view_3');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '10, 20, 40, 60,100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['pager']['options']['advance']['content_class'] = '.view-content';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '@total episodes (@start - @end) ';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_2']['id'] = 'fieldset_2';
  $handler->display->display_options['fields']['fieldset_2']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_2']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_2']['label'] = 'fieldset-top';
  $handler->display->display_options['fields']['fieldset_2']['children'] = array(
    0 => 'fieldset',
    1 => 'fieldset_5',
    2 => 'fieldset_1',
  );
  $handler->display->display_options['fields']['fieldset_2']['fieldset']['type'] = 'div';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'fieldset_top-left';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'field_series_album_cover',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  /* Field: Taxonomy term: Album Cover */
  $handler->display->display_options['fields']['field_series_album_cover']['id'] = 'field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['table'] = 'entity_taxonomy_term';
  $handler->display->display_options['fields']['field_series_album_cover']['field'] = 'field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['relationship'] = 'field_series';
  $handler->display->display_options['fields']['field_series_album_cover']['label'] = '';
  $handler->display->display_options['fields']['field_series_album_cover']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_album_cover']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_series_album_cover']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_5']['id'] = 'fieldset_5';
  $handler->display->display_options['fields']['fieldset_5']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_5']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_5']['label'] = 'fieldset-top-middle';
  $handler->display->display_options['fields']['fieldset_5']['children'] = array(
    0 => 'body_value',
    1 => 'created',
    2 => 'field_licence',
    3 => 'nothing',
    4 => 'field_series_name',
    5 => 'field_people',
  );
  $handler->display->display_options['fields']['fieldset_5']['fieldset']['type'] = 'div';
  /* Field: The main body text: Text (indexed) */
  $handler->display->display_options['fields']['body_value']['id'] = 'body_value';
  $handler->display->display_options['fields']['body_value']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['fields']['body_value']['field'] = 'body_value';
  $handler->display->display_options['fields']['body_value']['label'] = '';
  $handler->display->display_options['fields']['body_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_value']['link_to_entity'] = 0;
  /* Field: Indexed Node: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd F Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'search_api_facetapi_YEAR';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  /* Field: Indexed Node: Licence */
  $handler->display->display_options['fields']['field_licence']['id'] = 'field_licence';
  $handler->display->display_options['fields']['field_licence']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['fields']['field_licence']['field'] = 'field_licence';
  $handler->display->display_options['fields']['field_licence']['label'] = '';
  $handler->display->display_options['fields']['field_licence']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_licence']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_licence']['alter']['text'] = 'CC';
  $handler->display->display_options['fields']['field_licence']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="created-float">Created: [created]</div><div class="license-float">[field_licence]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Series: Name (indexed) */
  $handler->display->display_options['fields']['field_series_name']['id'] = 'field_series_name';
  $handler->display->display_options['fields']['field_series_name']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['fields']['field_series_name']['field'] = 'field_series_name';
  $handler->display->display_options['fields']['field_series_name']['label'] = 'Series';
  $handler->display->display_options['fields']['field_series_name']['link_to_entity'] = 1;
  /* Field: Indexed Node: People */
  $handler->display->display_options['fields']['field_people']['id'] = 'field_people';
  $handler->display->display_options['fields']['field_people']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['fields']['field_people']['field'] = 'field_people';
  $handler->display->display_options['fields']['field_people']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_people']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_people']['bypass_access'] = 0;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['label'] = 'fieldset-top-right';
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'field_media_files',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  /* Field: Indexed Node: Media Files */
  $handler->display->display_options['fields']['field_media_files']['id'] = 'field_media_files';
  $handler->display->display_options['fields']['field_media_files']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['fields']['field_media_files']['field'] = 'field_media_files';
  $handler->display->display_options['fields']['field_media_files']['label'] = '';
  $handler->display->display_options['fields']['field_media_files']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_media_files']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_media_files']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_media_files']['settings'] = array(
    'file_view_mode' => 'preview',
  );
  $handler->display->display_options['fields']['field_media_files']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_media_files']['multi_type'] = 'ul';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_4']['id'] = 'fieldset_4';
  $handler->display->display_options['fields']['fieldset_4']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_4']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_4']['label'] = 'fieldset-bottom';
  $handler->display->display_options['fields']['fieldset_4']['children'] = array(
    0 => 'search_api_excerpt',
  );
  $handler->display->display_options['fields']['fieldset_4']['fieldset']['type'] = 'div';
  /* Field: Search: Excerpt */
  $handler->display->display_options['fields']['search_api_excerpt']['id'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['fields']['search_api_excerpt']['field'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['label'] = '';
  $handler->display->display_options['fields']['search_api_excerpt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['search_api_excerpt']['link_to_entity'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Node: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Date';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Search: Indexed taxonomy term fields */
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['id'] = 'search_api_views_taxonomy_term';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['field'] = 'search_api_views_taxonomy_term';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['default_action'] = 'default';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['default_argument_options']['vocabularies'] = array(
    'units' => 'units',
  );
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['validate_options']['vocabularies'] = array(
    'units' => 'units',
  );
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['search_api_views_taxonomy_term']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['operator'] = 'OR';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Fulltext search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'body:value' => 'body:value',
    'field_episode_description_long:value' => 'field_episode_description_long:value',
    'field_series:name' => 'field_series:name',
    'title' => 'title',
  );
  $handler->display->display_options['entity_type'] = 'taxonomy_term';
  $handler->display->display_options['bundles'] = array(
    0 => 'units',
  );
  $handler->display->display_options['exposed_form_as_field'] = 0;
  $export['episode_search_solr_'] = $view;

  $view = new view();
  $view->name = 'episode_search_solr_pageholder';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_episode_index_solr';
  $view->human_name = 'Episode Search (Solr) Pageholder';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';

  /* Display: Keyword Facets block */
  $handler = $view->new_display('search_api_views_facets_block', 'Keyword Facets block', 'search_api_views_facets_block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<input id="hideseek-search" name="hideseek-search" placeholder="Search Keywords" type="text" data-list=".sidr-class-view-content" >
<a id="sidr-close-menu">✕</a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_episode_index_solr';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['element_wrapper_class'] = 'keyword-test-wrapper';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  $handler->display->display_options['block_description'] = 'Episode Search (Solr) Anywhere Keywords';
  $handler->display->display_options['linked_path'] = 'solr';
  $handler->display->display_options['facet_field'] = 'field_keywords';
  $handler->display->display_options['hide_block'] = 0;

  /* Display: Type Facets block */
  $handler = $view->new_display('search_api_views_facets_block', 'Type Facets block', 'search_api_views_facets_block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Media Type';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['block_description'] = 'Episode Search (Solr) Anywhere Type';
  $handler->display->display_options['linked_path'] = 'solr';
  $handler->display->display_options['facet_field'] = 'field_media_files:file:type';

  /* Display: Category Facets block */
  $handler = $view->new_display('search_api_views_facets_block', 'Category Facets block', 'search_api_views_facets_block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Categories';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['block_description'] = 'Episode Search (Solr) Anywhere Category';
  $handler->display->display_options['linked_path'] = 'solr';
  $handler->display->display_options['facet_field'] = 'field_itunes_u_category:name';
  $export['episode_search_solr_pageholder'] = $view;

  $view = new view();
  $view->name = 'episode_series_count';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Episode/Series Count';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="headline-one">University of Oxford\'s</div><div class="headline-two"><br>Podcasts</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Relationship: Taxonomy term: Content using Series */
  $handler->display->display_options['relationships']['reverse_field_series_node']['id'] = 'reverse_field_series_node';
  $handler->display->display_options['relationships']['reverse_field_series_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_series_node']['field'] = 'reverse_field_series_node';
  /* Field: COUNT(DISTINCT Content: Series) */
  $handler->display->display_options['fields']['field_series']['id'] = 'field_series';
  $handler->display->display_options['fields']['field_series']['table'] = 'field_data_field_series';
  $handler->display->display_options['fields']['field_series']['field'] = 'field_series';
  $handler->display->display_options['fields']['field_series']['relationship'] = 'reverse_field_series_node';
  $handler->display->display_options['fields']['field_series']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_series']['label'] = '';
  $handler->display->display_options['fields']['field_series']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_series']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series']['separator'] = ', ';
  /* Field: COUNT(Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_series_node';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<class="episode-count">with [nid] episodes across [field_series] series</class>';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'oxford-count';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'series' => 'series',
  );

  /* Display: Front Page Stats */
  $handler = $view->new_display('block', 'Front Page Stats', 'block');
  $handler->display->display_options['block_description'] = 'Episode/Series Count Block';

  /* Display: About Page Stats */
  $handler = $view->new_display('block', 'About Page Stats', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Site Statistics';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="about_stats_header">Since Jan 2017 (approx.):</div>

<div class="about_stats">
<span>+4000 hours of audio material</span>
<span>+2000 hours of video material</span>
</div>

<div class="about_stats">
<span>+7000 academic speakers from around the world</span>
</div>

<div class="about_stats">
<span>+128 academic departments & colleges</span>
</div

<div class="about_stats">
<span>+2.4 million downloads on iTunes U</span>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Series) */
  $handler->display->display_options['fields']['field_series']['id'] = 'field_series';
  $handler->display->display_options['fields']['field_series']['table'] = 'field_data_field_series';
  $handler->display->display_options['fields']['field_series']['field'] = 'field_series';
  $handler->display->display_options['fields']['field_series']['relationship'] = 'reverse_field_series_node';
  $handler->display->display_options['fields']['field_series']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_series']['label'] = '';
  $handler->display->display_options['fields']['field_series']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_series']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series']['separator'] = ', ';
  /* Field: COUNT(Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_series_node';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Total number of episodes: [nid] <br>
Total number or series: [field_series] ';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'oxford-count';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['block_description'] = 'About Page Stats';
  $export['episode_series_count'] = $view;

  $view = new view();
  $view->name = 'eva_associated_terms';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'EVA Associated Terms';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Series per Person';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Taxonomy term: Content using People */
  $handler->display->display_options['relationships']['reverse_field_people_node']['id'] = 'reverse_field_people_node';
  $handler->display->display_options['relationships']['reverse_field_people_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_people_node']['field'] = 'reverse_field_people_node';
  /* Relationship: Content: Series (field_series) */
  $handler->display->display_options['relationships']['field_series_tid']['id'] = 'field_series_tid';
  $handler->display->display_options['relationships']['field_series_tid']['table'] = 'field_data_field_series';
  $handler->display->display_options['relationships']['field_series_tid']['field'] = 'field_series_tid';
  $handler->display->display_options['relationships']['field_series_tid']['relationship'] = 'reverse_field_people_node';
  /* Field: Taxonomy term: Album Cover */
  $handler->display->display_options['fields']['field_series_album_cover']['id'] = 'field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['table'] = 'field_data_field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['field'] = 'field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['label'] = '';
  $handler->display->display_options['fields']['field_series_album_cover']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_album_cover']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_series_album_cover']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_series_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['max_length'] = '40';
  $handler->display->display_options['fields']['name']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_series_tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['title'] = 'Series featuring %1';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'people' => 'people',
  );

  /* Display: EVA People: Associated Series */
  $handler = $view->new_display('entity_view', 'EVA People: Associated Series', 'entity_view_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Series';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Album Cover */
  $handler->display->display_options['fields']['field_series_album_cover']['id'] = 'field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['table'] = 'field_data_field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['field'] = 'field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['relationship'] = 'field_series_tid';
  $handler->display->display_options['fields']['field_series_album_cover']['label'] = '';
  $handler->display->display_options['fields']['field_series_album_cover']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_album_cover']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_series_album_cover']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_series_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['max_length'] = '40';
  $handler->display->display_options['fields']['name']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_series_tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['entity_type'] = 'taxonomy_term';
  $handler->display->display_options['bundles'] = array(
    0 => 'people',
  );
  $handler->display->display_options['show_title'] = 1;

  /* Display: EVA Unit: Associated Series */
  $handler = $view->new_display('entity_view', 'EVA Unit: Associated Series', 'entity_view_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Series';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomy term: Taxonomy term using Oxford Unit */
  $handler->display->display_options['relationships']['reverse_field_unit_taxonomy_term']['id'] = 'reverse_field_unit_taxonomy_term';
  $handler->display->display_options['relationships']['reverse_field_unit_taxonomy_term']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_unit_taxonomy_term']['field'] = 'reverse_field_unit_taxonomy_term';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Album Cover */
  $handler->display->display_options['fields']['field_series_album_cover']['id'] = 'field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['table'] = 'field_data_field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['field'] = 'field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['relationship'] = 'reverse_field_unit_taxonomy_term';
  $handler->display->display_options['fields']['field_series_album_cover']['label'] = '';
  $handler->display->display_options['fields']['field_series_album_cover']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_album_cover']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_series_album_cover']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'reverse_field_unit_taxonomy_term';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['max_length'] = '40';
  $handler->display->display_options['fields']['name']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'reverse_field_unit_taxonomy_term';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['title'] = 'Series belonging to %1';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'units' => 'units',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['relationship'] = 'reverse_field_unit_taxonomy_term';
  $handler->display->display_options['filters']['vid']['value'] = array(
    5 => '5',
  );
  $handler->display->display_options['entity_type'] = 'taxonomy_term';
  $handler->display->display_options['bundles'] = array(
    0 => 'units',
  );
  $handler->display->display_options['show_title'] = 1;

  /* Display: EVA Unit: Associated People */
  $handler = $view->new_display('entity_view', 'EVA Unit: Associated People', 'entity_view_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Series';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomy term: Taxonomy term using Oxford Unit */
  $handler->display->display_options['relationships']['reverse_field_unit_taxonomy_term']['id'] = 'reverse_field_unit_taxonomy_term';
  $handler->display->display_options['relationships']['reverse_field_unit_taxonomy_term']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_unit_taxonomy_term']['field'] = 'reverse_field_unit_taxonomy_term';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Image */
  $handler->display->display_options['fields']['field_people_image']['id'] = 'field_people_image';
  $handler->display->display_options['fields']['field_people_image']['table'] = 'field_data_field_people_image';
  $handler->display->display_options['fields']['field_people_image']['field'] = 'field_people_image';
  $handler->display->display_options['fields']['field_people_image']['relationship'] = 'reverse_field_unit_taxonomy_term';
  $handler->display->display_options['fields']['field_people_image']['label'] = '';
  $handler->display->display_options['fields']['field_people_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_people_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_people_image']['settings'] = array(
    'image_style' => 'media_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'reverse_field_unit_taxonomy_term';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['max_length'] = '40';
  $handler->display->display_options['fields']['name']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'reverse_field_unit_taxonomy_term';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['title'] = 'Associated People';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'units' => 'units',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['relationship'] = 'reverse_field_unit_taxonomy_term';
  $handler->display->display_options['filters']['vid']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['entity_type'] = 'taxonomy_term';
  $handler->display->display_options['bundles'] = array(
    0 => 'units',
  );
  $handler->display->display_options['show_title'] = 1;
  $export['eva_associated_terms'] = $view;

  $view = new view();
  $view->name = 'eva_display_fields';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'EVA Display Fields';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Series per Person';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Taxonomy term: Content using People */
  $handler->display->display_options['relationships']['reverse_field_people_node']['id'] = 'reverse_field_people_node';
  $handler->display->display_options['relationships']['reverse_field_people_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_people_node']['field'] = 'reverse_field_people_node';
  /* Relationship: Content: Series (field_series) */
  $handler->display->display_options['relationships']['field_series_tid']['id'] = 'field_series_tid';
  $handler->display->display_options['relationships']['field_series_tid']['table'] = 'field_data_field_series';
  $handler->display->display_options['relationships']['field_series_tid']['field'] = 'field_series_tid';
  $handler->display->display_options['relationships']['field_series_tid']['relationship'] = 'reverse_field_people_node';
  /* Field: Taxonomy term: Album Cover */
  $handler->display->display_options['fields']['field_series_album_cover']['id'] = 'field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['table'] = 'field_data_field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['field'] = 'field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['label'] = '';
  $handler->display->display_options['fields']['field_series_album_cover']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_album_cover']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_series_album_cover']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_series_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['max_length'] = '40';
  $handler->display->display_options['fields']['name']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_series_tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['title'] = 'Series featuring %1';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'people' => 'people',
  );

  /* Display: EVA Person Name */
  $handler = $view->new_display('entity_view', 'EVA Person Name', 'entity_view_2');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'people' => 'people',
  );
  $handler->display->display_options['entity_type'] = 'taxonomy_term';
  $handler->display->display_options['bundles'] = array(
    0 => 'people',
  );

  /* Display: EVA Series Name */
  $handler = $view->new_display('entity_view', 'EVA Series Name', 'entity_view_3');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_series_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'series' => 'series',
  );
  $handler->display->display_options['entity_type'] = 'taxonomy_term';
  $handler->display->display_options['bundles'] = array(
    0 => 'series',
  );

  /* Display: EVA Unit Name */
  $handler = $view->new_display('entity_view', 'EVA Unit Name', 'entity_view_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_series_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'units' => 'units',
  );
  $handler->display->display_options['entity_type'] = 'taxonomy_term';
  $handler->display->display_options['bundles'] = array(
    0 => 'units',
  );

  /* Display: EVA Person Description */
  $handler = $view->new_display('entity_view', 'EVA Person Description', 'entity_view_4');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'people' => 'people',
  );
  $handler->display->display_options['entity_type'] = 'taxonomy_term';
  $handler->display->display_options['bundles'] = array(
    0 => 'people',
  );

  /* Display: EVA Series Description */
  $handler = $view->new_display('entity_view', 'EVA Series Description', 'entity_view_5');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['relationship'] = 'field_series_tid';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'series' => 'series',
  );
  $handler->display->display_options['entity_type'] = 'taxonomy_term';
  $handler->display->display_options['bundles'] = array(
    0 => 'series',
  );

  /* Display: EVA Unit Description */
  $handler = $view->new_display('entity_view', 'EVA Unit Description', 'entity_view_6');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'units' => 'units',
  );
  $handler->display->display_options['entity_type'] = 'taxonomy_term';
  $handler->display->display_options['bundles'] = array(
    0 => 'units',
  );
  $export['eva_display_fields'] = $view;

  $view = new view();
  $view->name = 'eva_subscribe_links';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'EVA Subscribe Links';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'view-eva-subscribe-links';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Taxonomy term: Content using Series */
  $handler->display->display_options['relationships']['reverse_field_series_node']['id'] = 'reverse_field_series_node';
  $handler->display->display_options['relationships']['reverse_field_series_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_series_node']['field'] = 'reverse_field_series_node';
  /* Relationship: Content: Media Files (field_media_files:fid) */
  $handler->display->display_options['relationships']['field_media_files_fid']['id'] = 'field_media_files_fid';
  $handler->display->display_options['relationships']['field_media_files_fid']['table'] = 'field_data_field_media_files';
  $handler->display->display_options['relationships']['field_media_files_fid']['field'] = 'field_media_files_fid';
  $handler->display->display_options['relationships']['field_media_files_fid']['relationship'] = 'reverse_field_series_node';
  /* Field: Field: MediaPub NID */
  $handler->display->display_options['fields']['field_mediapub_nid']['id'] = 'field_mediapub_nid';
  $handler->display->display_options['fields']['field_mediapub_nid']['table'] = 'field_data_field_mediapub_nid';
  $handler->display->display_options['fields']['field_mediapub_nid']['field'] = 'field_mediapub_nid';
  $handler->display->display_options['fields']['field_mediapub_nid']['label'] = '';
  $handler->display->display_options['fields']['field_mediapub_nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mediapub_nid']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['title'] = 'Series featuring %1';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'people' => 'people',
  );

  /* Display: EVA Subscribe Series */
  $handler = $view->new_display('entity_view', 'EVA Subscribe Series', 'entity_view_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Subscribe';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: iTunes U Audio Code */
  $handler->display->display_options['fields']['field_itunes_u_audio_code']['id'] = 'field_itunes_u_audio_code';
  $handler->display->display_options['fields']['field_itunes_u_audio_code']['table'] = 'field_data_field_itunes_u_audio_code';
  $handler->display->display_options['fields']['field_itunes_u_audio_code']['field'] = 'field_itunes_u_audio_code';
  $handler->display->display_options['fields']['field_itunes_u_audio_code']['label'] = '';
  $handler->display->display_options['fields']['field_itunes_u_audio_code']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_itunes_u_audio_code']['alter']['text'] = '<span class="itunesu"><a href="https://itunes.apple.com/gb/itunes-u/id[field_itunes_u_audio_code-value]">iTunes U Audio</a></span>';
  $handler->display->display_options['fields']['field_itunes_u_audio_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_itunes_u_audio_code']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Taxonomy term: iTunes U Document Code */
  $handler->display->display_options['fields']['field_itunes_u_document_code']['id'] = 'field_itunes_u_document_code';
  $handler->display->display_options['fields']['field_itunes_u_document_code']['table'] = 'field_data_field_itunes_u_document_code';
  $handler->display->display_options['fields']['field_itunes_u_document_code']['field'] = 'field_itunes_u_document_code';
  $handler->display->display_options['fields']['field_itunes_u_document_code']['label'] = '';
  $handler->display->display_options['fields']['field_itunes_u_document_code']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_itunes_u_document_code']['alter']['text'] = '<span class="itunesu"><a href="https://itunes.apple.com/gb/itunes-u/id[field_itunes_u_document_code-value]">iTunes U Document</a></span>';
  $handler->display->display_options['fields']['field_itunes_u_document_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_itunes_u_document_code']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Taxonomy term: iTunes U Video Code */
  $handler->display->display_options['fields']['field_itunes_u_video_code']['id'] = 'field_itunes_u_video_code';
  $handler->display->display_options['fields']['field_itunes_u_video_code']['table'] = 'field_data_field_itunes_u_video_code';
  $handler->display->display_options['fields']['field_itunes_u_video_code']['field'] = 'field_itunes_u_video_code';
  $handler->display->display_options['fields']['field_itunes_u_video_code']['label'] = '';
  $handler->display->display_options['fields']['field_itunes_u_video_code']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_itunes_u_video_code']['alter']['text'] = '<span class="itunesu"><a href="https://itunes.apple.com/gb/itunes-u/id[field_itunes_u_video_code-value]">iTunes U Video</a></span>';
  $handler->display->display_options['fields']['field_itunes_u_video_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_itunes_u_video_code']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'series' => 'series',
  );
  $handler->display->display_options['entity_type'] = 'taxonomy_term';
  $handler->display->display_options['bundles'] = array(
    0 => 'series',
  );
  $handler->display->display_options['show_title'] = 1;

  /* Display: RSS Audio Attach (series) */
  $handler = $view->new_display('attachment', 'RSS Audio Attach (series)', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomy term: Content using Series */
  $handler->display->display_options['relationships']['reverse_field_series_node']['id'] = 'reverse_field_series_node';
  $handler->display->display_options['relationships']['reverse_field_series_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_series_node']['field'] = 'reverse_field_series_node';
  /* Relationship: Content: Media Files (field_media_files:fid) */
  $handler->display->display_options['relationships']['field_media_files_fid']['id'] = 'field_media_files_fid';
  $handler->display->display_options['relationships']['field_media_files_fid']['table'] = 'field_data_field_media_files';
  $handler->display->display_options['relationships']['field_media_files_fid']['field'] = 'field_media_files_fid';
  $handler->display->display_options['relationships']['field_media_files_fid']['relationship'] = 'reverse_field_series_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: MediaPub NID */
  $handler->display->display_options['fields']['field_mediapub_nid']['id'] = 'field_mediapub_nid';
  $handler->display->display_options['fields']['field_mediapub_nid']['table'] = 'field_data_field_mediapub_nid';
  $handler->display->display_options['fields']['field_mediapub_nid']['field'] = 'field_mediapub_nid';
  $handler->display->display_options['fields']['field_mediapub_nid']['label'] = '';
  $handler->display->display_options['fields']['field_mediapub_nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_mediapub_nid']['alter']['text'] = '<span class="feed_audio"><a href="http://mediapub.it.ox.ac.uk/feeds/[field_mediapub_nid-value]/audio.xml">Audio RSS</a></span>';
  $handler->display->display_options['fields']['field_mediapub_nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mediapub_nid']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'series' => 'series',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'field_media_files_fid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'audio' => 'audio',
  );
  $handler->display->display_options['displays'] = array(
    'entity_view_6' => 'entity_view_6',
    'default' => 0,
    'entity_view_1' => 0,
    'entity_view_4' => 0,
    'entity_view_2' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: RSS Video Attach (series) */
  $handler = $view->new_display('attachment', 'RSS Video Attach (series)', 'attachment_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: MediaPub NID */
  $handler->display->display_options['fields']['field_mediapub_nid']['id'] = 'field_mediapub_nid';
  $handler->display->display_options['fields']['field_mediapub_nid']['table'] = 'field_data_field_mediapub_nid';
  $handler->display->display_options['fields']['field_mediapub_nid']['field'] = 'field_mediapub_nid';
  $handler->display->display_options['fields']['field_mediapub_nid']['label'] = '';
  $handler->display->display_options['fields']['field_mediapub_nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_mediapub_nid']['alter']['text'] = '<span class="feed_video"><a href="http://mediapub.it.ox.ac.uk/feeds/[field_mediapub_nid-value]/video.xml">Video RSS</a></span>';
  $handler->display->display_options['fields']['field_mediapub_nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mediapub_nid']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'series' => 'series',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'field_media_files_fid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );
  $handler->display->display_options['displays'] = array(
    'entity_view_6' => 'entity_view_6',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: RSS Doc Attach (series) */
  $handler = $view->new_display('attachment', 'RSS Doc Attach (series)', 'attachment_3');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: MediaPub NID */
  $handler->display->display_options['fields']['field_mediapub_nid']['id'] = 'field_mediapub_nid';
  $handler->display->display_options['fields']['field_mediapub_nid']['table'] = 'field_data_field_mediapub_nid';
  $handler->display->display_options['fields']['field_mediapub_nid']['field'] = 'field_mediapub_nid';
  $handler->display->display_options['fields']['field_mediapub_nid']['label'] = '';
  $handler->display->display_options['fields']['field_mediapub_nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_mediapub_nid']['alter']['text'] = '<span class="feed_document"><a href="http://mediapub.it.ox.ac.uk/feeds/[field_mediapub_nid-value]/document.xml">Document RSS</a></span>';
  $handler->display->display_options['fields']['field_mediapub_nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mediapub_nid']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'field_media_files_fid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  $handler->display->display_options['displays'] = array(
    'entity_view_6' => 'entity_view_6',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: EVA iTunes Episode */
  $handler = $view->new_display('entity_view', 'EVA iTunes Episode', 'entity_view_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Subscribe';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomy term: Content using Series */
  $handler->display->display_options['relationships']['reverse_field_series_node']['id'] = 'reverse_field_series_node';
  $handler->display->display_options['relationships']['reverse_field_series_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_series_node']['field'] = 'reverse_field_series_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: iTunes U Audio Code */
  $handler->display->display_options['fields']['field_itunes_u_audio_code']['id'] = 'field_itunes_u_audio_code';
  $handler->display->display_options['fields']['field_itunes_u_audio_code']['table'] = 'field_data_field_itunes_u_audio_code';
  $handler->display->display_options['fields']['field_itunes_u_audio_code']['field'] = 'field_itunes_u_audio_code';
  $handler->display->display_options['fields']['field_itunes_u_audio_code']['label'] = '';
  $handler->display->display_options['fields']['field_itunes_u_audio_code']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_itunes_u_audio_code']['alter']['text'] = '<span class="itunesu"><a href="https://itunes.apple.com/gb/itunes-u/id[field_itunes_u_audio_code-value]">iTunes U Audio</a></span>';
  $handler->display->display_options['fields']['field_itunes_u_audio_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_itunes_u_audio_code']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Taxonomy term: iTunes U Document Code */
  $handler->display->display_options['fields']['field_itunes_u_document_code']['id'] = 'field_itunes_u_document_code';
  $handler->display->display_options['fields']['field_itunes_u_document_code']['table'] = 'field_data_field_itunes_u_document_code';
  $handler->display->display_options['fields']['field_itunes_u_document_code']['field'] = 'field_itunes_u_document_code';
  $handler->display->display_options['fields']['field_itunes_u_document_code']['label'] = '';
  $handler->display->display_options['fields']['field_itunes_u_document_code']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_itunes_u_document_code']['alter']['text'] = '<span class="itunesu"><a href="https://itunes.apple.com/gb/itunes-u/id[field_itunes_u_document_code-value]">iTunes U Document</a></span>';
  $handler->display->display_options['fields']['field_itunes_u_document_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_itunes_u_document_code']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Taxonomy term: iTunes U Video Code */
  $handler->display->display_options['fields']['field_itunes_u_video_code']['id'] = 'field_itunes_u_video_code';
  $handler->display->display_options['fields']['field_itunes_u_video_code']['table'] = 'field_data_field_itunes_u_video_code';
  $handler->display->display_options['fields']['field_itunes_u_video_code']['field'] = 'field_itunes_u_video_code';
  $handler->display->display_options['fields']['field_itunes_u_video_code']['label'] = '';
  $handler->display->display_options['fields']['field_itunes_u_video_code']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_itunes_u_video_code']['alter']['text'] = '<span class="itunesu"><a href="https://itunes.apple.com/gb/itunes-u/id[field_itunes_u_video_code-value]">iTunes U Video</a></span>';
  $handler->display->display_options['fields']['field_itunes_u_video_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_itunes_u_video_code']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_series_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'episode' => 'episode',
  );
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'episode',
  );
  $handler->display->display_options['show_title'] = 1;

  /* Display: RSS Audio Attach (ep) */
  $handler = $view->new_display('attachment', 'RSS Audio Attach (ep)', 'attachment_4');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: MediaPub NID */
  $handler->display->display_options['fields']['field_mediapub_nid']['id'] = 'field_mediapub_nid';
  $handler->display->display_options['fields']['field_mediapub_nid']['table'] = 'field_data_field_mediapub_nid';
  $handler->display->display_options['fields']['field_mediapub_nid']['field'] = 'field_mediapub_nid';
  $handler->display->display_options['fields']['field_mediapub_nid']['label'] = '';
  $handler->display->display_options['fields']['field_mediapub_nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_mediapub_nid']['alter']['text'] = '<span class="feed_audio"><a href="http://mediapub.it.ox.ac.uk/feeds/[field_mediapub_nid-value]/audio.xml">Audio RSS</a></span>';
  $handler->display->display_options['fields']['field_mediapub_nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mediapub_nid']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_series_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'episode' => 'episode',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'field_media_files_fid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'audio' => 'audio',
  );
  $handler->display->display_options['displays'] = array(
    'entity_view_2' => 'entity_view_2',
    'default' => 0,
    'entity_view_6' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: RSS Video Attach (ep) */
  $handler = $view->new_display('attachment', 'RSS Video Attach (ep)', 'attachment_5');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: MediaPub NID */
  $handler->display->display_options['fields']['field_mediapub_nid']['id'] = 'field_mediapub_nid';
  $handler->display->display_options['fields']['field_mediapub_nid']['table'] = 'field_data_field_mediapub_nid';
  $handler->display->display_options['fields']['field_mediapub_nid']['field'] = 'field_mediapub_nid';
  $handler->display->display_options['fields']['field_mediapub_nid']['label'] = '';
  $handler->display->display_options['fields']['field_mediapub_nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_mediapub_nid']['alter']['text'] = '<span class="feed_video"><a href="http://mediapub.it.ox.ac.uk/feeds/[field_mediapub_nid-value]/video.xml">Video RSS</a></span>';
  $handler->display->display_options['fields']['field_mediapub_nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mediapub_nid']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_series_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'episode' => 'episode',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'field_media_files_fid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );
  $handler->display->display_options['displays'] = array(
    'entity_view_2' => 'entity_view_2',
    'default' => 0,
    'entity_view_6' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: RSS Doc Attach (ep) */
  $handler = $view->new_display('attachment', 'RSS Doc Attach (ep)', 'attachment_6');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: MediaPub NID */
  $handler->display->display_options['fields']['field_mediapub_nid']['id'] = 'field_mediapub_nid';
  $handler->display->display_options['fields']['field_mediapub_nid']['table'] = 'field_data_field_mediapub_nid';
  $handler->display->display_options['fields']['field_mediapub_nid']['field'] = 'field_mediapub_nid';
  $handler->display->display_options['fields']['field_mediapub_nid']['label'] = '';
  $handler->display->display_options['fields']['field_mediapub_nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_mediapub_nid']['alter']['text'] = '<span class="feed_document"><a href="http://mediapub.it.ox.ac.uk/feeds/[field_mediapub_nid-value]/document.xml">Document RSS</a></span>';
  $handler->display->display_options['fields']['field_mediapub_nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mediapub_nid']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_series_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'episode' => 'episode',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'field_media_files_fid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'document' => 'document',
  );
  $handler->display->display_options['displays'] = array(
    'entity_view_2' => 'entity_view_2',
    'default' => 0,
    'entity_view_6' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $export['eva_subscribe_links'] = $view;

  $view = new view();
  $view->name = 'open_featured_images';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Open Featured Images';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Featured Open Collections';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Open Images Link */
  $handler->display->display_options['fields']['field_open_images_link']['id'] = 'field_open_images_link';
  $handler->display->display_options['fields']['field_open_images_link']['table'] = 'field_data_field_open_images_link';
  $handler->display->display_options['fields']['field_open_images_link']['field'] = 'field_open_images_link';
  $handler->display->display_options['fields']['field_open_images_link']['label'] = '';
  $handler->display->display_options['fields']['field_open_images_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_open_images_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_open_images_link']['click_sort_column'] = 'url';
  /* Field: Content: Open Image */
  $handler->display->display_options['fields']['field_open_image']['id'] = 'field_open_image';
  $handler->display->display_options['fields']['field_open_image']['table'] = 'field_data_field_open_image';
  $handler->display->display_options['fields']['field_open_image']['field'] = 'field_open_image';
  $handler->display->display_options['fields']['field_open_image']['label'] = '';
  $handler->display->display_options['fields']['field_open_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_open_image']['alter']['path'] = '[field_open_images_link]';
  $handler->display->display_options['fields']['field_open_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_open_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_open_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'open_images' => 'open_images',
  );

  /* Display: Open Featured Images Block */
  $handler = $view->new_display('block', 'Open Featured Images Block', 'block');
  $handler->display->display_options['block_description'] = 'Open Featured Images';
  $export['open_featured_images'] = $view;

  $view = new view();
  $view->name = 'open_series';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Open Series';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'series' => 'series',
  );

  /* Display: Open Series Page */
  $handler = $view->new_display('page', 'Open Series Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Album Cover */
  $handler->display->display_options['fields']['field_series_album_cover']['id'] = 'field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['table'] = 'field_data_field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['field'] = 'field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['label'] = '';
  $handler->display->display_options['fields']['field_series_album_cover']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_album_cover']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_series_album_cover']['settings'] = array(
    'image_style' => 'series',
    'image_link' => 'content',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'series' => 'series',
  );
  /* Filter criterion: Taxonomy term: CC Series (field_cc_series) */
  $handler->display->display_options['filters']['field_cc_series_value']['id'] = 'field_cc_series_value';
  $handler->display->display_options['filters']['field_cc_series_value']['table'] = 'field_data_field_cc_series';
  $handler->display->display_options['filters']['field_cc_series_value']['field'] = 'field_cc_series_value';
  $handler->display->display_options['filters']['field_cc_series_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['path'] = 'open';
  $export['open_series'] = $view;

  $view = new view();
  $view->name = 'people_featured';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'People Featured';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Featured People';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="people" class="people-more-link">View all contributors</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  /* Field: Taxonomy term: Image */
  $handler->display->display_options['fields']['field_people_image']['id'] = 'field_people_image';
  $handler->display->display_options['fields']['field_people_image']['table'] = 'field_data_field_people_image';
  $handler->display->display_options['fields']['field_people_image']['field'] = 'field_people_image';
  $handler->display->display_options['fields']['field_people_image']['label'] = '';
  $handler->display->display_options['fields']['field_people_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_people_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_people_image']['settings'] = array(
    'image_style' => 'people',
    'image_link' => 'content',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'people' => 'people',
  );
  /* Filter criterion: Taxonomy term: Featured People (field_featured) */
  $handler->display->display_options['filters']['field_featured_value']['id'] = 'field_featured_value';
  $handler->display->display_options['filters']['field_featured_value']['table'] = 'field_data_field_featured';
  $handler->display->display_options['filters']['field_featured_value']['field'] = 'field_featured_value';
  $handler->display->display_options['filters']['field_featured_value']['value'] = array(
    1 => '1',
  );

  /* Display: People Featured Block */
  $handler = $view->new_display('block', 'People Featured Block', 'block');
  $handler->display->display_options['block_description'] = 'People Featured Block';

  /* Display: Open People Featured Block */
  $handler = $view->new_display('block', 'Open People Featured Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Supporters of Open Content';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['block_description'] = 'Open Featured People';
  $export['people_featured'] = $view;

  $view = new view();
  $view->name = 'people_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'People View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Go';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '@total contributors';
  /* Field: Taxonomy term: Image */
  $handler->display->display_options['fields']['field_people_image']['id'] = 'field_people_image';
  $handler->display->display_options['fields']['field_people_image']['table'] = 'field_data_field_people_image';
  $handler->display->display_options['fields']['field_people_image']['field'] = 'field_people_image';
  $handler->display->display_options['fields']['field_people_image']['label'] = '';
  $handler->display->display_options['fields']['field_people_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_people_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_people_image']['settings'] = array(
    'image_style' => 'people',
    'image_link' => 'content',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Field: Oxford Unit */
  $handler->display->display_options['fields']['field_unit']['id'] = 'field_unit';
  $handler->display->display_options['fields']['field_unit']['table'] = 'field_data_field_unit';
  $handler->display->display_options['fields']['field_unit']['field'] = 'field_unit';
  $handler->display->display_options['fields']['field_unit']['label'] = '';
  $handler->display->display_options['fields']['field_unit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_unit']['delta_offset'] = '0';
  /* Sort criterion: Taxonomy term: Featured People (field_featured) */
  $handler->display->display_options['sorts']['field_featured_value']['id'] = 'field_featured_value';
  $handler->display->display_options['sorts']['field_featured_value']['table'] = 'field_data_field_featured';
  $handler->display->display_options['sorts']['field_featured_value']['field'] = 'field_featured_value';
  $handler->display->display_options['sorts']['field_featured_value']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_featured_value']['expose']['label'] = 'Featured (field_featured)';
  /* Sort criterion: Taxonomy term: Image (field_people_image:fid) */
  $handler->display->display_options['sorts']['field_people_image_fid']['id'] = 'field_people_image_fid';
  $handler->display->display_options['sorts']['field_people_image_fid']['table'] = 'field_data_field_people_image';
  $handler->display->display_options['sorts']['field_people_image_fid']['field'] = 'field_people_image_fid';
  $handler->display->display_options['sorts']['field_people_image_fid']['order'] = 'DESC';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'people' => 'people',
  );
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'name' => 'name',
  );
  /* Filter criterion: Oxford Unit (field_unit) (selective) */
  $handler->display->display_options['filters']['field_unit_tid_selective']['id'] = 'field_unit_tid_selective';
  $handler->display->display_options['filters']['field_unit_tid_selective']['table'] = 'field_data_field_unit';
  $handler->display->display_options['filters']['field_unit_tid_selective']['field'] = 'field_unit_tid_selective';
  $handler->display->display_options['filters']['field_unit_tid_selective']['ui_name'] = 'Oxford Unit (field_unit) (selective)';
  $handler->display->display_options['filters']['field_unit_tid_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_unit_tid_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_unit_tid_selective']['expose']['identifier'] = 'field_unit_tid_selective';
  $handler->display->display_options['filters']['field_unit_tid_selective']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_unit_tid_selective']['selective_display_field'] = 'field_unit';
  $handler->display->display_options['filters']['field_unit_tid_selective']['selective_items_limit'] = '100';

  /* Display: People Gallery */
  $handler = $view->new_display('page', 'People Gallery', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '20, 40, 60, 100';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'people' => 'people',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'name' => 'name',
  );
  /* Filter criterion: Oxford Unit (field_unit) (selective) */
  $handler->display->display_options['filters']['field_unit_tid_selective']['id'] = 'field_unit_tid_selective';
  $handler->display->display_options['filters']['field_unit_tid_selective']['table'] = 'field_data_field_unit';
  $handler->display->display_options['filters']['field_unit_tid_selective']['field'] = 'field_unit_tid_selective';
  $handler->display->display_options['filters']['field_unit_tid_selective']['ui_name'] = 'Oxford Unit (field_unit) (selective)';
  $handler->display->display_options['filters']['field_unit_tid_selective']['group'] = 1;
  $handler->display->display_options['filters']['field_unit_tid_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_unit_tid_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_unit_tid_selective']['expose']['identifier'] = 'field_unit_tid_selective';
  $handler->display->display_options['filters']['field_unit_tid_selective']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_unit_tid_selective']['selective_display_field'] = 'field_unit';
  $handler->display->display_options['filters']['field_unit_tid_selective']['selective_items_limit'] = '100';
  $handler->display->display_options['path'] = 'people';
  $export['people_view'] = $view;

  $view = new view();
  $view->name = 'series_featured';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Series Featured';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Featured Series';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="series" class="series-more-link">View all podcast series</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  /* Field: Taxonomy term: Album Cover */
  $handler->display->display_options['fields']['field_series_album_cover']['id'] = 'field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['table'] = 'field_data_field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['field'] = 'field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['label'] = '';
  $handler->display->display_options['fields']['field_series_album_cover']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_album_cover']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_series_album_cover']['settings'] = array(
    'image_style' => 'series',
    'image_link' => 'content',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'series' => 'series',
  );
  /* Filter criterion: Taxonomy term: Featured Series (field_featured_series) */
  $handler->display->display_options['filters']['field_featured_series_value']['id'] = 'field_featured_series_value';
  $handler->display->display_options['filters']['field_featured_series_value']['table'] = 'field_data_field_featured_series';
  $handler->display->display_options['filters']['field_featured_series_value']['field'] = 'field_featured_series_value';
  $handler->display->display_options['filters']['field_featured_series_value']['value'] = array(
    1 => '1',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['series_featured'] = $view;

  $view = new view();
  $view->name = 'series_gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Series Gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = ' .';
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_unit' => 'field_unit',
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '@total series';
  /* Relationship: Taxonomy term: Representative node */
  $handler->display->display_options['relationships']['tid_representative']['id'] = 'tid_representative';
  $handler->display->display_options['relationships']['tid_representative']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['tid_representative']['field'] = 'tid_representative';
  $handler->display->display_options['relationships']['tid_representative']['required'] = TRUE;
  $handler->display->display_options['relationships']['tid_representative']['subquery_sort'] = 'node.created';
  $handler->display->display_options['relationships']['tid_representative']['subquery_view'] = '';
  $handler->display->display_options['relationships']['tid_representative']['subquery_namespace'] = '';
  /* Relationship: Taxonomy term: Content with term */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'taxonomy_index';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'fieldset-series-wrapper';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'fieldset_2',
    1 => 'fieldset_1',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_2']['id'] = 'fieldset_2';
  $handler->display->display_options['fields']['fieldset_2']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_2']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_2']['label'] = 'fieldset-series-left';
  $handler->display->display_options['fields']['fieldset_2']['children'] = array(
    0 => 'field_series_album_cover',
  );
  $handler->display->display_options['fields']['fieldset_2']['fieldset']['type'] = 'div';
  /* Field: Taxonomy term: Album Cover */
  $handler->display->display_options['fields']['field_series_album_cover']['id'] = 'field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['table'] = 'field_data_field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['field'] = 'field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['label'] = '';
  $handler->display->display_options['fields']['field_series_album_cover']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_album_cover']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_series_album_cover']['settings'] = array(
    'image_style' => 'series',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_series_album_cover']['group_column'] = 'entity_id';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['label'] = 'fieldset-series-right';
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'created',
    1 => 'nid',
    2 => 'description',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'tid_representative';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd M Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'search_api_facetapi_YEAR';
  /* Field: COUNT(Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['nid']['format_plural_singular'] = '1 Episode';
  $handler->display->display_options['fields']['nid']['format_plural_plural'] = '@count Episodes';
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['description']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_3']['id'] = 'fieldset_3';
  $handler->display->display_options['fields']['fieldset_3']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_3']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_3']['label'] = 'fieldset-series-bottom';
  $handler->display->display_options['fields']['fieldset_3']['children'] = array(
    0 => 'field_unit',
  );
  $handler->display->display_options['fields']['fieldset_3']['fieldset']['type'] = 'div';
  /* Field: Field: Oxford Unit */
  $handler->display->display_options['fields']['field_unit']['id'] = 'field_unit';
  $handler->display->display_options['fields']['field_unit']['table'] = 'field_data_field_unit';
  $handler->display->display_options['fields']['field_unit']['field'] = 'field_unit';
  $handler->display->display_options['fields']['field_unit']['label'] = 'Departement/College';
  $handler->display->display_options['fields']['field_unit']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'tid_representative';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Last Updated';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['name']['expose']['label'] = 'Title A-Z';
  /* Sort criterion: COUNT(Content: Nid) */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['relationship'] = 'tid_representative';
  $handler->display->display_options['sorts']['nid']['group_type'] = 'count';
  $handler->display->display_options['sorts']['nid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['nid']['expose']['label'] = '# of Episodes';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created_1']['id'] = 'created_1';
  $handler->display->display_options['sorts']['created_1']['table'] = 'node';
  $handler->display->display_options['sorts']['created_1']['field'] = 'created';
  $handler->display->display_options['sorts']['created_1']['relationship'] = 'nid';
  $handler->display->display_options['sorts']['created_1']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created_1']['expose']['label'] = 'Series Created';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'series' => 'series',
  );
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'name' => 'name',
    'description' => 'description',
    'field_unit' => 'field_unit',
  );
  /* Filter criterion: Oxford Unit (field_unit) (selective) */
  $handler->display->display_options['filters']['field_unit_tid_selective']['id'] = 'field_unit_tid_selective';
  $handler->display->display_options['filters']['field_unit_tid_selective']['table'] = 'field_data_field_unit';
  $handler->display->display_options['filters']['field_unit_tid_selective']['field'] = 'field_unit_tid_selective';
  $handler->display->display_options['filters']['field_unit_tid_selective']['ui_name'] = 'Oxford Unit (field_unit) (selective)';
  $handler->display->display_options['filters']['field_unit_tid_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_unit_tid_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_unit_tid_selective']['expose']['identifier'] = 'field_unit_tid_selective';
  $handler->display->display_options['filters']['field_unit_tid_selective']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_unit_tid_selective']['selective_display_field'] = 'field_unit';
  $handler->display->display_options['filters']['field_unit_tid_selective']['selective_items_limit'] = '100';

  /* Display: Series Gallery */
  $handler = $view->new_display('page', 'Series Gallery', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'series';
  $export['series_gallery'] = $view;

  $view = new view();
  $view->name = 'series_sidr';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Series Sidr';
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
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_unit' => 'field_unit',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Album Cover */
  $handler->display->display_options['fields']['field_series_album_cover']['id'] = 'field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['table'] = 'field_data_field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['field'] = 'field_series_album_cover';
  $handler->display->display_options['fields']['field_series_album_cover']['label'] = '';
  $handler->display->display_options['fields']['field_series_album_cover']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_album_cover']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_series_album_cover']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'series' => 'series',
  );

  /* Display: Series Block (Sidr) */
  $handler = $view->new_display('block', 'Series Block (Sidr)', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<input id="hideseek-search" name="hideseek-search" placeholder="Search Series Name" type="text" data-list=".sidr-class-view-content" >
<a id="sidr-close-menu">✕</a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'series' => 'series',
  );
  $handler->display->display_options['block_description'] = 'Sidr Series Block';
  $export['series_sidr'] = $view;

  $view = new view();
  $view->name = 'unit_featured';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Unit Featured';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Featured Department & Colleges';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="departments-colleges" class="unit-more-link">View all departments & colleges</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  /* Field: Taxonomy term: Image */
  $handler->display->display_options['fields']['field_unit_image']['id'] = 'field_unit_image';
  $handler->display->display_options['fields']['field_unit_image']['table'] = 'field_data_field_unit_image';
  $handler->display->display_options['fields']['field_unit_image']['field'] = 'field_unit_image';
  $handler->display->display_options['fields']['field_unit_image']['label'] = '';
  $handler->display->display_options['fields']['field_unit_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_unit_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_unit_image']['settings'] = array(
    'image_style' => 'people',
    'image_link' => 'content',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'units' => 'units',
  );
  /* Filter criterion: Taxonomy term: Image (field_unit_image:fid) */
  $handler->display->display_options['filters']['field_unit_image_fid']['id'] = 'field_unit_image_fid';
  $handler->display->display_options['filters']['field_unit_image_fid']['table'] = 'field_data_field_unit_image';
  $handler->display->display_options['filters']['field_unit_image_fid']['field'] = 'field_unit_image_fid';
  $handler->display->display_options['filters']['field_unit_image_fid']['operator'] = 'not empty';
  /* Filter criterion: Taxonomy term: Featured Dept/College (field_unit_featured) */
  $handler->display->display_options['filters']['field_unit_featured_value']['id'] = 'field_unit_featured_value';
  $handler->display->display_options['filters']['field_unit_featured_value']['table'] = 'field_data_field_unit_featured';
  $handler->display->display_options['filters']['field_unit_featured_value']['field'] = 'field_unit_featured_value';
  $handler->display->display_options['filters']['field_unit_featured_value']['value'] = array(
    1 => '1',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Unit Featured Block';
  $export['unit_featured'] = $view;

  $view = new view();
  $view->name = 'unit_gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Unit Gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Departments & Colleges';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Go';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'views_term_top_ancestor',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Taxonomy term: Taxonomy term using Oxford Unit */
  $handler->display->display_options['relationships']['reverse_field_unit_taxonomy_term']['id'] = 'reverse_field_unit_taxonomy_term';
  $handler->display->display_options['relationships']['reverse_field_unit_taxonomy_term']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_unit_taxonomy_term']['field'] = 'reverse_field_unit_taxonomy_term';
  /* Relationship: Taxonomy term: Content using Series */
  $handler->display->display_options['relationships']['reverse_field_series_node']['id'] = 'reverse_field_series_node';
  $handler->display->display_options['relationships']['reverse_field_series_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_series_node']['field'] = 'reverse_field_series_node';
  $handler->display->display_options['relationships']['reverse_field_series_node']['relationship'] = 'reverse_field_unit_taxonomy_term';
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  /* Field: COUNT(Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_series_node';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name] ([nid])';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Top-level ancestor */
  $handler->display->display_options['fields']['views_term_top_ancestor']['id'] = 'views_term_top_ancestor';
  $handler->display->display_options['fields']['views_term_top_ancestor']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['views_term_top_ancestor']['field'] = 'views_term_top_ancestor';
  $handler->display->display_options['fields']['views_term_top_ancestor']['label'] = '';
  $handler->display->display_options['fields']['views_term_top_ancestor']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_term_top_ancestor']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_term_top_ancestor']['link_to_taxonomy'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'parent';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name_1']['id'] = 'name_1';
  $handler->display->display_options['sorts']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name_1']['field'] = 'name';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    6 => '6',
  );
  $handler->display->display_options['filters']['vid']['group'] = 1;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['relationship'] = 'reverse_field_series_node';
  $handler->display->display_options['filters']['nid']['operator'] = '>';
  $handler->display->display_options['filters']['nid']['value']['value'] = '0';
  $handler->display->display_options['filters']['nid']['group'] = 2;
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['value'] = 'Continuing Education';
  $handler->display->display_options['filters']['name']['group'] = 2;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'departments-colleges';
  $export['unit_gallery'] = $view;

  return $export;
}
