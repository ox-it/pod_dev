<?php
/**
 * @file
 * Views field handler providing top-level term ancestors.
 *
 * This can be used in views of hierarchical taxonomy vocabularies to group
 * terms together by top-level classification, irrespective of their level in
 * the hierarchy.
 *
 * @todo It would be nice to have this as a relationship, but tricky:
 *   without recursive SQL queries, we have to join together a long list of
 *   taxonomy_term_hierarchy and taxonomy_term_data tables (like
 *   views_handler_argument_term_node_tid_depth does) and then use a CASE
 *   statement.  Bleh.
 */
class views_term_top_ancestor_handler extends views_handler_field_entity {
  /**
   * Define "link to taxonomy" option, to allow exporting, etc.
   */
  function option_definition() {
    $options = parent::option_definition();
    $options['link_to_taxonomy'] = array('default' => TRUE, 'bool' => TRUE);
    return $options;
  }

  /**
   * Define form element for "link to taxonomy" option.
   */
  function options_form(&$form, &$form_state) {
    $form['link_to_taxonomy'] = array(
      '#title' => t('Link this field to its taxonomy term page'),
      '#description' => t("Enable to override this field's links."),
      '#type' => 'checkbox',
      '#default_value' => !empty($this->options['link_to_taxonomy']),
    );
    parent::options_form($form, $form_state);
  }

  /**
   * Render the name of the top ancestor, possibly as a link.
   */
  function render($values) {
    $tid = $this->get_value($values, 'tid');
    $toplevel = _views_term_top_ancestor($tid);
    if (is_object($toplevel)) {
      if ($this->options['link_to_taxonomy']) {
        // The following three lines are copied from render_link in
        // views_handler_field_taxonomy:
        $this->options['alter']['make_link'] = TRUE;
        $uri = entity_uri('taxonomy_term', $toplevel);
        $this->options['alter']['path'] = $uri['path'];
      }
      return check_plain($toplevel->name);
    }

    return '';
  }
}
