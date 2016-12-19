(function ($) {

  /**
   * The recommended way for producing HTML markup through JavaScript is to write
   * theming functions. These are similiar to the theming functions that you might
   * know from 'phptemplate' (the default PHP templating engine used by most
   * Drupal themes including Omega). JavaScript theme functions accept arguments
   * and can be overriden by sub-themes.
   *
   * In most cases, there is no good reason to NOT wrap your markup producing
   * JavaScript in a theme function.
   */
  Drupal.theme.prototype.podOmegaExampleButton = function (path, title) {
    // Create an anchor element with jQuery.
    return $('<a href="' + path + '" title="' + title + '">' + title + '</a>');
  };

  /**
   * Behaviors are Drupal's way of applying JavaScript to a page. In short, the
   * advantage of Behaviors over a simple 'document.ready()' lies in how it
   * interacts with content loaded through Ajax. Opposed to the
   * 'document.ready()' event which is only fired once when the page is
   * initially loaded, behaviors get re-executed whenever something is added to
   * the page through Ajax.
   *
   * You can attach as many behaviors as you wish. In fact, instead of overloading
   * a single behavior with multiple, completely unrelated tasks you should create
   * a separate behavior for every separate task.
   *
   * In most cases, there is no good reason to NOT wrap your JavaScript code in a
   * behavior.
   *
   * @param context
   *   The context for which the behavior is being executed. This is either the
   *   full page or a piece of HTML that was just added through Ajax.
   * @param settings
   *   An array of settings (added through drupal_add_js()). Instead of accessing
   *   Drupal.settings directly you should use this because of potential
   *   modifications made by the Ajax callback that also produced 'context'.
   */
  Drupal.behaviors.podOmegaExampleBehavior = {
    attach: function (context, settings) {
      // By using the 'context' variable we make sure that our code only runs on
      // the relevant HTML. Furthermore, by using jQuery.once() we make sure that
      // we don't run the same piece of code for an HTML snippet that we already
      // processed previously. By using .once('foo') all processed elements will
      // get tagged with a 'foo-processed' class, causing all future invocations
      // of this behavior to ignore them.
      $('.some-selector', context).once('foo', function () {
        // Now, we are invoking the previously declared theme function using two
        // settings as arguments.
        var $anchor = Drupal.theme('podOmegaExampleButton', settings.myExampleLinkPath, settings.myExampleLinkTitle);

        // The anchor is then appended to the current element.
        $anchor.appendTo(this);
      });
    }
  };




  // Drupal.behaviors.podOmegaToggleGridList = {
  //   attach: function (context, settings) {

  //     $('.view-series-gallery .view-content').addClass('media-grid');

  //     $('#buttonSwitch').click(function(){

  //        var $button = $('#buttonSwitch');
         
  //        $button.toggleClass('gridview');

  //        if ($button.hasClass('gridview')) {
  //           $button.text('List');
  //           $('.view-series-gallery .view-content').addClass('media-grid');
  //           $('.view-series-gallery .view-content').removeClass('media-list');
  //        } else {
  //           $button.text('Grid');
  //           $('.view-series-gallery .view-content').removeClass('media-grid');
  //           $('.view-series-gallery .view-content').addClass('media-list');
  //        }

  //      });

  //   }
  // };



Drupal.behaviors.podOmegaActivateSidr = {
    attach: function (context, settings) {

      // Series menu on <front> and on Episode page ("View all keywords")
      $('#sidr-menu-series').sidr({
        name: 'sidr-menu-series-button',
        displace:false,
        side: 'right',
        source: '.view-series-gallery', 
      });
  
      $('#sidr-id-sidr-close-menu').click(function(){ // when 'sidr-id-sidr-close-menu' is clicked…
          $.sidr('close', 'sidr-menu-series-button');  // close the div with the ID of "sidr-menu"
      });


      // Keyword menu on <front>
      $('#sidr-menu-keywords').sidr({
        name: 'sidr-menu-keywords-button',
        displace:false,
        source: '#block-views-d1fd9fb73e9d432f430dcbd5aaf5eaf1',
      });

      $('#sidr-id-sidr-close-keyword-menu').click(function(){ // when 'sidr-id-sidr-close-menu' is clicked…
          $.sidr('close', 'sidr-menu-keywords-button');  // close the div with the ID of "sidr-menu"
      });


      // Facet menu on Episode page
      $('#sidr-menu-episode').sidr({
        name: 'sidr-menu-episode-button',
        displace:false,
        source: '#sidebar-first',
      });

      $('#sidr-id-sidr-close-episode-menu').click(function(){ // when 'sidr-id-sidr-close-menu' is clicked…
          $.sidr('close', 'sidr-menu-episode-button');  // close the div with the ID of "sidr-menu"
      });

  }
};



// Uses the HideSeek jQuery add-on:
// https://github.com/vdw/HideSeek
Drupal.behaviors.podOmegaHideSeek = {
    attach: function (context, settings) {

        // $('#hideseek-search-page').hideseek({
        //   list: '.view-content',      
        //   nodata:         '',
        //   attribute:      'text',
        //   highlight:      true,
        //   ignore:         '',
        //   navigation:     false,
        //   ignore_accents: false
        // });



        // Series Sidr pod-out search box
        $('#sidr-id-hideseek-search').hideseek({
          list: '.sidr-class-view-content',      
          nodata:         '',
          attribute:      'text',
          highlight:      true,
          ignore:         '',
          navigation:     false,
          ignore_accents: false
        });


        // Keywords Sidr pop-out search box
        $('#sidr-id-hideseek-keywords-two').hideseek({
          list: '.sidr-class-item-list ul',      
          nodata:         '',
          attribute:      'text',
          highlight:      true,
          ignore:         '',
          navigation:     false,
          ignore_accents: false,
          //hidden_mode: true
        });


        // Sidebar search boxes for Episode page view (both static and Sidr pop-out)

        
        // Keywords search box (Sidr pop-out sidebar) 
        // Have to add a class first, as theseclasses automatically appended with sidr-class  
        $('.sidr-class-facetapi-facet-field-keywords').addClass('facetapi-facet-field-keywords')
        $('#sidr-id-hideseek-keywords').hideseek({
          list: '.facetapi-facet-field-keywords',      
          nodata:         'No keywords found',
          attribute:      'text',
          highlight:      true,
          ignore:         '',
          navigation:     false,
          ignore_accents: false,
          hidden_mode: true
        });

        
        // Keywords search box (static sidebar)
        $('#hideseek-keywords').hideseek({
          list: '.facetapi-facet-field-keywords',      
          nodata:         'No keywords found',
          attribute:      'text',
          highlight:      true,
          ignore:         '',
          navigation:     false,
          ignore_accents: false,
          hidden_mode: true
        });

        // Unit search box (Sidr pop-out sidebar)
        // Have to add a class first, as theseclasses automatically appended with sidr-class 
        $('.sidr-class-facetapi-facet-field-seriesfield-unit').addClass('facetapi-facet-field-seriesfield-unit')
        $('#sidr-id-hideseek-units').hideseek({
          list: '.facetapi-facet-field-seriesfield-unit',      
          nodata:         '',
          attribute:      'text',
          highlight:      true,
          ignore:         '',
          navigation:     false,
          ignore_accents: false
        });


        // Unit search box (static sidebar)
        $('#hideseek-units').hideseek({
          list: '.facetapi-facet-field-seriesfield-unit',      
          nodata:         '',
          attribute:      'text',
          highlight:      true,
          ignore:         '',
          navigation:     false,
          ignore_accents: false
        });

        // Unit Gallery search box (static sidebar)
        $('#hideseek-unit-page').hideseek({
          list: '.view-unit-gallery .view-content',      
          nodata:         'No corresponding department or college',
          attribute:      'text',
          highlight:      true,
          ignore:         '',
          navigation:     false,
          ignore_accents: false
        });



    }

};

Drupal.behaviors.personAssociated = {
  attach: function(context) {

    $("#block-fieldblock-8d83dd80917f5b47c5567abe2f2782e2 .view-eva-associated-terms h2").click(function () {

      $("#block-fieldblock-8d83dd80917f5b47c5567abe2f2782e2 .view-eva-associated-terms .view-content").slideToggle("slow");
      $("#block-fieldblock-8d83dd80917f5b47c5567abe2f2782e2 .view-eva-associated-terms h2").toggleClass('collapsed');
      });

    }
};

Drupal.behaviors.unitAssociated = {
  attach: function(context) {

    $("#block-fieldblock-8c2171cdad0585deed12a3f528f962b4 .view-eva-associated-terms h2").click(function () {

      $("#block-fieldblock-8c2171cdad0585deed12a3f528f962b4 .view-eva-associated-terms .view-content").slideToggle("slow");
      $("#block-fieldblock-8c2171cdad0585deed12a3f528f962b4 .view-eva-associated-terms h2").toggleClass('collapsed');
      });

    }
};


Drupal.behaviors.headerScroll = {
  attach: function(context) {

      $(window).on("scroll touchmove", function () {
        $('.header-middle-outer').toggleClass('header_scroll', $(document).scrollTop() > 0);
        $('.header-middle-bottom-outer').toggleClass('header_scroll', $(document).scrollTop() > 0);
      });

  }
};




})(jQuery);