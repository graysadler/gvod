function LoadStreams() {
  loadPlayers();
}

  
function loadPlayers() {  
  var swf = getFlashMovie("riot-player");
  var obj = Drupal.settings.multistream;
  swf.loadPlayers(obj);   
}

function getFlashMovie(movieName) {
      var isIE = navigator.appName.indexOf("Microsoft") != -1;
      return (isIE) ? window[movieName] : document[movieName];
}

(function ($) {
  
  Drupal.behaviors.SRPlayer = {
      attach: function(context, settings) {
        $('div#riot-player-wrapper:not(.processed)').each(function() {
          $(this).addClass('processed');
          var flashvars = {};
          var params = {allowScriptAccess: "always", allowFullScreen: "true", allowNetworking: "all", wmode: "transparent"};
          var attributes = {};
          try {
            swfobject.embedSWF(Drupal.settings.multistream.playerSwf, "riot-player", '100%', '100%', "9.0.0", "expressInstall.swf", flashvars, params, attributes);
            $('#riot-player').show();
          } catch(e) {
            console.log(e);
          }
        });
      }
  }  
  

})(jQuery);