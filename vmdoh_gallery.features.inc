<?php
/**
 * @file
 * vmdoh_gallery.features.inc
 */

/**
 * Implements hook_views_api().
 */
function vmdoh_gallery_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function vmdoh_gallery_node_info() {
  $items = array(
    'vmdoh_gallery' => array(
      'name' => t('Gallery'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'vmdoh_gallery_image' => array(
      'name' => t('Gallery Image'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
