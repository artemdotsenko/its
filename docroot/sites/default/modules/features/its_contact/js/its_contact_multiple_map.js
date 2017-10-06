
/**
 * @file
 * ITS Contacts Multiple Map.
 */

/**
 * Add code to generate the map on page load.
 */
(function ($) {
  Drupal.behaviors.itsContactMultipleMap = {
    attach: function (context, settings) {
      var map = $('.google_map_field_display', context);

      if (map.length) {
        if (typeof(settings.itsContactMap) != 'undefined') {
          var image = {
            url: window.location.origin + '/sites/default/themes/itschool/images/marker/map_marker_s.png',
            // This marker is 20 pixels wide by 32 pixels high.
            size: new google.maps.Size(72, 72),
            // The origin for this image is (0, 0).
            origin: new google.maps.Point(0, 0),
            // The anchor for this image is the base of the flagpole at (0, 32).
            anchor: new google.maps.Point(36, 36)
          };

          var markers = [];
          $.each(settings.itsContactMap, function (index, item) {
            // Create the map coords and map options.
            var latlng = new google.maps.LatLng(item.lat, item.lon);

            // Drop a marker at the specified position.
            marker = new google.maps.Marker({
              position: latlng,
              optimized: false,
              icon: image,
              map: google_map_field_map
            });
            markers.push(marker);
          });

          var bounds = new google.maps.LatLngBounds();
          for (var i = 0; i < markers.length; i++) {
            bounds.extend(markers[i].getPosition());
          }
          google_map_field_map.fitBounds(bounds);
        }
      }
    }
  };

})(jQuery);
