<?php
/**
 * @file
 * ox_podcasts_feeds.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function ox_podcasts_feeds_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'contributor_importer';
  $feeds_importer->config = array(
    'name' => 'Contributor importer',
    'description' => 'Import contributor information from Mediapub XML feed',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => 0,
        'use_pubsubhubbub' => 0,
        'designated_hub' => '',
        'request_timeout' => '600',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:1' => 'name',
          'xpathparser:15' => 'guid',
          'xpathparser:2' => 'description',
          'xpathparser:12' => 'links/a/text()',
          'xpathparser:13' => 'links/a/@href',
          'xpathparser:17' => 'units/unit',
          'xpathparser:18' => 'links/a',
          'xpathparser:19' => 'links/a/@href',
          'xpathparser:20' => 'quote',
          'xpathparser:21' => 'featured',
          'xpathparser:22' => 'image',
        ),
        'rawXML' => array(
          'xpathparser:1' => 0,
          'xpathparser:15' => 0,
          'xpathparser:2' => 0,
          'xpathparser:12' => 0,
          'xpathparser:13' => 0,
          'xpathparser:17' => 0,
          'xpathparser:18' => 0,
          'xpathparser:19' => 0,
          'xpathparser:20' => 0,
          'xpathparser:21' => 0,
          'xpathparser:22' => 0,
        ),
        'context' => '//term',
        'exp' => array(
          'errors' => 1,
          'debug' => array(
            'context' => 0,
            'xpathparser:1' => 0,
            'xpathparser:15' => 0,
            'xpathparser:2' => 0,
            'xpathparser:12' => 0,
            'xpathparser:13' => 0,
            'xpathparser:17' => 0,
            'xpathparser:18' => 0,
            'xpathparser:19' => 0,
            'xpathparser:20' => 0,
            'xpathparser:21' => 0,
            'xpathparser:22' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:1',
            'target' => 'name',
            'unique' => 0,
          ),
          1 => array(
            'source' => 'xpathparser:15',
            'target' => 'guid',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'xpathparser:2',
            'target' => 'description',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:12',
            'target' => 'field_relevant_links:title',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:13',
            'target' => 'field_relevant_links:url',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:17',
            'target' => 'field_unit',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          6 => array(
            'source' => 'xpathparser:18',
            'target' => 'field_relevant_links:title',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'xpathparser:19',
            'target' => 'field_relevant_links:url',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'xpathparser:20',
            'target' => 'field_quote',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'xpathparser:21',
            'target' => 'field_featured',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'xpathparser:22',
            'target' => 'field_people_image',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'bundle' => 'people',
        'vocabulary' => 0,
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['contributor_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'episode_importer';
  $feeds_importer->config = array(
    'name' => 'Episode Importer',
    'description' => 'Imports episode data from MediaPub as nodes',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'title',
          'xpathparser:1' => 'guid',
          'xpathparser:2' => 'published',
          'xpathparser:4' => 'status',
          'xpathparser:5' => 'short-description',
          'xpathparser:6' => 'description',
          'xpathparser:7' => 'licence',
          'xpathparser:9' => 'order',
          'xpathparser:12' => 'series',
          'xpathparser:13' => 'people/person',
          'xpathparser:15' => 'keywords/category',
          'xpathparser:17' => 'author',
          'xpathparser:22' => 'files/file/@url',
          'xpathparser:23' => 'nid',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:4' => 0,
          'xpathparser:5' => 0,
          'xpathparser:6' => 0,
          'xpathparser:7' => 0,
          'xpathparser:9' => 0,
          'xpathparser:12' => 0,
          'xpathparser:13' => 0,
          'xpathparser:15' => 0,
          'xpathparser:17' => 0,
          'xpathparser:22' => 0,
          'xpathparser:23' => 0,
        ),
        'context' => '//node',
        'exp' => array(
          'errors' => 1,
          'debug' => array(
            'context' => 0,
            'xpathparser:0' => 0,
            'xpathparser:1' => 0,
            'xpathparser:2' => 0,
            'xpathparser:4' => 0,
            'xpathparser:5' => 0,
            'xpathparser:6' => 0,
            'xpathparser:7' => 0,
            'xpathparser:9' => 0,
            'xpathparser:12' => 0,
            'xpathparser:13' => 0,
            'xpathparser:15' => 0,
            'xpathparser:17' => 0,
            'xpathparser:22' => 0,
            'xpathparser:23' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'title',
            'unique' => 0,
          ),
          1 => array(
            'source' => 'xpathparser:1',
            'target' => 'guid',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'xpathparser:2',
            'target' => 'created',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:4',
            'target' => 'status',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:5',
            'target' => 'body',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_episode_description_long',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:7',
            'target' => 'field_licence',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'xpathparser:9',
            'target' => 'field_episode_order',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'xpathparser:12',
            'target' => 'field_series',
            'term_search' => '2',
            'autocreate' => 1,
          ),
          9 => array(
            'source' => 'xpathparser:13',
            'target' => 'field_people',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          10 => array(
            'source' => 'xpathparser:15',
            'target' => 'field_keywords',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          11 => array(
            'source' => 'xpathparser:17',
            'target' => 'field_episode_editor',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'xpathparser:22',
            'target' => 'field_media_files:MediaFeedsRemoteProvider',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'xpathparser:23',
            'target' => 'field_mediapub_nid',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'authorize' => 0,
        'skip_hash_check' => 0,
        'bundle' => 'episode',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['episode_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'file_audio_importer';
  $feeds_importer->config = array(
    'name' => 'File Importer - Audio',
    'description' => 'Imports audio media file data from MediaPub as files',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:3' => 'url',
          'xpathparser:0' => 'url',
          'xpathparser:1' => 'name',
          'xpathparser:2' => 'durationhuman',
          'xpathparser:4' => 'fid',
        ),
        'rawXML' => array(
          'xpathparser:3' => 0,
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:4' => 0,
        ),
        'context' => '/files/file[type="Audio"]',
        'exp' => array(
          'errors' => 0,
          'debug' => array(
            'context' => 0,
            'xpathparser:3' => 0,
            'xpathparser:0' => 0,
            'xpathparser:1' => 0,
            'xpathparser:2' => 0,
            'xpathparser:4' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsFileProcessor',
      'config' => array(
        'author' => '1',
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:3',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'xpathparser:0',
            'target' => 'uri',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'xpathparser:1',
            'target' => 'filename',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_duration',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_mediapub_fid',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'audio',
        'file_type' => 'audio',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['file_audio_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'file_document_importer';
  $feeds_importer->config = array(
    'name' => 'File Importer - Document',
    'description' => 'Imports document media file data from MediaPub as files',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'url',
          'xpathparser:1' => 'name',
          'xpathparser:2' => 'document-type',
          'xpathparser:3' => 'visibility',
          'xpathparser:4' => 'url',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
        ),
        'context' => '/files/file[type="Document"]',
        'exp' => array(
          'errors' => 0,
          'debug' => array(
            'context' => 0,
            'xpathparser:0' => 0,
            'xpathparser:1' => 0,
            'xpathparser:2' => 0,
            'xpathparser:3' => 0,
            'xpathparser:4' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsFileProcessor',
      'config' => array(
        'author' => '1',
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:4',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'xpathparser:0',
            'target' => 'uri',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'xpathparser:1',
            'target' => 'filename',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_document_type',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_visible_in_feeds',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'document',
        'file_type' => 'document',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['file_document_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'file_video_importer';
  $feeds_importer->config = array(
    'name' => 'File Importer - Video',
    'description' => 'Imports video media file data from MediaPub as files',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:3' => 'url',
          'xpathparser:0' => 'url',
          'xpathparser:1' => 'name',
          'xpathparser:2' => 'durationhuman',
          'xpathparser:4' => 'fid',
        ),
        'rawXML' => array(
          'xpathparser:3' => 0,
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:4' => 0,
        ),
        'context' => '/files/file[type="Video"]',
        'exp' => array(
          'errors' => 0,
          'debug' => array(
            'context' => 0,
            'xpathparser:3' => 0,
            'xpathparser:0' => 0,
            'xpathparser:1' => 0,
            'xpathparser:2' => 0,
            'xpathparser:4' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsFileProcessor',
      'config' => array(
        'author' => '1',
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:3',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'xpathparser:0',
            'target' => 'uri',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'xpathparser:1',
            'target' => 'filename',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_duration',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_mediapub_fid',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'video',
        'file_type' => 'video',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['file_video_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'series_importer';
  $feeds_importer->config = array(
    'name' => 'Series Importer',
    'description' => 'Imports series data from MediaPub as taxonomy terms',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => 0,
        'use_pubsubhubbub' => 0,
        'designated_hub' => '',
        'request_timeout' => '600',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'guid',
          'xpathparser:1' => 'title',
          'xpathparser:2' => 'description',
          'xpathparser:5' => 'units/unit',
          'xpathparser:8' => 'nid',
          'xpathparser:9' => 'itunesu-audio',
          'xpathparser:10' => 'itunesu-document',
          'xpathparser:11' => 'itunesu-video',
          'xpathparser:12' => 'links/a/text()',
          'xpathparser:13' => 'links/a/@href',
          'xpathparser:14' => 'album-cover',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:5' => 0,
          'xpathparser:8' => 0,
          'xpathparser:9' => 0,
          'xpathparser:10' => 0,
          'xpathparser:11' => 0,
          'xpathparser:12' => 0,
          'xpathparser:13' => 0,
          'xpathparser:14' => 0,
        ),
        'context' => '//node',
        'exp' => array(
          'errors' => 1,
          'debug' => array(
            'context' => 0,
            'xpathparser:0' => 0,
            'xpathparser:1' => 0,
            'xpathparser:2' => 0,
            'xpathparser:5' => 0,
            'xpathparser:8' => 0,
            'xpathparser:9' => 0,
            'xpathparser:10' => 0,
            'xpathparser:11' => 0,
            'xpathparser:12' => 0,
            'xpathparser:13' => 0,
            'xpathparser:14' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'xpathparser:1',
            'target' => 'name',
            'unique' => 0,
          ),
          2 => array(
            'source' => 'xpathparser:2',
            'target' => 'description',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_unit',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          4 => array(
            'source' => 'xpathparser:8',
            'target' => 'field_mediapub_nid',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:9',
            'target' => 'field_itunes_u_audio_code',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:10',
            'target' => 'field_itunes_u_document_code',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'xpathparser:11',
            'target' => 'field_itunes_u_video_code',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'xpathparser:12',
            'target' => 'field_relevant_links:title',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'xpathparser:13',
            'target' => 'field_relevant_links:url',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'xpathparser:14',
            'target' => 'field_series_album_cover',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'bundle' => 'series',
        'vocabulary' => 0,
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['series_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'unit_importer';
  $feeds_importer->config = array(
    'name' => 'Unit importer',
    'description' => 'Import colleges and departments from Mediapub XML feed',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => 0,
        'use_pubsubhubbub' => 0,
        'designated_hub' => '',
        'request_timeout' => '600',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:1' => 'name',
          'xpathparser:15' => 'guid',
          'xpathparser:2' => 'description',
          'xpathparser:12' => 'links/a/text()',
          'xpathparser:13' => 'links/a/@href',
          'xpathparser:16' => 'parent',
          'xpathparser:18' => 'weight',
          'xpathparser:21' => 'image',
        ),
        'rawXML' => array(
          'xpathparser:1' => 0,
          'xpathparser:15' => 0,
          'xpathparser:2' => 0,
          'xpathparser:12' => 0,
          'xpathparser:13' => 0,
          'xpathparser:16' => 0,
          'xpathparser:18' => 0,
          'xpathparser:21' => 0,
        ),
        'context' => '//term',
        'exp' => array(
          'errors' => 1,
          'debug' => array(
            'context' => 0,
            'xpathparser:1' => 0,
            'xpathparser:15' => 0,
            'xpathparser:2' => 0,
            'xpathparser:12' => 0,
            'xpathparser:13' => 0,
            'xpathparser:16' => 0,
            'xpathparser:18' => 0,
            'xpathparser:21' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:1',
            'target' => 'name',
            'unique' => 0,
          ),
          1 => array(
            'source' => 'xpathparser:15',
            'target' => 'guid',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'xpathparser:2',
            'target' => 'description',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:12',
            'target' => 'field_relevant_links:title',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:13',
            'target' => 'field_relevant_links:url',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:16',
            'target' => 'parentguid',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:18',
            'target' => 'weight',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'xpathparser:21',
            'target' => 'field_unit_image',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'bundle' => 'units',
        'vocabulary' => 0,
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['unit_importer'] = $feeds_importer;

  return $export;
}
