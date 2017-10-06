<?php
/**
 * @file
 * its_languages.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function its_languages_locale_default_languages() {
  $languages = array();

  // Exported language: en.
  $languages['en'] = array(
    'language' => 'en',
    'name' => 'English',
    'native' => 'English',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'en',
    'weight' => -8,
  );
  // Exported language: ru.
  $languages['ru'] = array(
    'language' => 'ru',
    'name' => 'Russian',
    'native' => 'Русский',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'ru',
    'weight' => -10,
  );
  // Exported language: ua.
  $languages['ua'] = array(
    'language' => 'ua',
    'name' => 'Ukraine',
    'native' => 'Украинский',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'ua',
    'weight' => -9,
  );
  return $languages;
}
