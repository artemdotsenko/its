<?php
/**
 * @file
 * its_master.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function its_master_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'footer';
  $context->description = 'Footer Blocks';
  $context->tag = 'blocks';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-its_class-block_classes_left' => array(
          'module' => 'views',
          'delta' => 'its_class-block_classes_left',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Footer Blocks');
  t('blocks');
  $export['footer'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'topline';
  $context->description = 'Topline blocks';
  $context->tag = 'blocks';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'its_cities-city_selector' => array(
          'module' => 'its_cities',
          'delta' => 'city_selector',
          'region' => 'topline',
          'weight' => '-10',
        ),
        'its_languages-language_selector' => array(
          'module' => 'its_languages',
          'delta' => 'language_selector',
          'region' => 'topline',
          'weight' => '-9',
        ),
        'views-its_phones-block_phones_list' => array(
          'module' => 'views',
          'delta' => 'its_phones-block_phones_list',
          'region' => 'topline',
          'weight' => '-8',
        ),
        'its_social-its_social_links' => array(
          'module' => 'its_social',
          'delta' => 'its_social_links',
          'region' => 'topline',
          'weight' => '-7',
        ),
        'its_contact-its_contact_back_call' => array(
          'module' => 'its_contact',
          'delta' => 'its_contact_back_call',
          'region' => 'topline',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Topline blocks');
  t('blocks');
  $export['topline'] = $context;

  return $export;
}
