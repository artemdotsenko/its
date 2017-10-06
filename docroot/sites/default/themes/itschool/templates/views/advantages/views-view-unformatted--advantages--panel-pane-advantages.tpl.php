<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<div class="container-fluid">
  <div class="row proj-container text-center">
    <?php foreach ($rows as $id => $row): ?>
      <?php
        $classes_array[$id] .= ' proj col-lg-2 col-md-3 col-sm-6 col-xs-12';
      ?>
      <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
        <div class="row-wrapper-inner">
          <?php print $row; ?>
        </div>
      </div>
    <?php endforeach; ?>
  </div>
</div>
