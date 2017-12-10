<?php
/**
 * @file
 * its_contact.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function its_contact_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_about_banner|node|about|form';
  $field_group->group_name = 'group_about_banner';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'about';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Banner',
    'weight' => '4',
    'children' => array(
      0 => 'field_about_banner',
      1 => 'field_banner_text',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-about-banner field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_about_banner|node|about|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_about_branch|node|about|form';
  $field_group->group_name = 'group_about_branch';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'about';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Branch',
    'weight' => '6',
    'children' => array(
      0 => 'field_about_map',
      1 => 'field_about_branch_list_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-about-branch field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_about_branch|node|about|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_about_main|node|about|form';
  $field_group->group_name = 'group_about_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'about';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_about_image',
      2 => 'field_about_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-about-main field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_about_main|node|about|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_address|node|phones|form';
  $field_group->group_name = 'group_contact_address';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'phones';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contacts',
    'weight' => '4',
    'children' => array(
      0 => 'field_contact_address',
      1 => 'field_contact_map',
      2 => 'field_contact_phones',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contact-address field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_contact_address|node|phones|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_map|node|phones|form';
  $field_group->group_name = 'group_contact_map';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'phones';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Map',
    'weight' => '6',
    'children' => array(
      0 => 'field_map_title',
      1 => 'field_contact_map',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contact-map field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_contact_map|node|phones|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_top|node|phones|form';
  $field_group->group_name = 'group_contact_top';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'phones';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Top',
    'weight' => '3',
    'children' => array(
      0 => 'field_phone_description',
      1 => 'field_contact_phone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Top',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-contact-top field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_contact_top|node|phones|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_social|node|phones|form';
  $field_group->group_name = 'group_social';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'phones';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Social',
    'weight' => '5',
    'children' => array(
      0 => 'field_facebook',
      1 => 'field_instagram',
      2 => 'field_youtube',
      3 => 'field_google',
      4 => 'field_googleplus',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Social',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-social field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_social|node|phones|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Banner');
  t('Branch');
  t('Contacts');
  t('Main');
  t('Map');
  t('Social');
  t('Top');

  return $field_groups;
}
