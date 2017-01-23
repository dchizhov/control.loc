(function ($) {
    Drupal.behaviors.dc_autocomplete_assigned_behaviors = {
        attach: function (context, settings) {
            jQuery('.assign_done .task_box_assign span').html('DONE');
            jQuery('.assign_in_progress .task_box_assign span').html('IN PROGRESS');
            
            jQuery('.assigned .task_box_assign span a').on('click',function () {
               var parents = jQuery(this).parents();
                jQuery(parents[3]).addClass('assign_in_progress');
                jQuery(parents[0]).html('IN PROGRESS');
            });
        }
    };
}(jQuery));
