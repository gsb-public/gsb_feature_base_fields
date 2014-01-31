<?php

/**
 * @file
 * Hooks provided by the GSB Feature Base Fields module.
 */

/**
 * Declare node types that should have faculty author fields added.
 */
function hook_gsb_feature_base_fields_faculty_author_types() {
  return array(
    'event',
    'blog',
  );
}
