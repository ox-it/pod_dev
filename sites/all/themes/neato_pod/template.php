<?php

/**
 * Implements template_preprocess_html().
 */
function neato_pod_preprocess_html(&$variables) {
}

/**
 * Implements template_preprocess_page.
 */
function neato_pod_preprocess_page(&$variables) {
}

/**
 * Implements template_preprocess_node.
 */
function neato_pod_preprocess_node(&$variables) {
}


/**
 * Implements template_preprocess_block. This adds the search box to the Facet API
 * blocks, and also adds classes to each of the blocks for styling (in _sidebars.scss)
 */
function neato_pod_preprocess_block(&$variables) {

	if($variables['block']->delta == 'o6aDGCaAmfMxmbKrOU0dCvz7VInqV0yO') {
                $variables['title_suffix'] = '<input id="hideseek-keywords" name="hideseek-keywords" placeholder="Keyword Filter" type="text" data-list=".facetapi-facet-field-keywords" >';
                $variables['classes_array'][] = drupal_html_class('block-facetapi-keywords');
            }

    if($variables['block']->delta == 'of40kfhwyeEUIt533q2rG0nxZzK9A5sK') {

                $variables['title_suffix'] = '<input id="hideseek-units" name="hideseek-units" placeholder="Oxford Unit Filter" type="text" data-list=".facetapi-facet-field-seriesfield-unit" >';
                $variables['classes_array'][] = drupal_html_class('block-facetapi-units');
            }

}

/**
 *  Add placeholder text to Search API search form block, and remove title
 */
function neato_pod_form_views_exposed_form_alter(&$form, &$form_state, $form_id) {
	//dpm($form);
  	if (isset($form['search_api_views_fulltext'])) {
    	$form['search_api_views_fulltext']['#attributes']['placeholder'] = t('Search Podcasts Here...');
  	}

  	if ($form['#id'] == 'views-exposed-form-series-gallery-page') {
  		if (isset($form['combine'])) {
            $form['combine']['#attributes']['placeholder'] = t('Search Series Here...');
    	}
  	}

    if ($form['#id'] == 'views-exposed-form-people-view-page') {
      if (isset($form['combine'])) {
            $form['combine']['#attributes']['placeholder'] = t('Search People Here...');
      }
    }

  	// Remove hard-to-remove title from Search API fulltext search block 

  	if (isset($form['#info']['filter-search_api_views_fulltext']['label'])) {
  		$form['#info']['filter-search_api_views_fulltext']['label'] = t('');
  	}

  	if ($form['#id'] == 'views-exposed-form-series-gallery-page') {

    	$form['field_unit_tid_selective']['#options']['All'] = t('- - - All Oxford Units - - -'); // overrides <All> on the dropdown

  }

}