(function ($) {
    Drupal.behaviors.dc_autocomplete_assigned_behaviors = {
        attach: function (context, settings) {
            var name_employee = jQuery('.field_nid_employee option:selected').text();
            var name_task = jQuery('.field_nid_task option:selected').text();

            jQuery('input.title').val(name_employee + ' - ' + name_task);
        }
    };
}(jQuery));
