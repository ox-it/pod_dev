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
          'region' => 'header-top-left',
          'weight' => '-10',
        ),
        'block-11' => array(
          'module' => 'block',
          'delta' => '11',
          'region' => 'header-top-right',
          'weight' => '-43',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'header-top-right',
          'weight' => '-42',
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
  $context->disabled = TRUE; /* Edit this to true to make a default context disabled initially */
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
  $context->name = 'context_episode_page';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'episode' => 'episode',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'fieldblock-147b4153c84cfc7b04f931d31b0526da' => array(
          'module' => 'fieldblock',
          'delta' => '147b4153c84cfc7b04f931d31b0526da',
          'region' => 'featured-one',
          'weight' => '-10',
        ),
        'fieldblock-bab0a9cf996c7c050ff661f639d1d1d5' => array(
          'module' => 'fieldblock',
          'delta' => 'bab0a9cf996c7c050ff661f639d1d1d5',
          'region' => 'featured-one',
          'weight' => '-9',
        ),
        'fieldblock-6df17c2717ea214b799783df4c831520' => array(
          'module' => 'fieldblock',
          'delta' => '6df17c2717ea214b799783df4c831520',
          'region' => 'featured-one',
          'weight' => '-8',
        ),
        'fieldblock-4339cdcb3735174b76775d6ddac3dd5f' => array(
          'module' => 'fieldblock',
          'delta' => '4339cdcb3735174b76775d6ddac3dd5f',
          'region' => 'featured-two',
          'weight' => '-10',
        ),
        'fieldblock-e7dc4b3cd7e53a43ab7070c246a8003f' => array(
          'module' => 'fieldblock',
          'delta' => 'e7dc4b3cd7e53a43ab7070c246a8003f',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-9b7fe8d2964fd2d8c6ee04b0e59788e2' => array(
          'module' => 'views',
          'delta' => '9b7fe8d2964fd2d8c6ee04b0e59788e2',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-episode_node_view-block_1' => array(
          'module' => 'views',
          'delta' => 'episode_node_view-block_1',
          'region' => 'content',
          'weight' => '-8',
        ),
        'fieldblock-4d4f4dfd90a617592ab52dc4a738d36f' => array(
          'module' => 'fieldblock',
          'delta' => '4d4f4dfd90a617592ab52dc4a738d36f',
          'region' => 'content',
          'weight' => '-7',
        ),
        'fieldblock-16e816e45c986dcf5e236f70e09d6b54' => array(
          'module' => 'fieldblock',
          'delta' => '16e816e45c986dcf5e236f70e09d6b54',
          'region' => 'content',
          'weight' => '-6',
        ),
        'fieldblock-246fe9672be939b4eabf987d9769fd64' => array(
          'module' => 'fieldblock',
          'delta' => '246fe9672be939b4eabf987d9769fd64',
          'region' => 'content',
          'weight' => '-5',
        ),
        'fieldblock-630a57856486cdfd6ffae3f01d91f1de' => array(
          'module' => 'fieldblock',
          'delta' => '630a57856486cdfd6ffae3f01d91f1de',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'fieldblock-7b10cc1cab6a98fd855a85ecf788b262' => array(
          'module' => 'fieldblock',
          'delta' => '7b10cc1cab6a98fd855a85ecf788b262',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'fieldblock-f2a1d4eeeeba6a4d281270c27feda668' => array(
          'module' => 'fieldblock',
          'delta' => 'f2a1d4eeeeba6a4d281270c27feda668',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'fieldblock-e35d38c08e89f66e8a25a05d91352fda' => array(
          'module' => 'fieldblock',
          'delta' => 'e35d38c08e89f66e8a25a05d91352fda',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'context-episode-page',
    ),
  );
  $context->condition_mode = 0;
  $export['context_episode_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_episode_solr';
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
          'region' => 'header-middle',
          'weight' => '-10',
        ),
        'current_search-episode_current_search_solr' => array(
          'module' => 'current_search',
          'delta' => 'episode_current_search_solr',
          'region' => 'featured-one',
          'weight' => '-10',
        ),
        'block-7' => array(
          'module' => 'block',
          'delta' => '7',
          'region' => 'featured-two',
          'weight' => '-10',
        ),
        'facetapi-NU2cNBgMSBRM2WKnpsemNlrKMR9EOTv5' => array(
          'module' => 'facetapi',
          'delta' => 'NU2cNBgMSBRM2WKnpsemNlrKMR9EOTv5',
          'region' => 'sidebar_first',
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
        'views-d1fd9fb73e9d432f430dcbd5aaf5eaf1' => array(
          'module' => 'views',
          'delta' => 'd1fd9fb73e9d432f430dcbd5aaf5eaf1',
          'region' => 'footer_hidden_two',
          'weight' => '-10',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'context-results-page',
    ),
  );
  $context->condition_mode = 0;
  $export['context_episode_solr'] = $context;

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
          'region' => 'header-middle',
          'weight' => '-10',
        ),
        'block-8' => array(
          'module' => 'block',
          'delta' => '8',
          'region' => 'featured-one',
          'weight' => '-10',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'featured-one',
          'weight' => '-9',
        ),
        'views-episode_series_count-block' => array(
          'module' => 'views',
          'delta' => 'episode_series_count-block',
          'region' => 'featured-one',
          'weight' => '-8',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'featured-two',
          'weight' => '-10',
        ),
        'views-episode_featured_latest-block_1' => array(
          'module' => 'views',
          'delta' => 'episode_featured_latest-block_1',
          'region' => 'featured-three',
          'weight' => '-10',
        ),
        'views-series_featured-block' => array(
          'module' => 'views',
          'delta' => 'series_featured-block',
          'region' => 'featured-four',
          'weight' => '-10',
        ),
        'views-people_featured-block' => array(
          'module' => 'views',
          'delta' => 'people_featured-block',
          'region' => 'featured-five',
          'weight' => '-10',
        ),
        'views-unit_featured-block' => array(
          'module' => 'views',
          'delta' => 'unit_featured-block',
          'region' => 'featured-six',
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
  $export['context_front'] = $context;

  $context = new stdClass();
  $context->disabled = TRUE; /* Edit this to true to make a default context disabled initially */
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
  $context->name = 'context_people_gallery';
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
          'region' => 'header-middle',
          'weight' => '-10',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'context-people-gallery',
    ),
  );
  $context->condition_mode = 0;
  $export['context_people_gallery'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_people_name';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'people/*' => 'people/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'fieldblock-7d9066c7669a89290d050e50e280919a' => array(
          'module' => 'fieldblock',
          'delta' => '7d9066c7669a89290d050e50e280919a',
          'region' => 'featured-one',
          'weight' => '-9',
        ),
        'fieldblock-bdcadf5ac654ed7b2d0bed98ddbbca1a' => array(
          'module' => 'fieldblock',
          'delta' => 'bdcadf5ac654ed7b2d0bed98ddbbca1a',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['context_people_name'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_people_page';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
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
        'fieldblock-bdcadf5ac654ed7b2d0bed98ddbbca1a' => array(
          'module' => 'fieldblock',
          'delta' => 'bdcadf5ac654ed7b2d0bed98ddbbca1a',
          'region' => 'featured-one',
          'weight' => '-10',
        ),
        'fieldblock-77e58f65f54c4a3b1f9304de010e7c26' => array(
          'module' => 'fieldblock',
          'delta' => '77e58f65f54c4a3b1f9304de010e7c26',
          'region' => 'featured-one',
          'weight' => '-8',
        ),
        'fieldblock-8d83dd80917f5b47c5567abe2f2782e2' => array(
          'module' => 'fieldblock',
          'delta' => '8d83dd80917f5b47c5567abe2f2782e2',
          'region' => 'featured-two',
          'weight' => '-10',
        ),
        'fieldblock-7d9066c7669a89290d050e50e280919a' => array(
          'module' => 'fieldblock',
          'delta' => '7d9066c7669a89290d050e50e280919a',
          'region' => 'sidebar_first',
          'weight' => '-16',
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
  $context->disabled = TRUE; /* Edit this to true to make a default context disabled initially */
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
  $context->disabled = TRUE; /* Edit this to true to make a default context disabled initially */
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
          'region' => 'header-middle-bottom',
          'weight' => '-10',
        ),
        'current_search-episode_current_search_solr' => array(
          'module' => 'current_search',
          'delta' => 'episode_current_search_solr',
          'region' => 'featured-one',
          'weight' => '-10',
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
        'views-d1fd9fb73e9d432f430dcbd5aaf5eaf1' => array(
          'module' => 'views',
          'delta' => 'd1fd9fb73e9d432f430dcbd5aaf5eaf1',
          'region' => 'footer_hidden_two',
          'weight' => '-10',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'context-results-page',
    ),
  );
  $context->condition_mode = 0;
  $export['context_searchapi_solr'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_series_gallery';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'series' => 'series',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-series_gallery-page' => array(
          'module' => 'views',
          'delta' => '-exp-series_gallery-page',
          'region' => 'header-middle',
          'weight' => '-10',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'context-series-gallery',
    ),
  );
  $context->condition_mode = 0;
  $export['context_series_gallery'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_series_name';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~series/*/*' => '~series/*/*',
        'series/*' => 'series/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'fieldblock-8a7af6a03ced7132e0a84a2c74e6eb51' => array(
          'module' => 'fieldblock',
          'delta' => '8a7af6a03ced7132e0a84a2c74e6eb51',
          'region' => 'featured-one',
          'weight' => '-9',
        ),
        'fieldblock-f3b41b0d6b540a613d7f82df1568a0ba' => array(
          'module' => 'fieldblock',
          'delta' => 'f3b41b0d6b540a613d7f82df1568a0ba',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['context_series_name'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_series_page';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'series/*' => 'series/*',
        '~series/*/*' => '~series/*/*',
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
        'fieldblock-f3b41b0d6b540a613d7f82df1568a0ba' => array(
          'module' => 'fieldblock',
          'delta' => 'f3b41b0d6b540a613d7f82df1568a0ba',
          'region' => 'featured-one',
          'weight' => '-10',
        ),
        'fieldblock-64071884587fd9f5976892abab11b1fc' => array(
          'module' => 'fieldblock',
          'delta' => '64071884587fd9f5976892abab11b1fc',
          'region' => 'featured-one',
          'weight' => '-8',
        ),
        'fieldblock-0c7862d7c08985ffc1ae025e83178979' => array(
          'module' => 'fieldblock',
          'delta' => '0c7862d7c08985ffc1ae025e83178979',
          'region' => 'featured-two',
          'weight' => '-10',
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
          'weight' => '-8',
        ),
        'fieldblock-42d99c56b52cb2270df884230914d4c8' => array(
          'module' => 'fieldblock',
          'delta' => '42d99c56b52cb2270df884230914d4c8',
          'region' => 'sidebar_first',
          'weight' => '-7',
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
  $context->disabled = TRUE; /* Edit this to true to make a default context disabled initially */
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

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_unit_gallery';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'departments-colleges' => 'departments-colleges',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-9' => array(
          'module' => 'block',
          'delta' => '9',
          'region' => 'header-middle',
          'weight' => '-10',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'context-unit-gallery',
    ),
  );
  $context->condition_mode = 0;
  $export['context_unit_gallery'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_unit_name';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'departments-colleges/*' => 'departments-colleges/*',
      ),
    ),
    'taxonomy_term' => array(
      'values' => array(
        'units' => 'units',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'fieldblock-dfea7c16f657ccdfe7b463c686203cc9' => array(
          'module' => 'fieldblock',
          'delta' => 'dfea7c16f657ccdfe7b463c686203cc9',
          'region' => 'featured-one',
          'weight' => '-9',
        ),
        'fieldblock-6846037a8753c624f3378f2a930e9e43' => array(
          'module' => 'fieldblock',
          'delta' => '6846037a8753c624f3378f2a930e9e43',
          'region' => 'featured-one',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['context_unit_name'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_unit_page';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'departments-colleges/*' => 'departments-colleges/*',
      ),
    ),
    'taxonomy_term' => array(
      'values' => array(
        'units' => 'units',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'fieldblock-7afe5ac42fd76434610c72d58305bf2d' => array(
          'module' => 'fieldblock',
          'delta' => '7afe5ac42fd76434610c72d58305bf2d',
          'region' => 'featured-one',
          'weight' => '-10',
        ),
        'fieldblock-d5c500a5fa8ad0acb246e0e3fe77d1af' => array(
          'module' => 'fieldblock',
          'delta' => 'd5c500a5fa8ad0acb246e0e3fe77d1af',
          'region' => 'featured-one',
          'weight' => '-7',
        ),
        'fieldblock-8c2171cdad0585deed12a3f528f962b4' => array(
          'module' => 'fieldblock',
          'delta' => '8c2171cdad0585deed12a3f528f962b4',
          'region' => 'featured-two',
          'weight' => '-10',
        ),
        'fieldblock-dfea7c16f657ccdfe7b463c686203cc9' => array(
          'module' => 'fieldblock',
          'delta' => 'dfea7c16f657ccdfe7b463c686203cc9',
          'region' => 'sidebar_first',
          'weight' => '-36',
        ),
        'fieldblock-6846037a8753c624f3378f2a930e9e43' => array(
          'module' => 'fieldblock',
          'delta' => '6846037a8753c624f3378f2a930e9e43',
          'region' => 'sidebar_first',
          'weight' => '-35',
        ),
        'fieldblock-c34999a72a29e2d8a2d62a9b5e8826ce' => array(
          'module' => 'fieldblock',
          'delta' => 'c34999a72a29e2d8a2d62a9b5e8826ce',
          'region' => 'sidebar_first',
          'weight' => '-34',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'context-unit-page',
    ),
  );
  $context->condition_mode = 0;
  $export['context_unit_page'] = $context;

  return $export;
}
