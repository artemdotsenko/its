<?php

/**
 * @file
 * Template to display a view as a table.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $header: An array of header labels keyed by field id.
 * - $caption: The caption for this table. May be empty.
 * - $header_classes: An array of header classes keyed by field id.
 * - $fields: An array of CSS IDs to use for each field id.
 * - $classes: A class or classes to apply to the table, based on settings.
 * - $row_classes: An array of classes to apply to each row, indexed by row
 *   number. This matches the index in $rows.
 * - $rows: An array of row items. Each row is an array of content.
 *   $rows are keyed by row number, fields within rows are keyed by field ID.
 * - $field_classes: An array of classes to apply to each field, indexed by
 *   field id, then row number. This matches the index in $rows.
 * @ingroup views_templates
 */

?>
<table <?php if ($classes) { print 'class="'. $classes . '" '; } ?><?php print $attributes; ?>>
  <?php if (!empty($title) || !empty($caption)) : ?>
    <caption><?php print $caption . $title; ?></caption>
  <?php endif; ?>
  <?php if (!empty($header)) : ?>
    <thead>
    <tr>
      <?php foreach ($header as $field => $label): ?>
        <th <?php if ($header_classes[$field]) { print 'class="'. $header_classes[$field] . '" '; } ?>>
          <?php print $label; ?>
        </th>
      <?php endforeach; ?>
    </tr>
    </thead>
  <?php endif; ?>
  <tbody>
  <?php foreach ($rows as $row_count => $row): ?>
    <tr <?php if ($row_classes[$row_count]) { print 'class="' . implode(' ', $row_classes[$row_count]) .'"';  } ?>>
      <?php foreach ($row as $field => $content): ?>
        <td <?php if ($field_classes[$field][$row_count]) { print 'class="'. $field_classes[$field][$row_count] . '" '; } ?><?php print drupal_attributes($field_attributes[$field][$row_count]); ?>>
          <?php print $content; ?>
        </td>
      <?php endforeach; ?>
    </tr>
  <?php endforeach; ?>
  <tr class="one-time-pay custom-row">
    <td class="left">
      <div>
        <span class="glyphicon glyphicon-credit-card"></span>
        <?php print t('One time payment'); ?>
      </div>
    </td>
    <td class="middle">&nbsp;</td>
    <td class="middle views-align-right"><?php print $total_formated; ?></td>
    <td class="right views-align-right">
      <div><?php /*<a href="#" class="btn"><?php print t('Pay');?></a>*/?></div>
    </td>
  </tr>
  <tr class="no-money">
    <td colspan="4">
      <h3><?php print t('Not enough money'); ?></h3>
      <p><?php print t('Not enough money solution'); ?></p>
    </td>
  </tr>
  <tr class="no-money-solution custom-row">
    <td class="left">
      <div>
        <span class="glyphicon glyphicon-scissors"></span>
        <?php print t('Pay in parts');?>
      </div>
    </td>
    <td class="middle">&nbsp;</td>
    <td class="middle views-align-right"><strong><?php print $four_price;?></strong>x4</td>
    <td class="right views-align-right buy-four">
      <div><?php /*<a href="#" class="btn"><?php print t('Pay');?></a>*/?></div>
    </td>
  </tr>
  </tbody>
</table>
