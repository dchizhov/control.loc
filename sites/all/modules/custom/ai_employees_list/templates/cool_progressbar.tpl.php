<?php
/**
 * @file
 * Template for cool bootstrap progressbar.
 */
?>
<div class="progress">
  <div class="progress-bar" role="progressbar" aria-valuenow="<?php echo $percentage;?>"
       aria-valuemin="0" aria-valuemax="100" style="width: <?php echo $percentage;?>%;">
    <?php echo $percentage;?>%
  </div>
</div>
