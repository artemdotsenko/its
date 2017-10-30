<?php

/**
 * @file
 * Subject page.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 * -- $content['top-content']    => t('Top Content'),
 * -- $content['middle']         => t('Middle'),
 * -- $content['bottom-content'] => t('Footer Content'),
 */
?>

<div class="panel-display clearfix <?php print !empty($class) ? $class : ''; ?>"
<?php if (!empty($css_id)):
  print " id=\"$css_id\"";
endif; ?>>
  <div class="one-column-container">
    <!-- Top content (not in desing, but just in case any message is needed -->
    <div class="top-content-wrapper clearfix">
      <div class="top-content ">
        <div class="container">
          <div class="row">
            <?php print $content['top-content']; ?>
          </div>
      </div>
    </div>

    <!-- Row 1 -->
    <div class="row-wrapper row-1 clearfix">
      <div class="container">
        <div class="row">
          <div class="top-left">
            <div class="top-left-inner">
              <?php print $content['top-content']; ?>
            </div>
          </div>
      </div>
    </div>

    <!-- Row 2 -->
    <div class="row-wrapper row-2 clearfix">
      <div class="container">
        <div class="row">
          <div class="middle">
            <div class="middle-inner">
              <?php print $content['middle']; ?>
            </div>
          </div>
        </div>
      </div>
    </div>

    <!-- Row 3 -->
    <div class="row-wrapper row-3 clearfix">
      <div class="bottom-content">
        <div class="bottom-content-inner">
          <div class="container">
            <div class="row">
              <?php print $content['bottom-content']; ?>
            </div>
          </div>
        </div>
      </div>
    </div>
  </div>
</div>
