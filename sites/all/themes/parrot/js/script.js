(function ($) {
  jQuery.extend({
    handleError: function( s, xhr, status, e ) {
        // If a local callback was specified, fire it
        if ( s.error )
            s.error( xhr, status, e );
        // If we have some XML response text (e.g. from an AJAX call) then log it in the console
        else if(xhr.responseText)
            console.log(xhr.responseText);
    }
  });
  
  Drupal.behaviors.StreamRiotTheme = {
      attach : function(context, settings) {

      $("#block-block-1 .login-link .login,.lblock").live("mouseenter", (function() {
          $(this).addClass("active");
          $("#block-block-1 .login-link .register").removeClass("active");
          $("#block-block-1 .login-block .rblock").hide();
          $("#block-block-1 .login-block .otherblock").hide();
          $("#block-block-1 .login-block .lblock").show();
      }));
      $("#block-block-1 .login-link .login,.lblock").live("mouseleave", (function() {
          $(this).addClass("active");
          $("#block-block-1 .login-link .register").removeClass("active");
          $("#block-block-1 .login-block .rblock").hide();
          $("#block-block-1 .login-block .otherblock").hide();
          $("#block-block-1 .login-block .lblock").hide();
      }));


      $("#block-block-1 .other,.otherblock").live("mouseenter", (function() {
          $("#block-block-1 .login-block .rblock").hide();
          $("#block-block-1 .login-block .lblock").hide();
          $("#block-block-1 .login-block .otherblock").show();
      }));
      $("#block-block-1 .other,.otherblock").live("mouseleave", (function() {
          $("#block-block-1 .login-block .rblock").hide();
          $("#block-block-1 .login-block .lblock").hide();
          $("#block-block-1 .login-block .otherblock").hide();
      }));


      $(".contact-form").addClass("test2");

      $(".tags .tag-content").hide();
      $(".tags").live("click", function() {
          // console.log($(this).parent());
          $(this).parent().find(".tag-content").slideToggle("fast");
          $(this).find('.field-items').slideToggle('fast');
      });
      // $(".login-blocks #user-login-form input[name=name]").before("<label class='log-email'>Email:</label>");
      // $(".login-blocks #user-register-form .username").before("<label class='log-email'>Email:</label>");
      $(".login-blocks #user-register-form .oneall_social_login > label,.login-blocks #user-login-form .oneall_social_login > label").hide();
      $(".login-blocks #user-register-form,.login-blocks #user-login-form").before("<div class='log-email'><strong>Join Us FREE!</strong> Sign up using social media or email:</div>");

//====================================================//
      var active = $("#quickset-help_center").find("a.active");
      if (active) {
          $(active).parents('.ui-accordion-content').prev('h3').trigger('click');
      }
//====================================================//




      var deviceAgent = navigator.userAgent.toLowerCase();

      var agentID = deviceAgent.match(/(ipad)/);

      if (agentID) {
          // mobile code here
          jQuery("body").addClass("ipad-design");

      }

      $('.home-video-inner .icon-video-text').click(function(e){
        e.preventDefault();
        var top = $('.join-us')[0].offsetTop; //Getting Y of target element
        $('html, body').animate({
          scrollTop: top
        }, 1000);
        //window.scrollTo(0, top); 
      });
      
      $('.quicktabs-wrapper .handle', context).click(function(e){
        $(this).siblings('.quicktabs_main').toggle();
        $(this).toggleClass('closed');
        $(this).closest('.quicktabs-wrapper').toggleClass('docked');
      });
      
      $('#quicktabs-player_menu ul.quicktabs-style-sky li').hover(
        function() {$(this).addClass('hover');},
        function() {$(this).removeClass('hover');}
      );
      
      $('#quicktabs-player_menu ul.quicktabs-style-sky li', context).mouseup(function(){
        if($('#quicktabs-player_menu').hasClass('docked')) {
          //$('#quicktabs-player_menu').removeClass('docked');
          $('#quicktabs-player_menu .handle').click();
          $(this).find('a').trigger('click');
        }
      });        

      $('#manage-form .field-type-image .field-icon-wrapper').click(function() {
         $(this).siblings('.image-widget').find('.upload').trigger('click');
      });

      $('#player-more-wrapper .button:not(.processed)').each(function(){
        $(this).addClass('processed');
        var parent = $(this).closest('#player-more-wrapper');
        
        $(this).click(function(e){
          $(this).siblings('.more-actions').toggle();
        });
        $(this).siblings('.more-actions:first').mouseleave(function(){
          $(this).hide();
          //$('.panel-actions-popup').attr('style','');
        });
        $(this).siblings('.more-actions').find('li').click(function(){
          $(this).closest('.more-actions').hide();
          //$('.panel-actions-popup').attr('style','');
        });
        
        $(parent).find('.new').click(function(){
          $('.panel-actions .new').trigger('click');
          $('.panel-actions-popup').css({top: 'auto', bottom: '0'});
        });
        $(parent).find('.open').click(function(){
          $('#quicktabs-player_menu a.favorites').trigger('click');
        });
        $(parent).find('.save').click(function(){
          $('.panel-actions .fav:visible').trigger('click');
          
          $('.panel-actions .save:visible').trigger('click');          
        });
        
      });
    }
  }
  
})(jQuery);
