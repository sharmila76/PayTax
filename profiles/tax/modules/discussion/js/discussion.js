(function ($) { 
 Drupal.behaviors.discussion = {
    attach: function (context, settings) {
  $('.discussion_form_submit').click(function(){
  $('.selected').hide();
 });
 }
 };
 })(jQuery);
