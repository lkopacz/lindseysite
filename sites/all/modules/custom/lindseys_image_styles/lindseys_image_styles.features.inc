<?php
/**
 * @file
 * lindseys_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function lindseys_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: slider.
  $styles['slider'] = array(
    'label' => 'Slider',
    'effects' => array(
      1 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 945,
          'height' => 400,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'slider',
        ),
        'weight' => 0,
      ),
    ),
  );

  return $styles;
}
