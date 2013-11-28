(function($) {
  Drupal.behaviors.maintain_points = {
    attach: function(context, settings) {
      $('#edit-field-select-category').click(function() {
        var category = $('#edit-field-select-category :selected').text();
        if (category != "- Select -") {
          var cat_split = category.split('-');
          $('.form-item-field-select-category div:last').text('for this category ' + cat_split[1] + ' points will be reduced.');
        }
        else {
          $('.form-item-field-select-category div:last').text('Select Category');
        }
      });
    }
  };
})(jQuery); 