<?php
/**
 * @file
 * slider.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function slider_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-slide-field_slide'
  $field_instances['node-slide-field_slide'] = array(
    'bundle' => 'slide',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'caption' => FALSE,
          'image_link' => '',
          'image_style' => '',
          'optionset' => 'default',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'caption' => FALSE,
          'image_link' => '',
          'image_style' => '',
          'optionset' => 'default',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_slide',
    'label' => 'Slide',
    'required' => 1,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => 0,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 0,
        'manualcrop_require_cropping' => array(
          'slider' => 'slider',
        ),
        'manualcrop_styles_list' => array(
          'slider' => 'slider',
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
        'preview_image_style' => '',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Slide');

  return $field_instances;
}
