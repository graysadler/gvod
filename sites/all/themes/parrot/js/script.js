(function($) {
    $(document).ready(function() {
        $("#block-block-1 .login-link .register,.rblock").live("mouseenter", (function(e) {
            $("#block-block-1 .login-link .login").removeClass("active");
            $(this).addClass("active");
            $("#block-block-1 .login-block .lblock").hide();
            $("#block-block-1 .login-block .otherblock").hide();
       
            $("#block-block-1 .login-block .rblock").show();
           
          
        }));
       
       
        
        $("#block-block-1 .login-link .register,.rblock").live("mouseleave", (function() {
           
            $("#block-block-1 .login-link .login").removeClass("active");
            $(this).addClass("active");
            $("#block-block-1 .login-block .lblock").hide();
            $("#block-block-1 .login-block .otherblock").hide();
            $("#block-block-1 .login-block .rblock").hide();
        }));

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
  
    });


})(jQuery);

