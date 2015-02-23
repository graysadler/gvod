(function ($) {
  
  Drupal.behaviors.SRCore = {
      attach : function(context, settings) {
        $('.register-email:not(.processed)').each(function(){
          $(this).addClass('processed');
          $(this).click(function(e){
            e.preventDefault();          
            $.srRegisterDialog();
          });
        });  
        
        $('ul.share-to a:not(.processed)').each(function(){
          $(this).addClass('processed');
            $(this).click(function(e){
              e.preventDefault();
              var url = e.currentTarget.href;
              var isPopup = $(this).find('span').hasClass('popup');
              if($(this).find('span').hasClass('twitter')) {
                isPopup = false;
              }
              if(isPopup == true) {
                window.open( url, "myWindow", "status = 1, height = 500, width = 500, resizable = 1" )
              } 
              if(isPopup == false) {
                
              }              
            });
        });
      }
  }
  
  $.srRegisterDialog = function() {
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
  }
  
  $.fn.srUserLogin = function (path) {
    // update user menu
    if('multistream' in Drupal.settings) {
      $.srUserLoginMultistream();
    }
  }    
  
})(jQuery);
