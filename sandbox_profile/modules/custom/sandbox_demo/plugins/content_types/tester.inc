<?php

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('Tester pane'),
  'icon' => 'reload.png',
  'description' => t('Show a rating and share block.'),
  'category' => t('Sandbox'),
  'defaults' => array(
    'link' => TRUE,
  ),
  'hook theme' => 'ctools_tester_content_type_theme',
);

/**
 * Render the custom content type.
 */
function sandbox_demo_tester_content_type_render($subtype, $conf, $panel_args, $context) {

  $variables = array(
    'stuff' => t("There's no limit of what we can output in this variable."),
  );

  $output = theme('tester_pane', $variables);

  // Build the content type block.
  $block = new stdClass();
  $block->title = 'Test!';
  $block->content = $output;

  return $block;
}

function ctools_tester_content_type_theme(&$theme, $plugin) {
  $theme['tester_pane'] = array(
    'arguments' => array('stuff' => NULL),
    'path' => $plugin['path'],
    'template' => 'tester_pane',
  );
}
