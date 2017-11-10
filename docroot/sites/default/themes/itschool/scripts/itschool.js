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
    attach: function (context, settings) {
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
   * Slick Slider.
   */
  Drupal.behaviors.itsSlickSlider = {
    attach: function (context, settings) {
      // Reviews.
      var content = $('.view-display-id-panel_reviews .view-content', context);
      if (content.length) {
        content.slick(slickOptions);
      }
      // Reviews Teacher.
      var content = $('.view-display-id-panel_pane_subject_theachers .view-content', context);
      if (content.length) {
        content.slick(slickOptions);
      }
      // Popular News.
      var content = $('.view-display-id-panel_pane_popular_news .view-content', context);
      if (content.length) {
        content.slick(slickOptions);
      }
    }
  }

  /**
   * Event Countdown.
   */
  Drupal.behaviors.itsEventTimer = {
    attach: function (context, settings) {
      if ($('body', context).hasClass('panel-page-all-events')) {
        // Set the date we're counting down to.
        var time = $('#timestamp', context);
        var countDownDate = new Date($('#timestamp', context).text()).getTime();
        // Update the count down every 1 second
        var x = setInterval(function() {
          // Get todays date and time
          var now = new Date().getTime();
          // Find the distance between now an the count down date
          var distance = countDownDate - now;
          // Time calculations for days, hours, minutes and seconds
          var days = Math.floor(distance / (1000 * 60 * 60 * 24));
          var hours = Math.floor((distance % (1000 * 60 * 60 * 24)) / (1000 * 60 * 60));
          var minutes = Math.floor((distance % (1000 * 60 * 60)) / (1000 * 60));
          var seconds = Math.floor((distance % (1000 * 60)) / 1000);

          if (hours < 10) {
            hours = '0' + hours;
          }
          if (minutes < 10) {
            minutes = '0' + minutes;
          }
          if (seconds < 10) {
            seconds = '0' + seconds;
          }

          // Display the result in the element with id="demo"
          time.text();
          $('#countdown .countdown-inner', context).text(
            days + ' : ' + hours + ' : ' + minutes + ' : ' + seconds
          );

          // If the count down is finished, write some text
          if (distance < 0) {
            clearInterval(x);
            time.text(Drupal.t('EXPIRED'));
          }
        }, 1000);
      }
    }
  }

  $(window).resize(function () {
    $('.view-display-id-panel_partners_slider .view-content').slick('unslick');
    Drupal.behaviors.itsSlickPartners.attach();
  });

}) (jQuery);
