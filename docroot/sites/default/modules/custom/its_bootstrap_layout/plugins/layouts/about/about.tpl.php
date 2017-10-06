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
 * -- $content['top-left']       => t('Top Left'),
 * -- $content['top-right']      => t('Top Right'),
 * -- $content['middle']         => t('Middle'),
 * -- $content['bottom-left']    => t('Footer Left'),
 * -- $content['bottom-right']   => t('Footer Right'),
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
    <div class="row-wrapper row-1 clearfix">
      <div class="container">
        <div class="row">
          <div class="top-left col-sm-6 no-left-padding">
            <div class="top-left-inner">
              <?php print $content['top-left']; ?>
            </div>
          </div>
          <div class="top-right col-sm-6 no-right-padding">
            <div class="top-right-inner">
              <?php print $content['top-right']; ?>
            </div>
          </div>
        </div>
      </div>
    </div>

    <hr/>

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
      <div class="full-middle">
        <div class="full-middle-inner">
          <div class="container">
            <div class="row">
              <?php print $content['full-middle']; ?>
            </div>
          </div>
        </div>
      </div>
    </div>

    <!-- Banner -->
    <div class="row-wrapper banner clearfix">
      <div class="banner">
        <div class="banner-inner">
          <?php print $content['banner']; ?>
        </div>
      </div>
    </div>

    <!-- Row 3 -->
    <div class="row-wrapper row-3 clearfix">
      <div class="container">
        <div class="row">
          <div class="middle-second">
            <div class="middle-second-inner">
              <?php print $content['middle-second']; ?>
            </div>
          </div>
        </div>
      </div>
    </div>

    <!-- Row 4 -->
    <div class="row-wrapper branch-info row-4 clearfix">
      <div class="container">
        <div class="row">
          <div class="bottom-left col-sm-6 no-left-padding">
            <div class="bottom-left-inner">
              <?php print $content['bottom-left']; ?>
            </div>
          </div>
          <div class="bottom-right col-sm-6 no-right-padding">
            <div class="bottom-right-inner">
              <?php print $content['bottom-right']; ?>
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
