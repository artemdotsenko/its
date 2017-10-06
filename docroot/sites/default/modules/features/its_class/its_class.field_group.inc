<?php
/**
 * @file
 * its_class.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function its_class_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_class_front|node|class|form';
  $field_group->group_name = 'group_class_front';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'class';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Front Page',
    'weight' => '3',
    'children' => array(
      0 => 'field_class_icon',
      1 => 'field_class_position',
      2 => 'field_class_short_description',
      3 => 'field_class_weight',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Front Page',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-class-front field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_class_front|node|class|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Front Page');

  return $field_groups;
}
