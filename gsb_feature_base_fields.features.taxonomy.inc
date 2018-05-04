<?php
/**
 * @file
 * gsb_feature_base_fields.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function gsb_feature_base_fields_taxonomy_default_vocabularies() {
  return array(
    'department' => array(
      'name' => 'Department',
      'machine_name' => 'department',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'field_of_study' => array(
      'name' => 'Field of Study',
      'machine_name' => 'field_of_study',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'program_category' => array(
      'name' => 'Program Category',
      'machine_name' => 'program_category',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'region_interest' => array(
      'name' => 'Region of Interest',
      'machine_name' => 'region_interest',
      'description' => 'Region of Interest taxonomy.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'seed_region' => array(
      'name' => 'Seed Region',
      'machine_name' => 'seed_region',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'time_commitment' => array(
      'name' => 'Program Time Commitment',
      'machine_name' => 'time_commitment',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
