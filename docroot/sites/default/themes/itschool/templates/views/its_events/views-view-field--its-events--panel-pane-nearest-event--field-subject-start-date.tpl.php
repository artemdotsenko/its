<?php

/**
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */
?>

<?php
$title = t('till class start');
if ($row->field_data_field_subject_start_date_bundle == 'event'):
  $title = t('till event start');
endif;
?>
<div class="countdown-title"><?php print $title; ?></div>
<div id="timestamp" class="element-invisible"><?php print $output; ?></div>
<div id="countdown">
  <div class="countdown-inner"></div>
  <div class="countdown-labels">
    <span class="days"><?php print t('days');?></span>
    <span class="hours"><?php print t('hours');?></span>
    <span class="minutes"><?php print t('minutes');?></span>
    <span class="seconds"><?php print t('seconds');?></span>
  </div>
</div>

