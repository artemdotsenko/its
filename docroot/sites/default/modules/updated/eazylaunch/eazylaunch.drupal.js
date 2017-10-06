/**
 * @file
 * Eazylaunch JS.
 */

(function ($) {
  Drupal.behaviors.eazylaunch = {
    attach: function (context, settings) {
      $.eazylaunch(settings.eazylaunch);
    }
  }
} (jQuery));

/**
 * Alter href value.
 */
function eazylaunchHrefAlter(href) {
  // Add destination to eazylaunch actions and never open in the overlay.
  if (href.indexOf("eazylaunch/action") >= 0) {
    href = Drupal.settings.basePath + href + "?destination=" + document.location.pathname.substr(Drupal.settings.basePath.length);
  }
  // Add overlay to href if overlay is enabled and we're not already in an
  // overlay.
  else if (Drupal.settings.eazylaunch.disable_overlay != 1 && window.top == window.self && !Drupal.settings.eazylaunch.path_is_admin) {
    href = '#overlay=' + href;
  }
  else {
    href = Drupal.settings.basePath + href;
  }
  return href;
}
