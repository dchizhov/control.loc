$(document).ready(function () {
    $('.notice').prependTo('.front');
    $('.notice').hide();
    $('.notice').show(200);
    setTimeout(function () {
        $('.notice').hide(200);
    },10000);
    $('.notice').hover(function () {
        $(this).prepend('<div class="close_notice"></div>');
        $('.close_notice').html('x');
        $('.close_notice').on('click', function () {
            $('.notice').hide(200);
        })
    },function () {
        $('.close_notice').remove();
    });
});
