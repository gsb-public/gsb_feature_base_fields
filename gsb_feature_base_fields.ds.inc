<?php
/**
 * @file
 * gsb_feature_base_fields.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function gsb_feature_base_fields_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'teaser';
  $ds_view_mode->label = 'Teaser';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $export['teaser'] = $ds_view_mode;

  return $export;
}
