<?php

/**
 * @file
 * Main view template.
 *
 * Variables available:
 * - $classes_array: An array of classes determined in
 *   template_preprocess_views_view(). Default classes are:
 *     .view
 *     .view-[css_name]
 *     .view-id-[view_name]
 *     .view-display-id-[display_name]
 *     .view-dom-id-[dom_id]
 * - $classes: A string version of $classes_array for use in the class attribute
 * - $css_name: A css-safe version of the view name.
 * - $css_class: The user-specified classes names, if any
 * - $header: The view header
 * - $footer: The view footer
 * - $rows: The results of the view query, if any
 * - $empty: The empty text to display if the view is empty
 * - $pager: The pager next/prev links to display, if any
 * - $exposed: Exposed widget form/info to display
 * - $feed_icon: Feed icon to display, if any
 * - $more: A link to view more, if any
 *
 * @ingroup views_templates
 */
?>
<div class="<?php print $classes; ?>">
  <?php if ($header): ?>
    <div class="view-header">
      <?php print $header; ?>
    </div>
  <?php endif; ?>

  <div class="border-wrapper border-top">
    <div class="border-left col-xs-4"></div>
    <div class="border-middle col-xs-4"></div>
    <div class="border-right col-xs-4"></div>
  </div>

  <!-- Nav pills -->
  <ul class="nav nav-pills" role="tablist">
    <li role="presentation" class="active left">
      <a href="#full" aria-controls="full" role="tab" data-toggle="tab"><span class="glyphicon glyphicon-th"></span><?php print t('Full package');?></a>
    </li>
    <li role="presentation" class="right">
      <a href="#custom" aria-controls="custom" role="tab" data-toggle="tab"><span class="glyphicon glyphicon-pencil"></span><?php print t('Select course');?></a>
    </li>
  </ul>

  <!-- Tab panes -->
  <div class="tab-content">
    <div role="tabpanel" class="tab-pane active" id="full">
      <div class="container">
        <?php if ($rows): ?>
          <div class="view-content">
            <?php print $rows; ?>
          </div>
        <?php endif; ?>
      </div>
    </div>
    <div role="tabpanel" class="tab-pane" id="custom">
      <div class="container">
        <?php if ($attachment_after): ?>
          <div class="attachment attachment-after">
            <?php print $attachment_after; ?>
          </div>
        <?php endif; ?>
      </div>
    </div>
  </div>

  <?php if ($footer): ?>
    <div class="view-footer">
      <?php print $footer; ?>
    </div>
  <?php endif; ?>

</div><?php /* class view */ ?>
