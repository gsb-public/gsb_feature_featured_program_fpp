<?php
/**
 * @file
 * gsb_feature_featured_program_fpp.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gsb_feature_featured_program_fpp_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_fieldable_panels_pane__featured_program';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'preview' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'compact' => array(
        'custom_settings' => FALSE,
      ),
      'expanded' => array(
        'custom_settings' => FALSE,
      ),
      'alumni_featured_content' => array(
        'custom_settings' => FALSE,
      ),
      'megamenu' => array(
        'custom_settings' => FALSE,
      ),
      'people_fpp' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'redirect' => array(
          'weight' => '5',
        ),
      ),
      'display' => array(
        'title' => array(
          'default' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
        ),
        'gsb_time_commitment' => array(
          'default' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
        ),
        'gsb_program_instance' => array(
          'default' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_fieldable_panels_pane__featured_program'] = $strongarm;

  return $export;
}
