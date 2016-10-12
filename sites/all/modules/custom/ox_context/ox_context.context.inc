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
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'header',
          'weight' => '-10',
        ),
        'views--exp-episode_search_api-page' => array(
          'module' => 'views',
          'delta' => '-exp-episode_search_api-page',
          'region' => 'featured',
          'weight' => '-10',
        ),
        'views-79d5d83c0edb66f7e92ef01f77814bad' => array(
          'module' => 'views',
          'delta' => '79d5d83c0edb66f7e92ef01f77814bad',
          'region' => 'featured',
          'weight' => '-9',
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
        'views-media_files-episode_node_view' => array(
          'module' => 'views',
          'delta' => 'media_files-episode_node_view',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-media_files-block_1' => array(
          'module' => 'views',
          'delta' => 'media_files-block_1',
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
        'views-fca8df778752202bbea2a0bcc517f58a' => array(
          'module' => 'views',
          'delta' => 'fca8df778752202bbea2a0bcc517f58a',
          'region' => 'header',
          'weight' => '-10',
        ),
        'current_search-episode_current_search' => array(
          'module' => 'current_search',
          'delta' => 'episode_current_search',
          'region' => 'content',
          'weight' => '-19',
        ),
        'facetapi-362X7yIwCWvjKplJmmvMq7R4XcGmkqNP' => array(
          'module' => 'facetapi',
          'delta' => '362X7yIwCWvjKplJmmvMq7R4XcGmkqNP',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'facetapi-EZWaCxOWhedI0cUvGDFTeNECA3eaUehM' => array(
          'module' => 'facetapi',
          'delta' => 'EZWaCxOWhedI0cUvGDFTeNECA3eaUehM',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'facetapi-nfMPqS2Nrkzo4693KsSw79EEoXE7aK31' => array(
          'module' => 'facetapi',
          'delta' => 'nfMPqS2Nrkzo4693KsSw79EEoXE7aK31',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'facetapi-2jJNzaGGAk51or515mhY4LIxVV2yhQ9K' => array(
          'module' => 'facetapi',
          'delta' => '2jJNzaGGAk51or515mhY4LIxVV2yhQ9K',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'facetapi-gIWEsGcCXOebHOnc62cCOpYzXEMwx8gd' => array(
          'module' => 'facetapi',
          'delta' => 'gIWEsGcCXOebHOnc62cCOpYzXEMwx8gd',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['context_searchapi'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_sidr';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~search' => '~search',
        '~search/*' => '~search/*',
        '~series' => '~series',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'featured',
          'weight' => '-13',
        ),
        'views-series_galleries-block_1' => array(
          'module' => 'views',
          'delta' => 'series_galleries-block_1',
          'region' => 'footer_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['context_sidr'] = $context;

  return $export;
}
