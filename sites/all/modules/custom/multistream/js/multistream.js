(function ($) {

  Drupal.behaviors.MultiStreamManager = {
    attach : function(context, settings) {
      $('#manage-open:not(.processed)', context).click(function(e) {
        $(this).addClass('processed');

        $('#manage-selection').toggle();
      });
      
      $('#manage-selection article:not(.processed)', context).click(function() {
        $(this).addClass('processed');
        var nid = $(this).attr('data-nid');
        $('#manage-form').load('/multistream/ajax/manage/'+nid, function(response, status, xhr) {
          Drupal.attachBehaviors();
        });
      });
    }
  }
  
})(jQuery);