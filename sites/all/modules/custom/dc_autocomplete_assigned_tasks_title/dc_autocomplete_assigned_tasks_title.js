(function ($) {
    Drupal.ajax.prototype.commands.dc_autocomplete_assigned_tasks_title_change_title = function (ajax, response, status) {
        var valFieldNidTask = $('.field_nid_task option:selected').text();
        $('.title').val(valFieldNidTask);
    };
}(jQuery));
