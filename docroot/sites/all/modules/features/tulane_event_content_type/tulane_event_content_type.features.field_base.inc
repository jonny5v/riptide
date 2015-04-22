<?php
/**
 * @file
 * tulane_event_content_type.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function tulane_event_content_type_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_location'
  $field_bases['field_location'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_location',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Downtown Campus' => 'Downtown Campus',
        'Online' => 'Online',
        'Mississippi Campus' => 'Mississippi Campus',
        'Other' => 'Other',
        'Uptown Campus' => 'Uptown Campus',
        'Elmwood Campus' => 'Elmwood Campus',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
