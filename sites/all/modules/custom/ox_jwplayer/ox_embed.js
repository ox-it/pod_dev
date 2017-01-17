(function ($) {
  Drupal.behaviors.oxJWPlayerEmbedLinks = {
    attach: function (context, settings) {

      $('div.ox-jwplayer-dialog-form', context).dialog({
        title: 'Copy embed code',
        width: '50%',
        autoOpen: false,
        modal: true,
      });

      // Display a simple popup with a message and the embed code.
      $('a.ox-jwplayer-embed-link', context).click(function () {
        var id = this.id;
        var $popup = $('div.ox-jwplayer-dialog-form').filter(function () {
          return $(this).attr('rel') == id;
        });

        // Reset the contents of the dialog's textarea to the saved
        // hidden value, in case it was changed inadvertently
        var code = $popup.find('input[name=embed_code_saved]').val();
        $popup.find('textarea').val(code);
        $popup.dialog('open');

        return false;
      });
    }
  }
}(jQuery));
