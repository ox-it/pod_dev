<?php
/**
 * @file
 * Template for JWPlayer embed links.
 *
 * Available variables:
 * @param object $file
 *     The audio or video file to be embedded.
 * @param object $episode
 *     The episode node associated with the file.
 * @param string $link_text
 *     String to display as the link.
 * @param string $url
 *     URL to use as the link destination.
 * @param string $message
 *     Text to display as a popup prompt when link is clicked.
 */
?>
<a class="ox-jwplayer-embed-link" href="<?php print $url; ?>"><?php print $link_text; ?></a>
