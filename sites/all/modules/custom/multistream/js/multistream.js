var SR = SR || {};

(function ($) {

  Drupal.behaviors.MultiStreamManager = {
    attach : function(context, settings) {
      $('#manage-open').once('open', function(){
        $(this).click(function(e) {
          $(this).addClass('processed');

          $('#manage-selection').toggle();
        });
        
      });
      
      $('#manage-selection article:not(.processed)', context).each(function(){
        $(this).addClass('processed');
        
        $(this).click(function(e) {
          e.preventDefault();
          var title = $(this).find('a').html();
          if(title.length > 35) {
            title = title.substring(0,35) + '...';
          }
          
          $('#manage-selection').hide();
          
          var nid = $(this).attr('data-nid');
          
          $('#manage-form').load('/multistream/ajax/manage/'+nid, function(response, status, xhr) {
            Drupal.attachBehaviors('#manage-form');     
            $('#manage-open').html(title);
          });
        });
        

      });
      
      $('#manage-form div[id*="edit-field-streams"]:not(.processed)').each(function(){
        $(this).addClass('processed');
        $(this).sortable({
          update: function( event, ui ) {
            SR.updateManageStreamOrder();
          }
        });
      });
      
      $('#manage-form div[id*="edit-field-streams"] .stream-wrapper:not(.action-processed)').each(function(){
        $(this).addClass('action-processed');
        $(this).find('div.remove').click(function(){
          var id = $(this).closest('.stream-wrapper').attr('data-id');
          SR.confirm('#quicktabs-container-player_menu', 'Are you sure you want to remove this stream?', SR.removeManageStream, id);
          //SR.removeManageStream(id);                  
        });
      });      

      $('.btn.connect').click(function(){
        $(this).closest('.form-wrapper').find('input').prop('disabled', function(idx, oldProp) {
          if(oldProp) {
            $(this).closest('.form-wrapper').find('.btn.connect').html('Save');
          } else {
            $(this).closest('.form-wrapper').find('.btn.connect').html('Edit');
          }
          return !oldProp;
        });
        if($(this).siblings('input').val()) {
          $(this).closest('.form-wrapper').addClass('has-value');
        } else {
          $(this).closest('.form-wrapper').removeClass('has-value');            
        }        
      });
      
      $('.field-type-text-long .btn.connect').click(function(){
        $(this).closest('.form-wrapper').find('textarea').prop('disabled', function(idx, oldProp) {
          return !oldProp;
        });
        if($(this).siblings('.form-textarea-wrapper').find('textarea').val()) {
          $(this).closest('.form-wrapper').addClass('has-value');
        } else {
          $(this).closest('.form-wrapper').removeClass('has-value');            
        }        
      });
      
      $('.noclick input, .noclick textarea').attr('disabled', 'disabled');
      
      $('#manage-form fieldset.collapsible legend:not(.sr-processed)').each(function(){
        $(this).addClass('sr-processed');
        $(this).mouseup(function(){
          var parent = $(this).closest('fieldset');
          if($(parent).hasClass('collapsed')) {
            $(parent).siblings('fieldset.collapsible:not(.collapsed)').each(function(){
              $(this).find('.fieldset-title').trigger('click');
            });            
          } else {

          }
        });
      });
      
      $('#manage-form-submit').mousedown(function(e){
        $('.noclick input, .noclick textarea').removeAttr('disabled');
      });
      
      $('input[id*="edit-field-website"').attr('size', '12');
      
      $('#manage-selection:not(.processed)', context).each(function(){
        $(this).addClass('processed');
        $(this).mouseleave(function(){
          $(this).hide();
        });
      });
      
      $('.filter-button:not(.processed)', context).each(function(){
        $(this).addClass('processed');
        $(this).click(function(){          
          $(this).siblings('.filter-options-wrapper').toggle();
        });        
      });
      
      $('.filter-options .multistreams:not(.processed)', context).each(function() {
        $(this).addClass('processed');
        $(this).click(function(){
          var id = $(this).closest('.filter-wrapper').attr('id');
          var results_id = id.replace('-filter-wrapper', ''); 
          $('#'+results_id+'-results-multistreams').show();
          $('#'+results_id+'-results-streams').hide();    
          $('#'+results_id+'-filter-button').trigger('click');
        });
      });
      
      $('.filter-options .streams:not(.processed)', context).each(function() {
        $(this).addClass('processed');
        $(this).click(function(){
          var id = $(this).closest('.filter-wrapper').attr('id');
          var results_id = id.replace('-filter-wrapper', ''); 
        
          $('#'+results_id+'-results-multistreams').hide();
          $('#'+results_id+'-results-streams').show();        
          $('#'+results_id+'-filter-button').trigger('click');
        });
      });
      
      $('.panel-actions li:not(.processed)').each(function(){
        $(this).addClass('processed');
        var link = this;
        var container = $(this).closest('.panel-actions');

        if($(container).hasClass('anon')) {
          // User is anon
          $(link).click(function(){
            // Open the login/register popup
          });
        } else {
          // User is logged in
          $(link).click(function(){
            if($(link).hasClass('nopopup')) {
              return;
            }
            // Save streams to save forms
            $('form[id*="multistream-form-new-multistream"]').each(function(){
              var form = $(this);
              $(this).find('input.stream_id').remove();
              for(var id in Drupal.settings.multistream.streams) {
                $(form).append('<input type="hidden" class="stream_id" name="streams['+id+']" value="'+id+'" />');
              }
            });
            
            if($(link).hasClass('active')) {
              
             
            } else {
              $(link).addClass('active');
              var index = $(link).index();
              $(link).closest('.panel-actions-wrapper').prepend('<div class="panel-overlay"></div>');
              $('.panel-actions-wrapper').find('.panel-actions-popup li').hide();
              $('.panel-actions-popup').css({top:'auto',bottom:'auto'});
              $(link).closest('.panel-actions-wrapper').find('.panel-actions-popup li:nth-child('+(index+1)+')').show();            
            }
          });
        }
      });
      
      $('.panel-overlay').live('click', function(){
        $('.panel-overlay').remove();
        $('.panel-actions-popup li').hide(); 
        $('.panel-actions li.active').removeClass('active');
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
              Drupal.attachBehaviors();
            },
            error: function(x, s, e) {
              
            }
          });
      });
      

      
      $('#chat-rooms:not(.sr-processed)').each(function(){
        $(this).addClass('sr-processed');
        SR.chatInit();        
      });
      
      SR.streamInit();
      
      //window.history.replaceState('Object', 'Title', '/another-new-url');
    }  
  }
  
  Drupal.behaviors.confirmDelete = {
      attach: function(context, settings) {
       
        var events =  $('#edit-delete').clone(true).data('events');// Get the jQuery events.
        $('#edit-delete').unbind('mousedown'); // Remove the click events.
        $('#edit-delete').mousedown(function () {
          
          SR.confirm('#quicktabs-container-player_menu', 'Are you sure you want to delete this multistream?', events.click[1].handler);
          //    
          /*
          if (confirm('Are you sure you want to delete that?')) {
            $.each(events.click, function() {
              this.handler(); // Invoke the mousedown handlers that was removed.
            });
          } */
          // Prevent default action.
          return false;
        });
        
      }
  }
  
  Drupal.behaviors.manageSave = {
      attach: function(context, settings) {
        var events =  $('.panel-actions li.save').clone(true).data('events');// Get the jQuery events.
        $('.panel-actions .save:not(.sr-processed)').each(function(){
          $(this).addClass('sr-processed');
          
          $(this).unbind('click'); // Remove the click events.
          $(this).click(function (e) {
            if($(this).hasClass('active')) {
              $.each(events.click, function() {
                this.handler(); // Invoke the mousedown handlers that was removed.
              });
            }
            // Check if we're in the manager
            var inManager = $('#quicktabs-player_menu ul.quicktabs-tabs li.manage').hasClass('active');
            if (inManager) {
              $('#manage-form-submit').trigger('click');
              e.preventDefault();
              return false;
            } else {
              // If user is owner then save the streams
              if(Drupal.settings.multistream.is_owner == true) {
                $.ajax({
                  type: 'POST',
                  url: '/multistream/update-streams',
                  dataType: 'json',
                  data: Drupal.settings.multistream,
                  success : function(res) {                    
                    var title = Drupal.settings.multistream.title;
                    var message = '<div>Nice work! <strong>'+title+'</strong> has been <strong>Updated.</strong></div>';
                    $('#player-messages').srDisplayPlayerMessage(message);
                  }
                });
              } else {
                $.each(events.click, function() {
                  this.handler(); // Invoke the mousedown handlers that was removed.
                });
              }                          
            }
          });
        });          
      }
  }  
  
  Drupal.behaviors.autoUpload = {
      attach: function (context, settings) {
        $('input[type="file"]:not(.processed)').each(function(){
          $(this).addClass('processed');
          $(this).change(function(){
            $(this).next('input[type="submit"]').mousedown();            
          });
        });
      }
  }  
  

  
  SR.updatePosition = function(stream, pos, tellFlash) {
    var stream_id;
    var from = '';
    
    if(typeof(tellFlash) == 'undefined') {
      tellFlash = true;
    }
    
    if($.isNumeric(stream)) {
      stream_id = stream;
    } else {
      stream_id = $(stream).attr('data-id');
      $(stream).removeClass('hover');
    }
    
    // Check if stream exists
    if(!(stream_id in Drupal.settings.multistream.streams)) {
      //console.log('not in streams object');
      // If stream doesn't exist in streams obj, add it

      $.ajax({
        url: '/multistream/ajax/stream-settings/'+stream_id+'/'+pos,
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
          
          if((pos in Drupal.settings.multistream.stream_pos) && pos != 'q') {
            // Move the current stream in this position to the queue
            if(Drupal.settings.multistream.stream_pos[pos] != stream_id) {
              SR.moveStream(Drupal.settings.multistream.stream_pos[pos], pos, 'q', tellFlash);
            }
          } 
          SR.moveStream(stream_id, from, 'q', tellFlash);
          SR.moveStream(stream_id, 'q', pos, tellFlash);
          
          return;
          
        },
        error: function(x, s, e) {
          
        }
      });
      return;
    } else {
      from = Drupal.settings.multistream.streams[stream_id].position;
    }
    
    // Update streams_pos object
    if((pos in Drupal.settings.multistream.stream_pos) && pos != 'q') {
      // Move the current stream in this position to the queue
      if(Drupal.settings.multistream.stream_pos[pos] != stream_id) {
        SR.moveStream(Drupal.settings.multistream.stream_pos[pos], pos, 'q', tellFlash);
      }
    } 
    SR.moveStream(stream_id, from, pos, tellFlash);
  }
  
  SR.moveStream = function(stream_id, from, to, tellFlash) {
    if(stream_id == '') {
      return;
    }

    
    // Update streams_pos object
    if(from != 'q' && from != '') {
      Drupal.settings.multistream.stream_pos[from] = '';
    }
    if(to != 'q' && to != '') {
      Drupal.settings.multistream.stream_pos[to] = stream_id;
    }
    
    var stream;
    // Move/Copy stream element
    switch(from) {
      case '':
        // Not in now playing panel
        stream = $('.stream-wrapper[data-id="'+stream_id+'"]:first').clone(true, true);
        $(stream).find('.processed').removeClass('processed');
        break;
      case 'q':
        stream = $('#queue .stream-wrapper[data-id="'+stream_id+'"]:first');
        break;
      default:
        stream = $('#now-playing .stream-wrapper[data-id="'+stream_id+'"]:first');       
        break;
    }
    
    switch(to) {
    case 'q':
      $(stream).appendTo('#queue');
      break;
    default:
      $(stream).appendTo('#now-playing');
      break;
    }    
    $(stream).attr('data-pos', to);
    
    // Re-order Now-Playing
    for (var pos in Drupal.settings.multistream.stream_pos) {
      var id = Drupal.settings.multistream.stream_pos[pos];
      $('#now-playing .stream-wrapper[data-id="'+id+'"]').appendTo('#now-playing');
    }
    
    Drupal.settings.multistream.updated = true;
    
    // Sort the streams
    SR.sortQueue();
    
    // attach events
    SR.streamInit();
    
    // Update the player stage

    if(stream_id != '' && tellFlash == true) {
      updatePlayerStream(to, stream_id);       
    }
    
    
    // Update streams obj    
    Drupal.settings.multistream.streams[stream_id].position = to;
    Drupal.settings.multistream.streams[stream_id].player_num = to;
    
    updatePlayerStreams();
  }
  
  SR.sortQueue = function() {
    var queue = $('#queue'),
    streams = queue.children('.stream-wrapper');
    
    streams.sort(function(a,b){
      if($(a).hasClass('stream-wrapper')) {
        var at = $(a).attr('data-channel');
        var bt = $(b).attr('data-channel');
        if(at > bt) {
          return 1;
        }
        if(at < bt) {
          return -1;
        }
        return 0;
        
      } else {
        return -1;
      }
    });
    
    streams.detach().appendTo(queue);
  }
  
  SR.removeStream = function(stream_id) {
    // Update streams obj
    var pos = Drupal.settings.multistream.streams[stream_id].position;
    delete Drupal.settings.multistream.streams[stream_id];
    
    // Update streams_pos object
    if(pos != '' && pos != 'q') {
      Drupal.settings.multistream.stream_pos[pos] = '';      
    }
    // Remove element from now playing/queue
    switch(pos) {
      case 'q':
        $('#queue .stream-wrapper[data-id="'+stream_id+'"]').remove();
        break;
      default:
        $('#now-playing .stream-wrapper[data-id="'+stream_id+'"]').remove();
        break;
    }
    
    Drupal.settings.multistream.updated = true;
    
    // Update the player stage
    removeStream(pos);
  }
  
  SR.updateManageStreamOrder = function() {
    // Loop through each stream to get position
    $('div[id*="edit-field-streams"] .stream-wrapper').each(function(){
      // Update the table weights with positions
      var id = $(this).attr('data-id');
      var pos = $(this).index();
      var field = $('div[id*="field-streams-add-more-wrapper"] input[value*="('+id+')"]');
      $(field).closest('td').siblings('.delta-order:first').find('input').val(pos);
      
    });
  }
  
  SR.removeManageStream = function(id) {
    // Loop through each stream to get position
    $('div[id*="edit-field-streams"] .stream-wrapper[data-id="'+id+'"]').each(function(){
      // Update the table weights with positions
      $(this).remove();
      var field = $('div[id*="field-streams-add-more-wrapper"] input[value*="('+id+')"]');
      $(field).val('');
      
    });
  }  
  
  SR.chatInit = function() {
    if(Drupal.settings.multistream.debug == true) {
      return;
    }
    
    if(Drupal.settings.multistream.streams.length == 0) {
      return;
    }
    
    var rooms = $('#chat-rooms');
    var stream_id = Drupal.settings.multistream.stream_pos[1];   
    var stream = Drupal.settings.multistream.streams[stream_id];
    $(rooms).hide();
    $(rooms).append('<div id="chat-room-'+stream.stream_id+'" class="chat-iframe"><iframe width="100%" height="100%" src="'+stream.chat+'" frameborders="0" scrolling="no" id="chat-iframe" class="'+stream.stream_id+'"></div>');    
    $(rooms).show();
    
    $('#chat-open').click(function(){
      $('#chat-selection').toggle();
    });
    $('#chat-selection .stream').click(function(){
      var id = $(this).attr('data-id');
      var title = $(this).html();
      
      $('#chat-selection').hide();
      
      $('chat-open').html(title);
      // Hide all chats
      $('#chat-rooms .chat-iframe').hide();
      
      // Check if chat exists and if not create it
      if($('#chat-room-'+id).length == 0) {
        var stream = Drupal.settings.multistream.streams[id];
        $(rooms).append('<div id="chat-room-'+stream.stream_id+'" class="chat-iframe"><iframe width="100%" height="100%" src="'+stream.chat+'" frameborders="0" scrolling="no" id="chat-iframe" class="'+stream.stream_id+'"></div>');            
      }
      
      // Show the correct chat
      $('#chat-room-'+id).show();
    });
  }
  
  SR.streamInit = function() {
    $('.stream-wrapper').once('image-overlay', function () {
      var $teaser = $(this);

      $teaser.hover(
        function() {$(this).addClass('hover');},
        function() {$(this).removeClass('hover');}
      );
      
    }); 
    
    $('.stream-actions .add-to-player:not(.processed)').each(function(){
      $(this).addClass('processed');
      $(this).find('li.item').click(function() {          
        var stream = $(this).closest('.stream-wrapper');
        var pos = $(this).attr('data-pos');
        var curPos = $(stream).attr('data-pos');
        if(pos == curPos) {
          return;
        }
        SR.updatePosition(stream, pos);
      });
    });  
    
    $('#block-panels-mini-now-playing .stream-actions .remove:not(.processed)').each(function(){
      $(this).addClass('processed');
      $(this).click(function() {
        var stream_id = $(this).closest('.stream-wrapper').attr('data-id');
        SR.confirm('#quicktabs-container-player_menu', 'Are you sure you want to remove this stream?', SR.removeStream, stream_id);          
      });
    });    
  }
  
  $.fn.srInsertStream = function (html, id, pos) {
    // Check if stream exist
    $('#queue .stream-wrapper[data-id="'+id+'"]').remove();
    
    $(this).append(html);
    
    var stream = $(this).find('stream-wrapper[data-id="'+id+'"]');
    SR.updatePosition(stream, pos);
    SR.streamInit();
  }
  
  $.fn.srDisplayPlayerMessage = function (html) {
    $('#player-messages .message').html(html);
    $('#player-messages').animate({height: "show"}).delay(5000).animate({height: "hide"});
  }  

  $.fn.srUpdateURL = function (path) {
    window.history.replaceState('Object', 'Title', '/'+path);
  }  
  
  $.srUserLoginMultistream = function (path) {
    $('body').removeClass('anon');
    $.ajax({
      url: '/multistream/ajax/user-login-update',
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
        Drupal.attachBehaviors();
      },
      error: function(x, s, e) {
        
      }
    });    
  }  
  
  Drupal.behaviors.RiotPlayer = {
      attach: function(context, settings) {
        $.ResizePlayer();
        $(window, context).resize(function(){ $.ResizePlayer()});        
        var client = new ZeroClipboard( document.getElementById("share-link-btn") );
      }
  }

  $.ResizePlayer = function() {
    var lw = $('#quicktabs-player_menu').width();
    var rw = $('#quicktabs-social_menu').width();
    var windowW = $(window).width();
    
    $('#riot-player-wrapper').width(windowW-lw-rw);
  }  
  
  SR.confirm = function(insertAt, message, callback, arg1, arg2) {
    $('.confirm-overlay').remove();

    $(insertAt).prepend('<div class="confirm-overlay"><div class="overlay"></div><div class="overlay-content"><p>'+message+'</p><div class="confirm-yes btn">Yes</div><div class="confirm-no btn">No</div></div></div>');
    $('.overlay').click(function() { $(this).closest('.confirm-overlay').remove(); });
    $(insertAt).find('.confirm-yes').click(function() {
      callback(arg1, arg2);
      $('.confirm-overlay').remove();
    });
    $(insertAt).find('.confirm-no').click(function() {
      $('.confirm-overlay').remove();
    });
  }
})(jQuery);