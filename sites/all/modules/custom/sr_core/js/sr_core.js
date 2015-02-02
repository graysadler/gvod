(function ($) {
  
  Drupal.behaviors.SRCore = {
      attach : function(context, settings) {
        $('.register-email:not(.processed)').each(function(){
          $(this).addClass('processed');
          $(this).click(function(e){
            e.preventDefault();
          
            $("#block-formblock-user-register:first").dialog({
              // title:'Add streams to your Library or create a new Riot',
              modal : true,
              draggable : false,
              resizable : false,
              width : 350,
              open : function() {
                $('.ui-widget-overlay').live('click', function() {
                  $("#block-formblock-user-register:first").dialog('close');
                });
              }
            });
          });
        });        
      }
  }
  
  $.fn.srUserLogin = function (path) {
    // update user menu
    if('multistream' in Drupal.settings) {
      $.srUserLoginMultistream();
    }
  }    
  
})(jQuery);
