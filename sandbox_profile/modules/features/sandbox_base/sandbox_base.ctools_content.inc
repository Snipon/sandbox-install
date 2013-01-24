<?php
/**
 * @file
 * sandbox_base.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function sandbox_base_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'textfill';
  $content->admin_title = 'Text fill';
  $content->admin_description = '';
  $content->category = '';
  $content->settings = array(
    'admin_title' => 'Text fill',
    'title' => 'This is a title',
    'body' => 'Etiam porta sem malesuada magna mollis euismod. Maecenas sed diam eget risus varius blandit sit amet non magna. Maecenas sed diam eget risus varius blandit sit amet non magna. Integer posuere erat a ante venenatis dapibus posuere velit aliquet. Cras mattis consectetur purus sit amet fermentum.

Praesent commodo cursus magna, vel scelerisque nisl consectetur et. Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus. Vestibulum id ligula porta felis euismod semper. Maecenas faucibus mollis interdum. Nullam id dolor id nibh ultricies vehicula ut id elit. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus.',
    'format' => 'plain_text',
    'substitute' => 1,
  );
  $export['textfill'] = $content;

  return $export;
}
