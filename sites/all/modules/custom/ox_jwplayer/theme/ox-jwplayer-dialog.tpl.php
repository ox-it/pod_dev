<?php
/**
 * Theme template for the popup dialog used to allow copying embed codes.
 *
 * Variables available:
 *
 * - $rel: HTML ID of the associated link, to placed as a rel="..." element on
 *   the outermost <div> so that it can be located using Javascript
 *
 * - $textarea_id: An HTML ID for the textarea
 *
 * - $message: Text to display at the top of the dialog.
 *
 * - $embed_code: The HTML embed code to be copied.  This will need to be
 *   escaped using check_plain() before output.
 */
?>
<div class="ox-jwplayer-dialog-form" rel="<?php print $rel; ?>">
  <form method="GET">
    <div><?php print $message; ?>
      <div class="form-item form-type-textarea form-item-embed-code">
        <label for="<?php print $textarea_id; ?>">Embed code:</label>
        <div class="form-textarea-wrapper resizable resizable-textarea">
          <textarea id="<?php print $textarea_id; ?>" name="embed_code" cols="60" rows="5"><?php print $embed_code; ?></textarea>
        </div>
      </div>
      <input type="hidden" name="embed_code_saved" value="<?php print $embed_code; ?>">
    </div>
  </form>
</div>
