(function ($) {
    Drupal.ajax.prototype.commands.dc_autocomplete_assigned_tasks_title_change_title = function (ajax, response, status) {
        var valFieldNidTask = $('.field_nid_task option:selected').text();
        var val_field_nid_employee = $('.field-name-field-nid-employee option:selected').text();
        
        $('.title').val(val_field_nid_employee +' ' + valFieldNidTask);
    };
}(jQuery));
