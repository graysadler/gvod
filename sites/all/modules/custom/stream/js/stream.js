(function ($) {

	Drupal.behaviors.StreamHover = {
		attach : function(context, settings) {
			$('.stream-wrapper', context).once('image-overlay-processed', function () {
				var $teaser = $(this);
				
				//$teaser.find('.image-overlay').click(function(){
					//$teaser.find('.add-to-player').toggle();
				//});
				
				$teaser.hover(
				  function() {$(this).addClass('hover');},
				  function() {$(this).removeClass('hover');}
				);
				
			});			
		}
	}
	
})(jQuery);
