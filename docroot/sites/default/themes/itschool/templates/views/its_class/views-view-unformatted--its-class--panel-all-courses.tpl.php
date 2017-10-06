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
        $classes_array[$id] .= ' proj col-lg-2 col-md-3 col-sm-4 col-xs-6';
      ?>
      <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
        <?php print $row; ?>
      </div>
    <?php endforeach; ?>
  </div>
</div>
