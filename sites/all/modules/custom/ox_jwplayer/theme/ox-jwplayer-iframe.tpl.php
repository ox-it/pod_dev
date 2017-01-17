<!DOCTYPE html>
<?php
/**
 * @file
 * Theme wrapper for JWPlayers to be embedded in an IFrame on a third-party
 * site.  This effectively replaces Drupal's normal "html.tpl.php".
 *
 * Available variables:
 * @param $script_url
 *     Absolute URL of the `jwplayer.js' file, escaped for HTML.
 * @param $jwplayer_key_js
 *     JS code specifying the JWPlayer key
 * @param $element
 *     The theme content to be wrapped.
 */
 ?>
<html>
  <head>
    <script src="<?php print $script_url; ?>"></script>
    <?php if ($jwplayer_key_js): ?>
    <script><?php print $jwplayer_key_js; ?></script>
    <?php endif; ?>
  </head>

  <body>
    <?php print $element['#children']; ?>
  </body>
</html>
