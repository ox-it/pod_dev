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


    // Add hideseek keyword search box to *Sidr* episode sidebar
    // if($variables['block']->delta == 'o6aDGCaAmfMxmbKrOU0dCvz7VInqV0yO' && $variables['block']->module == 'facetapi') {
    //     $variables['title_suffix'] = '<input id="hideseek-keywords" name="hideseek-keywords" placeholder="Search Keywords" type="text" data-list=".facetapi-facet-field-keywords"><a id="sidr-menu-keywords" href="#sidr-menu-keywords-button">View All Keywords</a>';
    //     $variables['classes_array'][] = drupal_html_class('block-facetapi-keywords');
    // }

    // Add hideseek department/college search box in static episode sidebar
    if($variables['block']->delta == 'of40kfhwyeEUIt533q2rG0nxZzK9A5sK' || $variables['block']->delta == '362X7yIwCWvjKplJmmvMq7R4XcGmkqNP') {
        $variables['title_suffix'] = '<input id="hideseek-units" name="hideseek-units" placeholder="Oxford Unit Filter" type="text" data-list=".facetapi-facet-field-seriesfield-unit" >';
        $variables['classes_array'][] = drupal_html_class('block-facetapi-units');
    }

    // Keywords Sidr popout sidebar on FRONT page
    if($variables['block']->delta == 'd1fd9fb73e9d432f430dcbd5aaf5eaf1' || $variables['block']->delta == '23ce4c144ceee6d3f5e17c3593438fe4') {
        $variables['title_suffix'] = '<input id="hideseek-keywords-two" name="hideseek-keywords-two" placeholder="Search Keywords" type="text" data-list=".sidr-class-item-list ul" ><a id="sidr-close-keyword-menu">✕</a>';
        //$variables['classes_array'][] = drupal_html_class('block-facetapi-keywords-sidr');
    }

    // Keywords Sidr popout sidebar (Keywords refine) on Episode page
    if($variables['block']->delta == 'o6aDGCaAmfMxmbKrOU0dCvz7VInqV0yO' || $variables['block']->delta == 'nfMPqS2Nrkzo4693KsSw79EEoXE7aK31') {
        $variables['title_suffix'] = '<input id="hideseek-keywords" name="hideseek-keywords" placeholder="Search Keywords" type="text" data-list=".sidr-class-item-list ul" ><a id="sidr-close-keyword-menu">✕</a>';
        //$variables['classes_array'][] = drupal_html_class('block-facetapi-keywords-sidr');
    }
  
    // Add "X" close button on Episode Sidr popout
    if ($variables['block']->module == 'facetapi' && $variables['block']->delta == 'gIWEsGcCXOebHOnc62cCOpYzXEMwx8gd') {
        $variables['title_prefix'] = '<a id="sidr-close-episode-menu">✕</a>';
    }


}

/**
 *  Add placeholder text to Search API search form block, and remove title
 */
function neato_pod_form_views_exposed_form_alter(&$form, &$form_state, $form_id) {
	//dpm($form);


    if ($form['#id'] == 'views-exposed-form-episode-search-solr--entity-view-1' || 'views-exposed-form-episode-search-solr--entity-view-2' || 'views-exposed-form-episode-search-solr--entity-view-3') {
      if (isset($form['search_api_views_fulltext'])) {
        $form['search_api_views_fulltext']['#attributes']['placeholder'] = t('Search Episodes Here...');
      }
    }

    if ($form['#id'] == 'views-exposed-form-episode-search-solr--page') {
      if (isset($form['search_api_views_fulltext'])) {
        $form['search_api_views_fulltext']['#attributes']['placeholder'] = t('Search Episodes Here...');
      }
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

    if ($form['#id'] == 'views-exposed-form-open-series-page') {
      if (isset($form['combine'])) {
            $form['combine']['#attributes']['placeholder'] = t('Search Open Series Here...');
      }
    }

  	// Remove hard-to-remove title from Search API fulltext search block 

  	if (isset($form['#info']['filter-search_api_views_fulltext']['label'])) {
  		$form['#info']['filter-search_api_views_fulltext']['label'] = t('');
  	}

  	if ($form['#id'] == 'views-exposed-form-series-gallery-page') {
    	$form['field_unit_tid_selective']['#options']['All'] = t('- - - All Oxford Units - - -'); // overrides <All> on the dropdown
    }

    if ($form['#id'] == 'views-exposed-form-people-view-page') {
      $form['field_unit_tid_selective']['#options']['All'] = t('- - - All Oxford Units - - -'); // overrides <All> on the dropdown
    }

}


// <input id="hideseek-search" name="hideseek-search" placeholder="Start typing here" type="text" data-list=".sidr-class-view-content" >
// <a id="sidr-close-menu">✕</a>
