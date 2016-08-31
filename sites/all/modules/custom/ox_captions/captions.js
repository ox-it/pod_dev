(function ($) {
  Drupal.behaviors.Captions = {
    attach: function (context, settings) {
      // Code to be run on page load, and
      // on ajax load added here
      // 
          var playerInstance = jwplayer("jwplayer8116jwplayer-episode-node")

            playerInstance.setup({
                playlist: [{
                    file: "http://media.podcasts.ox.ac.uk//comlab/comsci/lovelace/2015-12-09-acm-lovelace-session-1-intro-wolf.mp4",  
                    tracks: [{ 
                        file: "/sites/default/files/2015-12-09-acm-lovelace-session-1-intro-wolf.srt",
                        // file: "http://media.podcasts.ox.ac.uk//comlab/comsci/lovelace/2015-12-09-acm-lovelace-session-1-intro-wolf.srt", 
                        label: "English",
                        kind: "captions",
                        "default": true,

                    }]
                }]
            });
      // 
      // 
      // 
      // 
    }
  };
} (jQuery));






