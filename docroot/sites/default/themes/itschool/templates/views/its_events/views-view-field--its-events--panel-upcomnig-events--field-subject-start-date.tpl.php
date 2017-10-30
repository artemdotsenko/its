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
$date = str_replace(
  array(
    'January',
    'February',
    'March',
    'April',
    'May',
    'June',
    'July',
    'August',
    'September',
    'October',
    'November',
    'December',
  ),
  array(
    t('Januaryth'),
    t('Februaryth'),
    t('Marchth'),
    t('Aprilth'),
    t('Mayth'),
    t('Juneth'),
    t('Julyth'),
    t('Augustth'),
    t('Septemberth'),
    t('Octoberth'),
    t('Novemberth'),
    t('Decemberth'),
  ),
  $output
);
$date = str_replace('th ', ' ', $date);
print $date;
?>
