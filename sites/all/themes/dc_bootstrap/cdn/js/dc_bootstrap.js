(function ($) {
    Drupal.behaviors.dc_autocomplete_assigned_behaviors = {
        attach: function (context, settings) {
            jQuery('.assign_done .task_box_assign span').html('DONE');
        }
    };
}(jQuery));
