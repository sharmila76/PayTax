(function($) {
  Drupal.behaviors.maintain_points = {
    attach: function(context, settings) {
      $('#edit-field-select-category').click(function() {
        var selected_category = $('#edit-field-select-category :selected').text();
        var category_dict = Drupal.settings.maintain_points.categories_list;
        var parsedData = JSON.parse(category_dict);
        $.each(parsedData, function(key, value) {
          if (selected_category != "- Select -") {
            if (value == selected_category) {
              $('.form-item-field-select-category div:last').text('for this category ' + key + ' points will be reduced.');
            }
          }
          else {
            $('.form-item-field-select-category div:last').text('Select Category');
          }
        });
      });
    }
  };
})(jQuery); 