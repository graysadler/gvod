(function ($) {

  Drupal.behaviors.MultiStreamManager = {
    attach : function(context, settings) {
      $('#manage-open:not(.processed)', context).click(function(e) {
        $(this).addClass('processed');

        $('#manage-selection').toggle();
      });
      
      $('#manage-selection article a:not(.processed)', context).click(function(e) {
        e.preventDefault();
        
        $('#manage-selection').hide();
        $(this).addClass('processed');
        
        var nid = $(this).closest('article.node').attr('data-nid');
        
        $('#manage-form').load('/multistream/ajax/manage/'+nid, function(response, status, xhr) {
          Drupal.attachBehaviors();
        });
      });
      
      $('.btn.connect').click(function(){
        $(this).closest('.form-wrapper').find('input').prop('disabled', function(idx, oldProp) {
          return !oldProp;
        });
      });
      
      $('.field-type-text-long .btn.connect').click(function(){
        $(this).closest('.form-wrapper').find('textarea').prop('disabled', function(idx, oldProp) {
          return !oldProp;
        });
      });
      
      $('.noclick input, .noclick textarea').attr('disabled', 'disabled');
      
      $('#manage-form-submit').mousedown(function(e){
        $('.noclick input, .noclick textarea').removeAttr('disabled');
      });
      
      $('#edit-field-website-und-0-url').attr('size', '12');
      
      $('#manage-selection:not(.processed)', context).mouseleave(function(){
        $(this).addClass('processed');
        $('#manage-open').trigger('click');
      });
      
      $('#browse-filter-button:not(.processed)', context).each(function(){
        $(this).addClass('processed');
        $(this).click(function(){          
          $('#browse-filter-options-wrapper').toggle();
        });        
      });
      
      $('#browse-filter-options .multistreams:not(.processed)', context).click(function(){
        $(this).addClass('processed');
        $('#browse-results-multistreams').show();
        $('#browse-results-streams').hide();    
        $('#browse-filter-button').trigger('click');
      });
      
      $('#browse-filter-options .streams:not(.processed)', context).click(function(){
        $(this).addClass('processed');
        $('#browse-results-multistreams').hide();
        $('#browse-results-streams').show();        
        $('#browse-filter-button').trigger('click');
      });
      
      $('.panel-actions li:not(.processed)').each(function(){
        $(this).addClass('processed');
        
        $(this).click(function(){
          if($(this).hasClass('nopopup')) {
            return;
          }
          if($(this).hasClass('active')) {
            $(this).removeClass('active');
            $('.panel-overlay').remove();
            $('.panel-actions-popup li').hide();
            
          } else {
            $(this).addClass('active');
            var index = $(this).index();
            $(this).closest('.quicktabs_main').prepend('<div class="panel-overlay"></div>');
            $('.panel-actions-wrapper').find('.panel-actions-popup li').hide();
            $(this).closest('.panel-actions-wrapper').find('.panel-actions-popup li:nth-child('+(index+1)+')').show();          

          }

        });
        
      });
      
      $('.panel-overlay').live('click', function(){
        $('.panel-actions li.active').click();
      });
      
      $('#favorites-empty:not(.processed)').each(function(){
        $(this).addClass('processed');
        $.ajax({
          url: '/multistream/ajax/favorites',
          context: document.body,
          //data: {'action':'copy_riot','r':id, 't':title},
            success: function(data, textStatus, jqXHR){
              var ajax = new Drupal.ajax({},{},{url:''});
              
              var response = data;
              var status = textStatus;
              if (typeof response == 'string') {
                response = $.parseJSON(response);
              }
              ajax.success(response, status);
            },
            error: function(x, s, e) {
              
            }
          });
      });
    }
  }
  
  
})(jQuery);