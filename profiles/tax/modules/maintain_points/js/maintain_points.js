(function ($) {
  Drupal.behaviors.maintain_points = {
    attach: function(context, settings) {
      $('#edit-field-select-category').click(function() {
        var category = $('#edit-field-select-category :selected').text();        
        $('.description').text('hai ' + category);
      });
    }
  };
})(jQuery); 