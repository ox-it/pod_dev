<?php
/**
 * @file
 * Views handler which formats an audio or video file as an embed link.
 *
 * This does much the same thing as the field formatter defined in
 * ox_jwplayer_formatters.inc, but it can be used in different Views
 * configurations.  In particular, this handler is more useful when files are
 * accessed through a Views relationship, or as the base table of the view,
 * rather than through the file field.
 *
 * @ingroup ox_jwplayer_embed_link
 */
class ox_jwplayer_embed_handler extends views_handler_field_entity {
  /**
   * Define the "prompt" option.  This definition allows the option value to be
   * exported by Features, etc.
   */
  function option_definition() {
    $options = parent::option_definition();
    $options['ox_jwplayer_message'] = array(
      'default' => 'Copy and paste this HTML snippet to embed audio/video on your site.');
    return $options;
  }

  /**
   * Define a form element for the message-string option.
   */
  function options_form(&$form, &$form_state) {
    $form['ox_jwplayer_message'] = array(
      '#title' => t('Message'),
      '#description' => t('Message to display in the Javascript popup window.  You can use Views replacement tokens (see below under "Rewrite this field" for a list).'),
      '#type' => 'textfield',
      '#default_value' => $this->options['ox_jwplayer_message'],
    );
    parent::options_form($form, $form_state);
  }

  function render($values) {
    if ($file = $this->get_value($values)) {
      // Ignore non-audio, non-video files, and files with embedding disabled.
      if (!_ox_jwplayer_embedding_enabled($file)) {
        return null;
      }

      // Include the JS file for displaying the popup
      drupal_add_js(drupal_get_path('module', 'ox_jwplayer') . '/ox_embed.js');
      drupal_add_library('system', 'ui.dialog');

      // Generate a unique HTML ID for this element.
      $id = drupal_html_id("ox-jwplayer-link-{$file->fid}");

      // Replace Views tokens and strip tags from the message string.
      $tokens = $this->get_render_tokens(null);
      $message = strip_tags(strtr($this->options['ox_jwplayer_message'], $tokens));

      // Generate the embed code and URL.
      $embed_code = theme('ox_jwplayer_embed_code', array(
                      'file' => $file,
                    ));
      $episode = _ox_jwplayer_guess_episode($file);
      $embed_url = _ox_jwplayer_embed_url($file, $episode);

      // Set options which will allow Views to generate the link.  Creating the
      // link indirectly like this, instead of generating HTML directly, allows
      // the user of the view to use "rewriting"/"advanced rendering" to
      // customize the link text.
      $this->options['alter']['make_link'] = true;
      // Link to the embed page.  This should not normally fire if Javascript is
      // enabled and working properly, but it seems like the closest thing to
      // degrading gracefully (?)
      $this->options['alter']['path'] = $embed_url;
      $this->options['alter']['link_class'] = 'ox-jwplayer-embed-link';
      $this->options['alter']['link_attributes'] = array('id' => $id);

      // Add the popup dialog
      _ox_jwplayer_add_popup_dialog($id, $message, $embed_code);

      return "Embed link";
    }
  }
}
