<?php
/**
 * @file
 * gsb_feature_base_fields.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gsb_feature_base_fields_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_name|field_collection_item|field_faculty_1|default';
  $field_group->group_name = 'group_wrapper_name';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_faculty_1';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Name wrapper',
    'weight' => '3',
    'children' => array(
      0 => 'field_other_name',
    ),
    'format_type' => 'gsb_field_formatter_group_link_to_field',
    'format_settings' => array(
      'label' => 'Name wrapper',
      'instance_settings' => array(
        'field_name' => 'field_link_single',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_name|field_collection_item|field_faculty_1|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_name|field_collection_item|field_faculty_2|default';
  $field_group->group_name = 'group_wrapper_name';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_faculty_2';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Name wrapper',
    'weight' => '3',
    'children' => array(
      0 => 'field_other_name',
    ),
    'format_type' => 'gsb_field_formatter_group_link_to_field',
    'format_settings' => array(
      'label' => 'Name wrapper',
      'instance_settings' => array(
        'field_name' => 'field_link_single',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_name|field_collection_item|field_faculty_2|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_name|field_collection_item|field_faculty_directors|default';
  $field_group->group_name = 'group_wrapper_name';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_faculty_directors';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Name wrapper',
    'weight' => '2',
    'children' => array(
      0 => 'field_other_name',
    ),
    'format_type' => 'gsb_field_formatter_group_link_to_field',
    'format_settings' => array(
      'label' => 'Name wrapper',
      'instance_settings' => array(
        'field_name' => 'field_link_single',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_name|field_collection_item|field_faculty_directors|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_name|field_collection_item|field_guest_speakers_advisors_fc|default';
  $field_group->group_name = 'group_wrapper_name';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_guest_speakers_advisors_fc';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Name wrapper',
    'weight' => '3',
    'children' => array(
      0 => 'field_other_name',
    ),
    'format_type' => 'gsb_field_formatter_group_link_to_field',
    'format_settings' => array(
      'label' => 'Name wrapper',
      'instance_settings' => array(
        'field_name' => 'field_link_single',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_name|field_collection_item|field_guest_speakers_advisors_fc|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_photo|field_collection_item|field_faculty_1|default';
  $field_group->group_name = 'group_wrapper_photo';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_faculty_1';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Photo wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_image_single_public',
    ),
    'format_type' => 'gsb_field_formatter_group_link_to_field',
    'format_settings' => array(
      'label' => 'Photo wrapper',
      'instance_settings' => array(
        'field_name' => 'field_link_single',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_photo|field_collection_item|field_faculty_1|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_photo|field_collection_item|field_faculty_2|default';
  $field_group->group_name = 'group_wrapper_photo';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_faculty_2';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Photo wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_image_single_public',
    ),
    'format_type' => 'gsb_field_formatter_group_link_to_field',
    'format_settings' => array(
      'label' => 'Photo wrapper',
      'instance_settings' => array(
        'field_name' => 'field_link_single',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_photo|field_collection_item|field_faculty_2|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_photo|field_collection_item|field_faculty_directors|default';
  $field_group->group_name = 'group_wrapper_photo';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_faculty_directors';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Photo wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_image_single_public',
    ),
    'format_type' => 'gsb_field_formatter_group_link_to_field',
    'format_settings' => array(
      'label' => 'Photo wrapper',
      'instance_settings' => array(
        'field_name' => 'field_link_single',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_photo|field_collection_item|field_faculty_directors|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_photo|field_collection_item|field_guest_speakers_advisors_fc|default';
  $field_group->group_name = 'group_wrapper_photo';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_guest_speakers_advisors_fc';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Photo wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_image_single_public',
    ),
    'format_type' => 'gsb_field_formatter_group_link_to_field',
    'format_settings' => array(
      'label' => 'Photo wrapper',
      'instance_settings' => array(
        'field_name' => 'field_link_single',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_photo|field_collection_item|field_guest_speakers_advisors_fc|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Name wrapper');
  t('Photo wrapper');

  return $field_groups;
}
