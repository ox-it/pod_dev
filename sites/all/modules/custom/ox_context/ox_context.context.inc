<?php
/**
 * @file
 * ox_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ox_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_all';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-6' => array(
          'module' => 'block',
          'delta' => '6',
          'region' => 'header-middle-left',
          'weight' => '-10',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'header-middle-right',
          'weight' => '-10',
        ),
        'system-powered-by' => array(
          'module' => 'system',
          'delta' => 'powered-by',
          'region' => 'footer_top_left',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['context_all'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_breadcrumb';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array();
  $context->reactions = array();
  $context->condition_mode = 0;
  $export['context_breadcrumb'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_episode_node';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'episode' => 'episode',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-9b7fe8d2964fd2d8c6ee04b0e59788e2' => array(
          'module' => 'views',
          'delta' => '9b7fe8d2964fd2d8c6ee04b0e59788e2',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-episode_node_view-block_1' => array(
          'module' => 'views',
          'delta' => 'episode_node_view-block_1',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['context_episode_node'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_front';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-episode_search_solr_-page' => array(
          'module' => 'views',
          'delta' => '-exp-episode_search_solr_-page',
          'region' => 'featured-one',
          'weight' => '-10',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'featured-two',
          'weight' => '-10',
        ),
        'views-series_featured-block' => array(
          'module' => 'views',
          'delta' => 'series_featured-block',
          'region' => 'featured-three',
          'weight' => '-9',
        ),
        'views-people_featured-block' => array(
          'module' => 'views',
          'delta' => 'people_featured-block',
          'region' => 'featured-four',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['context_front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_people';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'people' => 'people',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-people_view-page' => array(
          'module' => 'views',
          'delta' => '-exp-people_view-page',
          'region' => 'featured-one',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['context_people'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_people_page';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'people' => 'people',
        'people/*' => 'people/*',
      ),
    ),
    'taxonomy_term' => array(
      'values' => array(
        'people' => 'people',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-people_view-page' => array(
          'module' => 'views',
          'delta' => '-exp-people_view-page',
          'region' => 'featured-one',
          'weight' => '-27',
        ),
        'fieldblock-bdcadf5ac654ed7b2d0bed98ddbbca1a' => array(
          'module' => 'fieldblock',
          'delta' => 'bdcadf5ac654ed7b2d0bed98ddbbca1a',
          'region' => 'featured-one',
          'weight' => '-25',
        ),
        'fieldblock-3dbe9f8cbf1b14bec2bd52b6292ca403' => array(
          'module' => 'fieldblock',
          'delta' => '3dbe9f8cbf1b14bec2bd52b6292ca403',
          'region' => 'featured-one',
          'weight' => '-10',
        ),
        'fieldblock-7d9066c7669a89290d050e50e280919a' => array(
          'module' => 'fieldblock',
          'delta' => '7d9066c7669a89290d050e50e280919a',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'fieldblock-cdd8d27af833196db5fd48c8da91d8d8' => array(
          'module' => 'fieldblock',
          'delta' => 'cdd8d27af833196db5fd48c8da91d8d8',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'fieldblock-54f7e23c84e601be1dc3f7dffffeec2b' => array(
          'module' => 'fieldblock',
          'delta' => '54f7e23c84e601be1dc3f7dffffeec2b',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'context-people-page',
    ),
  );
  $context->condition_mode = 0;
  $export['context_people_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_search_banner';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-episode_search_solr-page' => array(
          'module' => 'views',
          'delta' => '-exp-episode_search_solr-page',
          'region' => 'featured',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['context_search_banner'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_searchapi';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search' => 'search',
        'search*' => 'search*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-episode_search_api-page' => array(
          'module' => 'views',
          'delta' => '-exp-episode_search_api-page',
          'region' => 'featured',
          'weight' => '-10',
        ),
        'current_search-episode_current_search' => array(
          'module' => 'current_search',
          'delta' => 'episode_current_search',
          'region' => 'featured',
          'weight' => '-9',
        ),
        'facetapi-EZWaCxOWhedI0cUvGDFTeNECA3eaUehM' => array(
          'module' => 'facetapi',
          'delta' => 'EZWaCxOWhedI0cUvGDFTeNECA3eaUehM',
          'region' => 'sidebar_second',
          'weight' => '-21',
        ),
        'facetapi-gIWEsGcCXOebHOnc62cCOpYzXEMwx8gd' => array(
          'module' => 'facetapi',
          'delta' => 'gIWEsGcCXOebHOnc62cCOpYzXEMwx8gd',
          'region' => 'sidebar_second',
          'weight' => '-20',
        ),
        'facetapi-2jJNzaGGAk51or515mhY4LIxVV2yhQ9K' => array(
          'module' => 'facetapi',
          'delta' => '2jJNzaGGAk51or515mhY4LIxVV2yhQ9K',
          'region' => 'sidebar_second',
          'weight' => '-19',
        ),
        'facetapi-nfMPqS2Nrkzo4693KsSw79EEoXE7aK31' => array(
          'module' => 'facetapi',
          'delta' => 'nfMPqS2Nrkzo4693KsSw79EEoXE7aK31',
          'region' => 'sidebar_second',
          'weight' => '-18',
        ),
        'facetapi-362X7yIwCWvjKplJmmvMq7R4XcGmkqNP' => array(
          'module' => 'facetapi',
          'delta' => '362X7yIwCWvjKplJmmvMq7R4XcGmkqNP',
          'region' => 'sidebar_second',
          'weight' => '-17',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['context_searchapi'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_searchapi_solr';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'solr' => 'solr',
        'solr*' => 'solr*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-episode_search_solr_-page' => array(
          'module' => 'views',
          'delta' => '-exp-episode_search_solr_-page',
          'region' => 'featured-one',
          'weight' => '-10',
        ),
        'current_search-episode_current_search_solr' => array(
          'module' => 'current_search',
          'delta' => 'episode_current_search_solr',
          'region' => 'featured-one',
          'weight' => '-9',
        ),
        'block-7' => array(
          'module' => 'block',
          'delta' => '7',
          'region' => 'featured-two',
          'weight' => '-10',
        ),
        'facetapi-o6aDGCaAmfMxmbKrOU0dCvz7VInqV0yO' => array(
          'module' => 'facetapi',
          'delta' => 'o6aDGCaAmfMxmbKrOU0dCvz7VInqV0yO',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-d0QkDcLZVvKKApcDWQIsYZWHl7OBcfql' => array(
          'module' => 'facetapi',
          'delta' => 'd0QkDcLZVvKKApcDWQIsYZWHl7OBcfql',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-837BDXTsIxl64mMkFvJwYkbi2ENJXzt4' => array(
          'module' => 'facetapi',
          'delta' => '837BDXTsIxl64mMkFvJwYkbi2ENJXzt4',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'facetapi-of40kfhwyeEUIt533q2rG0nxZzK9A5sK' => array(
          'module' => 'facetapi',
          'delta' => 'of40kfhwyeEUIt533q2rG0nxZzK9A5sK',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'context-episode-page',
    ),
  );
  $context->condition_mode = 0;
  $export['context_searchapi_solr'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_series_page';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'series' => 'series',
        'series/*' => 'series/*',
      ),
    ),
    'taxonomy_term' => array(
      'values' => array(
        'series' => 'series',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-series_gallery-page' => array(
          'module' => 'views',
          'delta' => '-exp-series_gallery-page',
          'region' => 'featured-one',
          'weight' => '-10',
        ),
        'fieldblock-f3b41b0d6b540a613d7f82df1568a0ba' => array(
          'module' => 'fieldblock',
          'delta' => 'f3b41b0d6b540a613d7f82df1568a0ba',
          'region' => 'featured-one',
          'weight' => '-9',
        ),
        'fieldblock-8a7af6a03ced7132e0a84a2c74e6eb51' => array(
          'module' => 'fieldblock',
          'delta' => '8a7af6a03ced7132e0a84a2c74e6eb51',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'fieldblock-930ac34e1bf7b2e5e0bdb144db8a5d2c' => array(
          'module' => 'fieldblock',
          'delta' => '930ac34e1bf7b2e5e0bdb144db8a5d2c',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'fieldblock-42d99c56b52cb2270df884230914d4c8' => array(
          'module' => 'fieldblock',
          'delta' => '42d99c56b52cb2270df884230914d4c8',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'context-series-page',
    ),
  );
  $context->condition_mode = 0;
  $export['context_series_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_sidr';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-8' => array(
          'module' => 'block',
          'delta' => '8',
          'region' => 'header-bottom-left',
          'weight' => '-10',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'header-bottom-right',
          'weight' => '-10',
        ),
        'views-series_gallery-block_1' => array(
          'module' => 'views',
          'delta' => 'series_gallery-block_1',
          'region' => 'footer_hidden_one',
          'weight' => '-10',
        ),
        'views-d1fd9fb73e9d432f430dcbd5aaf5eaf1' => array(
          'module' => 'views',
          'delta' => 'd1fd9fb73e9d432f430dcbd5aaf5eaf1',
          'region' => 'footer_hidden_one',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['context_sidr'] = $context;

  return $export;
}
