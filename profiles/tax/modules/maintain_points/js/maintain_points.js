(function($) {
  Drupal.behaviors.maintain_points = {
    attach: function(context, settings) {
      $('#edit-field-select-category-name').click(function() {
        var selected_category = $('#edit-field-select-category-name :selected').text();
        var category_dict = Drupal.settings.maintain_points.categories_list;        
        var parsedData = JSON.parse(category_dict);
        $.each(parsedData, function(key, value) {
          if (selected_category != "- Select -") {
            if (value == selected_category) {
              var points = key.split('-'); 
              $('.form-item-field-select-category-name div:last').text('for this category ' + points[1] + ' points will be reduced.');
            }
          }
          else {
            $('.form-item-field-select-category-name div:last').text('Category for the question');
          }
        });
      });
    }
  };
})(jQuery); 