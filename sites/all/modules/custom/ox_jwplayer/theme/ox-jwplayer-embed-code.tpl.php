<?php
/**
 * @file Template for JWPlayer embed codes.
 *
 * Available variables:
 * @param object $file
 *     The audio or video file
 * @param object $episode
 *     The associated episode (a Drupal node)
 * @param string $url
 *    The full URL of the page to be embedded in an IFrame
 * @param string $width
 *    The default width of the IFrame
 * @param string $height
 *    The default height of the IFrame
 */
?>
<div class="myWrapper"><iframe width="<?php print $width; ?>" height="<?php print $height; ?>" src="<?php print $url; ?>" frameborder="0" allowfullscreen></iframe></div>
