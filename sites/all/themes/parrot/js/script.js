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

        $(".panels-flexible-7 .tags .tag-content").hide();
        $(".panels-flexible-7 .tags").live("click", function() {
            // console.log($(this).parent());
            $(this).parent().find(".tag-content").slideToggle("fast");
        });
        // $(".login-blocks #user-login-form input[name=name]").before("<label class='log-email'>Email:</label>");
        // $(".login-blocks #user-register-form .username").before("<label class='log-email'>Email:</label>");
        $(".login-blocks #user-register-form .oneall_social_login > label,.login-blocks #user-login-form .oneall_social_login > label").hide();
        $(".login-blocks #user-register-form,.login-blocks #user-login-form").before("<div class='log-email'><strong>Join Us FREE!</strong> Sign up using social media or email:</div>");

        $('.panels-flexible-region-7-sidebar_first-inside .social-share,.panels-flexible-region-7-sidebar_first-inside .view-header,.panels-flexible-region-7-sidebar_first-inside .item-list,.panels-flexible-region-7-sidebar_first-inside .watch-video').wrapAll('<div class="wrap">');
        jQuery('.panels-flexible-region-7-sidebar_first-inside .wrap').scrollbar();
        
        jQuery('.panels-flexible-region-12-sidebar_first .streamriots-about,.panels-flexible-region-12-sidebar_first .social-share,.panels-flexible-region-12-sidebar_first .view-header,.panels-flexible-region-12-sidebar_first .item-list,.panels-flexible-region-8-sidebar_first-inside .social-share,.panels-flexible-region-8-sidebar_first-inside .view-header,.panels-flexible-region-8-sidebar_first-inside .item-list').wrapAll('<div class="wrap">');
           jQuery('.panels-flexible-region-12-sidebar_first .wrap,.panels-flexible-region-8-sidebar_first-inside .wrap').scrollbar();
        //  jQuery('.quick-accordion').scrollbar();

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

       $('.sidebar-first').addClass('active-sidebar');

          //fixedSidebar();
  
    });
    
    $(window).scroll(function(){
    	//fixedSidebar();
    });
    
    
    function fixedSidebar()
    { 
       var footerOffset=$('#footer-wrapper').offset().top;
       var footerHt=$('#footer-wrapper').height();
       //console.log(footerHt);
      
       
       if($(window).scrollTop() >= footerOffset/2.5+footerHt)
       {
       	       //console.log('if')
       	$('.sidebar-first').removeClass('side-fixed');
       }
       else{ 
       	       $('.sidebar-first').addClass('side-fixed');
       	       //console.log('else');
       }	
    }

//    Drupal.behaviors.exampleModule = {
//    attach: function (context, settings) {
//        
//    }
//   }
})(jQuery);

