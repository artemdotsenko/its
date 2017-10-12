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
 * -- $content['main']           => t('Main'),
 * -- $content['sidebar']        => t('Sidebar'),
 * -- $content['bottom-content'] => t('Footer block'),
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
    <div class="row-wrapper clearfix">
      <div class="container">
        <div class="row">
          <div class="main col-sm-9 no-left-padding">
            <div class="main-inner">
              <?php print $content['main']; ?>
            </div>
          </div>
          <div class="sidebar col-sm-3 no-right-padding">
            <div class="sidebar-inner">
              <?php print $content['sidebar']; ?>
            </div>
          </div>
        </div>
      </div>
    </div>

    <!-- Bottom content -->
    <div class="bottom-content-wrapper clearfix">
      <div class="bottom-content">
        <?php print $content['bottom-content']; ?>
      </div>
    </div>

  </div>
</div>
