<?php
/**
 * @file
 * gsb_feature_base_fields.features.hierarchical_select.inc
 */

/**
 * Implements hook_hierarchical_select_default_configs().
 */
function gsb_feature_base_fields_hierarchical_select_default_configs() {
$configs = array();
$config = array(
  'config_id'       => 'taxonomy-106',
  'save_lineage'    => 1,
  'enforce_deepest' => 0,
  'entity_count'    => 0,
  'require_entity'  => 0,
  'resizable'       => 0,
  'level_labels' => array(
    'status' => 0,
    'labels' => array(
      0 => '',
    ),
  ),
  'dropbox' => array(
    'status'    => 1,
    'title'     => 'All selections',
    'limit'     => 0,
    'reset_hs'  => 1,
  ),
  'editability' => array(
    'status' => 0,
    'item_types' => array(
      0 => '',
    ),
    'allowed_levels' => array(
      0 => 1,
    ),
    'allow_new_levels' => 0,
    'max_levels'       => 0,
  ),
);

$configs['taxonomy-106'] = $config;
$config = array(
  'config_id'       => 'taxonomy-116',
  'save_lineage'    => 0,
  'enforce_deepest' => 0,
  'entity_count'    => 0,
  'require_entity'  => 0,
  'resizable'       => 1,
  'level_labels' => array(
    'status' => 0,
    'labels' => array(
      0 => '',
    ),
  ),
  'dropbox' => array(
    'status'    => 1,
    'title'     => 'All selections',
    'limit'     => 0,
    'reset_hs'  => 1,
  ),
  'editability' => array(
    'status' => 0,
    'item_types' => array(
      0 => '',
    ),
    'allowed_levels' => array(
      0 => 1,
    ),
    'allow_new_levels' => 0,
    'max_levels'       => 3,
  ),
);

$configs['taxonomy-116'] = $config;
$config = array(
  'config_id'       => 'taxonomy-131',
  'save_lineage'    => 1,
  'enforce_deepest' => 0,
  'entity_count'    => 0,
  'require_entity'  => 0,
  'resizable'       => 0,
  'level_labels' => array(
    'status' => 0,
    'labels' => array(
      0 => '',
      1 => '',
    ),
  ),
  'dropbox' => array(
    'status'    => 1,
    'title'     => 'All selections',
    'limit'     => 0,
    'reset_hs'  => 1,
  ),
  'editability' => array(
    'status' => 0,
    'item_types' => array(
      0 => '',
      1 => '',
    ),
    'allowed_levels' => array(
      0 => 1,
      1 => 1,
    ),
    'allow_new_levels' => 0,
    'max_levels'       => 1,
  ),
);

$configs['taxonomy-131'] = $config;
$config = array(
  'config_id'       => 'taxonomy-136',
  'save_lineage'    => 1,
  'enforce_deepest' => 0,
  'entity_count'    => 0,
  'require_entity'  => 0,
  'resizable'       => 0,
  'level_labels' => array(
    'status' => 0,
    'labels' => array(
      0 => '',
    ),
  ),
  'dropbox' => array(
    'status'    => 1,
    'title'     => 'All selections',
    'limit'     => 0,
    'reset_hs'  => 1,
  ),
  'editability' => array(
    'status' => 0,
    'item_types' => array(
      0 => '',
    ),
    'allowed_levels' => array(
      0 => 1,
    ),
    'allow_new_levels' => 0,
    'max_levels'       => 0,
  ),
);

$configs['taxonomy-136'] = $config;
$config = array(
  'config_id'       => 'taxonomy-141',
  'save_lineage'    => 1,
  'enforce_deepest' => 0,
  'entity_count'    => 0,
  'require_entity'  => 0,
  'resizable'       => 0,
  'level_labels' => array(
    'status' => 0,
    'labels' => array(
    ),
  ),
  'dropbox' => array(
    'status'    => 1,
    'title'     => 'All selections',
    'limit'     => 0,
    'reset_hs'  => 1,
  ),
  'editability' => array(
    'status' => 0,
    'item_types' => array(
    ),
    'allowed_levels' => array(
    ),
    'allow_new_levels' => 0,
    'max_levels'       => 0,
  ),
);

$configs['taxonomy-141'] = $config;
$config = array(
  'config_id'       => 'taxonomy-146',
  'save_lineage'    => 1,
  'enforce_deepest' => 0,
  'entity_count'    => 0,
  'require_entity'  => 0,
  'resizable'       => 0,
  'level_labels' => array(
    'status' => 0,
    'labels' => array(
      0 => '',
      1 => '',
    ),
  ),
  'dropbox' => array(
    'status'    => 1,
    'title'     => 'All selections',
    'limit'     => 0,
    'reset_hs'  => 1,
  ),
  'editability' => array(
    'status' => 0,
    'item_types' => array(
      0 => '',
      1 => '',
    ),
    'allowed_levels' => array(
      0 => 1,
      1 => 1,
    ),
    'allow_new_levels' => 0,
    'max_levels'       => 1,
  ),
);

$configs['taxonomy-146'] = $config;
$config = array(
  'config_id'       => 'taxonomy-156',
  'save_lineage'    => 1,
  'enforce_deepest' => 0,
  'entity_count'    => 0,
  'require_entity'  => 0,
  'resizable'       => 0,
  'level_labels' => array(
    'status' => 0,
    'labels' => array(
      0 => '',
      1 => '',
      2 => '',
    ),
  ),
  'dropbox' => array(
    'status'    => 1,
    'title'     => 'All selections',
    'limit'     => 0,
    'reset_hs'  => 1,
  ),
  'editability' => array(
    'status' => 0,
    'item_types' => array(
      0 => '',
      1 => '',
      2 => '',
    ),
    'allowed_levels' => array(
      0 => 1,
      1 => 1,
      2 => 1,
    ),
    'allow_new_levels' => 0,
    'max_levels'       => 2,
  ),
);

$configs['taxonomy-156'] = $config;
$config = array(
  'config_id'       => 'taxonomy-166',
  'save_lineage'    => 1,
  'enforce_deepest' => 0,
  'entity_count'    => 0,
  'require_entity'  => 0,
  'resizable'       => 0,
  'level_labels' => array(
    'status' => 0,
    'labels' => array(
      0 => '',
    ),
  ),
  'dropbox' => array(
    'status'    => 1,
    'title'     => 'All selections',
    'limit'     => 0,
    'reset_hs'  => 1,
  ),
  'editability' => array(
    'status' => 0,
    'item_types' => array(
      0 => '',
    ),
    'allowed_levels' => array(
      0 => 1,
    ),
    'allow_new_levels' => 0,
    'max_levels'       => 0,
  ),
);

$configs['taxonomy-166'] = $config;
return $configs;
}
