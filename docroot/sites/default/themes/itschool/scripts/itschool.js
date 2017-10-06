/**
 * @file
 * IT School JS.
 */

(function ($) {
  'use strict';

  var slickOptions = {
    infinite: true,
    slidesToShow: 1,
    slidesToScroll: 1,
    draggable: false,
    respondTo: 'min',
    prevArrow: '<span class="glyphicon glyphicon-menu-left slick-prev"></span>',
    nextArrow: '<span class="glyphicon glyphicon-menu-right slick-next"></span>',
  };

  /**
   * Partners Slick Sliders.
   */
  Drupal.behaviors.itsSlickPartners = {
    attach: function (context, setings) {
      var partners = $('.view-display-id-panel_partners_slider .view-content', context);
      if (partners.length) {
        var slides = 1;
        if (window.matchMedia('(min-width: 992px)').matches) {
          slides = 6;
        }
        else if (window.matchMedia('(min-width: 768px)').matches) {
          slides = 5;
        }
        else if (window.matchMedia('(min-width: 480px)').matches) {
          slides = 3;
        }
        else if (window.matchMedia('(min-width: 360px)').matches) {
          slides = 2;
        }
        var options = jQuery.extend(true, {}, slickOptions);
        options.slidesToShow = slides;
        options.slidesToScroll = slides;

        partners.slick(options);
      }
    }
  };

  /**
   * Reviews Slick Slider.
   */
  Drupal.behaviors.itsSlickReviews = {
    attach: function (context, setings) {
      var content = $('.view-display-id-panel_reviews .view-content', context);
      if (content.length) {
        content.slick(slickOptions);
      }
    }
  }

  /**
   * Reviews Teacher Slider.
   */
  Drupal.behaviors.itsSlickTeacher = {
    attach: function (context, setings) {
      var content = $('.view-display-id-panel_pane_subject_theachers .view-content', context);
      if (content.length) {
        content.slick(slickOptions);
      }
    }
  }

  $(window).resize(function () {
    $('.view-display-id-panel_partners_slider .view-content').slick('unslick');
    Drupal.behaviors.itsSlickPartners.attach();
  });

}) (jQuery);
