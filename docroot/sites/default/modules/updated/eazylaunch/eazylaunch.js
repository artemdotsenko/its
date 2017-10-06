/**
 * @file
 * Eazylaunch JS.
 */

(function ($) {

var ezdata = {
  // Hotkeys ctrlz and altz are the only options. 1 to enable, 0 to disable.
  hotkeys:{ctrlz:1, altz:1},
  details: 'Type and press enter.',
  moreDetails: 'Press Esc or Ctrl+Z to close.<br/> Use Up/Down arrows to navigate.',
  links:[{
    // An array of links that each define a label and an href.
    label: 'EazyLaunch Drupal Project',
    href: 'http://drupal.org/project/eazylaunch'
  }]
};

$.extend({
  eazylaunch: function (data) {
    $.extend(ezdata, data);
    // Don't load eazylaunch if it's already on the page.
    if ($('#eazylaunch-div').length > 0) {
      return true;
    }
    // If we already have links, use them.
    else if (ezdata.links != null) {
      eazylaunchInit(ezdata.links);
    }
    else {
      // Otherwise load them.
      $.getJSON(ezdata.linksUrl, eazylaunchInit);
    }
  }
});

/**
 * Init Eazylaunch.
 */
function eazylaunchInit(links) {
  ezdata.links = links;
  // Init eazylaunch html.
  var content = '<input id="eazylaunch-input"/><div id="eazylaunch-ui-autocomplete-wrapper"></div><div id="eazylaunch-desc"><span id="el-details"></span><a id="el-more-link" href="#">more help...</a><div id="el-more"></div></div>';
  $('body #el-wrap').remove();
  $('body').append('<div id="el-wrap"><div id="eazylaunch-div" style="display:none"><div id="el-block"><h2>EazyLaunch</h2>' + content + '</div></div></div>');

  $('#el-details').html(ezdata.details);
  $('#el-more-link').click(function () {
    $('#el-more').html(ezdata.moreDetails);
    $('#eazylaunch-input').focus().select();
  });

  var el = $('#eazylaunch-div', window.parent.document);
  var doc = window.parent.document;
  if (el.length == 0) {
    el = $('#eazylaunch-div', document);
    doc = document;
  }

  // Handle keydown events.
  $(document).keydown(function (e) {
    if (!e) {
      e = window.event;
    }
    var isCtrlZ = e.keyCode == "Z".charCodeAt(0) && e.ctrlKey;
    var isAltZ = e.keyCode == "Z".charCodeAt(0) && e.altKey;
    var isCtrlReturn = (e.keyCode == 13 || e.keyCode == 10) && e.ctrlKey;
    var isHotkey = (isAltZ && ezdata.hotkeys.altz) || (isCtrlZ && ezdata.hotkeys.ctrlz);
    // Esc key.
    var isEsc = e.keyCode == 27;
    if (!isHotkey && !isEsc) {
      return true;
    }

    if (isHotkey && $(el).is(':hidden')) {
      $(el).show();
      $('#eazylaunch-input', el).focus().select();
      return false;
    }
    else if (isHotkey || isEsc) {
      $(el).hide();
    }
    else {
      return true;
    }
  });

  // Populate links with labels, as jQuery UI autocomplite works with label key
  // if array of objects passed as source.
  // @see http://api.jqueryui.com/autocomplete/#option-source
  $.each(ezdata.links, function (index, item) {
    item.label = item.title;
  });

  // Init eazylaunch autocomplete.
  $('#eazylaunch-input').autocomplete({
    appendTo: '#eazylaunch-ui-autocomplete-wrapper',
    source: ezdata.links,
    minLength: 0,
    select: function (event, ui) {
      $('#eazylaunch-div').hide();
      // Allow the href to be altered.
      if (typeof eazylaunchHrefAlter == 'function') {
        ui.item.href = eazylaunchHrefAlter(ui.item.href);
      }

      if (Drupal.settings.eazylaunch.new_window != 1) {
        doc.location.href = ui.item.href;
      }
      else {
        window.open(ui.item.href);
      }
    }
  });
}

}(jQuery));
