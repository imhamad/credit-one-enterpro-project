<?php

/**
 * @file
 * Generate test elements with #states.
 */

use Drupal\webform\Entity\Webform;

/**
 * Generate test elements with #states.
 *
 * @return array
 *   An array containing test elements with #states.
 */
function webform_test_test_states_client_visible() {
  module_load_include('inc', 'webform_test', 'includes/webform_test.test_states');

  $elements = [];
  $elements['trigger'] = [
    '#type' => 'checkbox',
    '#title' => 'Displays and require elements',
  ];
  $elements += _webform_test_states('visible', [
    '#states' => [
      'visible' => [
        ':input[name="trigger"]' => [
          'checked' => TRUE,
        ],
      ],
      'required' => [
        ':input[name="trigger"]' => [
          'checked' => TRUE,
        ],
      ],
    ],
  ]);
  return $elements;
}
