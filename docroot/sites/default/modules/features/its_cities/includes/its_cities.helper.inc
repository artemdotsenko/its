<?php
/**
 * @file
 * ITS Cities helper function.
 */

/**
 * Get city code from term tid.
 *
 * @param int $tid
 *   Taxonomy term id.
 *
 * @return string
 *   City code or empty string.
 */
function its_cities_get_city_code($tid) {
  $code = NULL;

  if ($tid) {
    $term = taxonomy_term_load($tid);
    $code = trim(strip_tags($term->description));
  }

  return $code;
}

/**
 * Get city name by tid.
 *
 * @param int $tid
 *   Taxonomy term id.
 *
 * @return string
 *   City name or empty string.
 */
function its_cities_get_city_name($tid) {
  $city = '';

  $term = taxonomy_term_load($tid);
  if ($term) {
    $city = $term->name;
  }

  return $city;
}

/**
 * Get current city.
 *
 * @return int
 *   Current city taxonomy term id.
 */
function its_cities_get_current_city() {
  $tid = 0;

  if (isset($_SESSION['its_city_tid']) && $_SESSION['its_city_tid']) {
    $tid = $_SESSION['its_city_tid'];
  }
  else {
    $tid = its_cities_get_default_city();
  }
  return $tid;
}

/**
 * Set current city.
 *
 * @param int
 *   Optional. City taxonomy term id.
 * @param string
 *   Optional. City code to set.
 */
function its_cities_set_city($tid = NULL, $code = NULL) {
  if (!$code) {
    $code = 'mk';
  }
  if ($tid) {
    $_SESSION['its_city_tid'] = $tid;
  }
  else {
    $_SESSION['its_city_tid'] = its_cities_get_default_city($code);
  }
}

/**
 * Get default city.
 *
 * @param string
 *   Optional. City code.
 *
 * @return int
 *   Default city term id.
 */
function its_cities_get_default_city($code = NULL) {
  global $language;

  if (!$code) {
    $code = 'mk';
  }

  $tid = 0;

  $voc = taxonomy_vocabulary_machine_name_load(ITS_CITIES_VOC_NAME);
  $terms = entity_load('taxonomy_term', FALSE, array('vid' => $voc->vid));

  foreach ($terms as $term) {
    if ($term->language == $language->language) {
      $desc = trim(strip_tags($term->description));
      if ($code == $desc) {
        $tid = $term->tid;
        break;
      }
    }
  }
  return $tid;
}

/**
 * Get the list of cities codes.
 *
 * @return array
 *   Array key = code, value = tid.
 */
function its_cities_get_cities() {
  global $language;
  $cities = array();

  $voc = taxonomy_vocabulary_machine_name_load(ITS_CITIES_VOC_NAME);
  $terms = entity_load('taxonomy_term', FALSE, array('vid' => $voc->vid));
  foreach ($terms as $term) {
    if ($term->language == $language->language) {
      $code = trim(strip_tags($term->description));
      if ($code) {
        $cities[$code] = $term->tid;
      }
    }
  }

  return $cities;
}

/**
 * Switch city language.
 */
function its_cities_switch_city_language() {
  global $language;

  $city = its_cities_get_current_city();
  $term = taxonomy_term_load($city);
  if ($term->language != $language->language) {
    $code = its_cities_get_city_code($city);
    its_cities_set_city(NULL, $code);
  }
}
