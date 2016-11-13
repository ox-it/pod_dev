<?php
/**
 * @file
 * ox_podcasts.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ox_podcasts_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_series_left|taxonomy_term|series|default';
  $field_group->group_name = 'group_series_left';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'series';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Series Left',
    'weight' => '1',
    'children' => array(
      0 => 'field_relevant_links',
      1 => 'field_series_album_cover',
      2 => 'field_unit',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Series Left',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-series-left field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'blind',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_series_right|taxonomy_term|series|default';
  $field_group->group_name = 'group_series_right';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'series';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Series Right',
    'weight' => '2',
    'children' => array(
      0 => 'episode_search_solr__entity_view_1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Series Right',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-series-right field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'blind',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_series|taxonomy_term|series|default';
  $field_group->group_name = 'group_series';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'series';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Description',
    'weight' => '0',
    'children' => array(
      0 => 'description',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Description',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-series field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups[''] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Description');
  t('Series Left');
  t('Series Right');

  return $field_groups;
}
