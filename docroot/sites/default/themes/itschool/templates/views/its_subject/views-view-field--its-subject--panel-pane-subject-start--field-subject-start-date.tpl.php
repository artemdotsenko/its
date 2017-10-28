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

<div class="start-date-wrapper">
  <div class="container">
    <div class="row no-gutters">
      <div class="col-xs-3"><span class="glyphicon glyphicon-calendar"></span></div>
      <div class="col-xs-9">
        <h4><?php print t('Nearest course'); ?></h4>
        <div class="smaller"><?php print t('starts');?> <?php print $output; ?></div>
      </div>
    </div>
  </div>
</div>
