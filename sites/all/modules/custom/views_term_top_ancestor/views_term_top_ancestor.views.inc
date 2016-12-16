<?php

/**
 * Implements hook_views_data_alter().
 *
 * Define a custom Views handler to display the highest-level ancestor of a
 * taxonomy term.
 */
function views_term_top_ancestor_views_data_alter(&$data) {
  $data['taxonomy_term_data']['views_term_top_ancestor'] = array(
    'title' => t('Top-level ancestor'),
    'help' => t('The name of the term\'s ancestor with lowest depth.'),
    'field' => array(
      'handler' => 'views_term_top_ancestor_handler',
    ),
  );
}
