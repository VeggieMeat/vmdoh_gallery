<?php
/**
 * @file
 * vmdoh_gallery.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function vmdoh_gallery_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'vmdoh_gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'VMDOH Gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No Images';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'There are currently no images in this gallery.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html_wysiwyg_';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Relationship: Content: Gallery (field_vmdoh_gallery_reference) */
  $handler->display->display_options['relationships']['field_vmdoh_gallery_reference_nid']['id'] = 'field_vmdoh_gallery_reference_nid';
  $handler->display->display_options['relationships']['field_vmdoh_gallery_reference_nid']['table'] = 'field_data_field_vmdoh_gallery_reference';
  $handler->display->display_options['relationships']['field_vmdoh_gallery_reference_nid']['field'] = 'field_vmdoh_gallery_reference_nid';
  $handler->display->display_options['relationships']['field_vmdoh_gallery_reference_nid']['required'] = 1;
  $handler->display->display_options['relationships']['field_vmdoh_gallery_reference_nid']['delta'] = '-1';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_vmdoh_gallery_image']['id'] = 'field_vmdoh_gallery_image';
  $handler->display->display_options['fields']['field_vmdoh_gallery_image']['table'] = 'field_data_field_vmdoh_gallery_image';
  $handler->display->display_options['fields']['field_vmdoh_gallery_image']['field'] = 'field_vmdoh_gallery_image';
  $handler->display->display_options['fields']['field_vmdoh_gallery_image']['label'] = '';
  $handler->display->display_options['fields']['field_vmdoh_gallery_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_vmdoh_gallery_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_vmdoh_gallery_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_vmdoh_gallery_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_vmdoh_gallery_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_vmdoh_gallery_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_vmdoh_gallery_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_vmdoh_gallery_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_vmdoh_gallery_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_vmdoh_gallery_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_vmdoh_gallery_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_vmdoh_gallery_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_vmdoh_gallery_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_vmdoh_gallery_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vmdoh_gallery_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_vmdoh_gallery_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_vmdoh_gallery_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_vmdoh_gallery_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_vmdoh_gallery_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_vmdoh_gallery_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_vmdoh_gallery_image']['settings'] = array(
    'colorbox_node_style' => 'thumbnail',
    'colorbox_image_style' => 'large',
    'colorbox_gallery' => 'page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_vmdoh_gallery_image']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_vmdoh_gallery_reference_nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'vmdoh_gallery_image' => 'vmdoh_gallery_image',
  );

  /* Display: Gallery Images */
  $handler = $view->new_display('panel_pane', 'Gallery Images', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $export['vmdoh_gallery'] = $view;

  return $export;
}
