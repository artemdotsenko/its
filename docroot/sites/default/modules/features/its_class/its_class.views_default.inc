<?php
/**
 * @file
 * its_class.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function its_class_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'its_class';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'ITS Class';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'ITS Class';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_class_position']['id'] = 'field_class_position';
  $handler->display->display_options['fields']['field_class_position']['table'] = 'field_data_field_class_position';
  $handler->display->display_options['fields']['field_class_position']['field'] = 'field_class_position';
  $handler->display->display_options['fields']['field_class_position']['label'] = '';
  $handler->display->display_options['fields']['field_class_position']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_class_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_class_position']['type'] = 'list_key';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Название */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Icon */
  $handler->display->display_options['fields']['field_class_icon']['id'] = 'field_class_icon';
  $handler->display->display_options['fields']['field_class_icon']['table'] = 'field_data_field_class_icon';
  $handler->display->display_options['fields']['field_class_icon']['field'] = 'field_class_icon';
  $handler->display->display_options['fields']['field_class_icon']['label'] = '';
  $handler->display->display_options['fields']['field_class_icon']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_class_icon']['element_type'] = '0';
  $handler->display->display_options['fields']['field_class_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_class_icon']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_class_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_class_icon']['settings'] = array(
    'image_style' => 'front_class',
    'image_link' => '',
  );
  /* Field: Content: Short Description */
  $handler->display->display_options['fields']['field_class_short_description']['id'] = 'field_class_short_description';
  $handler->display->display_options['fields']['field_class_short_description']['table'] = 'field_data_field_class_short_description';
  $handler->display->display_options['fields']['field_class_short_description']['field'] = 'field_class_short_description';
  $handler->display->display_options['fields']['field_class_short_description']['label'] = '';
  $handler->display->display_options['fields']['field_class_short_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_class_short_description']['element_type'] = '0';
  $handler->display->display_options['fields']['field_class_short_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_class_short_description']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_class_short_description']['settings'] = array(
    'trim_length' => '30',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[path]" class="position-[field_class_position] clearfix">
<span class="title-icon-wrapper clearfix"><span class="title">[title]</span><span class="icon">[field_class_icon]</span></span><span class="short-description-wrapper clearfix">[field_class_short_description]</span>
</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Weight (field_class_weight) */
  $handler->display->display_options['sorts']['field_class_weight_value']['id'] = 'field_class_weight_value';
  $handler->display->display_options['sorts']['field_class_weight_value']['table'] = 'field_data_field_class_weight';
  $handler->display->display_options['sorts']['field_class_weight_value']['field'] = 'field_class_weight_value';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Position (field_class_position) */
  $handler->display->display_options['arguments']['field_class_position_value']['id'] = 'field_class_position_value';
  $handler->display->display_options['arguments']['field_class_position_value']['table'] = 'field_data_field_class_position';
  $handler->display->display_options['arguments']['field_class_position_value']['field'] = 'field_class_position_value';
  $handler->display->display_options['arguments']['field_class_position_value']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_class_position_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_class_position_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_class_position_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_class_position_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_class_position_value']['limit'] = '0';
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
    'class' => 'class',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  /* Filter criterion: Content: City (field_city) */
  $handler->display->display_options['filters']['field_city_tid']['id'] = 'field_city_tid';
  $handler->display->display_options['filters']['field_city_tid']['table'] = 'field_data_field_city';
  $handler->display->display_options['filters']['field_city_tid']['field'] = 'field_city_tid';
  $handler->display->display_options['filters']['field_city_tid']['value'] = array(
    6 => '6',
  );
  $handler->display->display_options['filters']['field_city_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_city_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_city_tid']['vocabulary'] = 'city';

  /* Display: Classes List */
  $handler = $view->new_display('panel_pane', 'Classes List', 'panel_class_list');
  $handler->display->display_options['pane_category']['name'] = 'ITS';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_class_position_value' => array(
      'type' => 'user',
      'context' => 'entity:field_collection_item.uuid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Position (field_class_position)',
    ),
  );

  /* Display: Foot List Left */
  $handler = $view->new_display('block', 'Foot List Left', 'block_classes_left');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Название */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'class' => 'class',
  );
  /* Filter criterion: Content: Position (field_class_position) */
  $handler->display->display_options['filters']['field_class_position_value']['id'] = 'field_class_position_value';
  $handler->display->display_options['filters']['field_class_position_value']['table'] = 'field_data_field_class_position';
  $handler->display->display_options['filters']['field_class_position_value']['field'] = 'field_class_position_value';
  $handler->display->display_options['filters']['field_class_position_value']['value'] = array(
    'left' => 'left',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  /* Filter criterion: Content: City (field_city) */
  $handler->display->display_options['filters']['field_city_tid']['id'] = 'field_city_tid';
  $handler->display->display_options['filters']['field_city_tid']['table'] = 'field_data_field_city';
  $handler->display->display_options['filters']['field_city_tid']['field'] = 'field_city_tid';
  $handler->display->display_options['filters']['field_city_tid']['value'] = array(
    6 => '6',
  );
  $handler->display->display_options['filters']['field_city_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_city_tid']['vocabulary'] = 'city';
  $handler->display->display_options['filters']['field_city_tid']['hierarchy'] = 1;

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_classes_right');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Название */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'class' => 'class',
  );
  /* Filter criterion: Content: Position (field_class_position) */
  $handler->display->display_options['filters']['field_class_position_value']['id'] = 'field_class_position_value';
  $handler->display->display_options['filters']['field_class_position_value']['table'] = 'field_data_field_class_position';
  $handler->display->display_options['filters']['field_class_position_value']['field'] = 'field_class_position_value';
  $handler->display->display_options['filters']['field_class_position_value']['value'] = array(
    'right' => 'right',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  /* Filter criterion: Content: City (field_city) */
  $handler->display->display_options['filters']['field_city_tid']['id'] = 'field_city_tid';
  $handler->display->display_options['filters']['field_city_tid']['table'] = 'field_data_field_city';
  $handler->display->display_options['filters']['field_city_tid']['field'] = 'field_city_tid';
  $handler->display->display_options['filters']['field_city_tid']['value'] = array(
    6 => '6',
  );
  $handler->display->display_options['filters']['field_city_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_city_tid']['vocabulary'] = 'city';
  $handler->display->display_options['filters']['field_city_tid']['hierarchy'] = 1;
  $handler->display->display_options['displays'] = array(
    'block_classes_left' => 'block_classes_left',
    'default' => 0,
    'panel_class_list' => 0,
    'block_classes_right' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_arguments'] = FALSE;

  /* Display: All Сourses */
  $handler = $view->new_display('panel_pane', 'All Сourses', 'panel_all_courses');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Название */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Icon */
  $handler->display->display_options['fields']['field_class_icon']['id'] = 'field_class_icon';
  $handler->display->display_options['fields']['field_class_icon']['table'] = 'field_data_field_class_icon';
  $handler->display->display_options['fields']['field_class_icon']['field'] = 'field_class_icon';
  $handler->display->display_options['fields']['field_class_icon']['label'] = '';
  $handler->display->display_options['fields']['field_class_icon']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_class_icon']['element_type'] = '0';
  $handler->display->display_options['fields']['field_class_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_class_icon']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_class_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_class_icon']['settings'] = array(
    'image_style' => 'all_courses',
    'image_link' => '',
  );
  /* Field: Content: Short Description */
  $handler->display->display_options['fields']['field_class_short_description']['id'] = 'field_class_short_description';
  $handler->display->display_options['fields']['field_class_short_description']['table'] = 'field_data_field_class_short_description';
  $handler->display->display_options['fields']['field_class_short_description']['field'] = 'field_class_short_description';
  $handler->display->display_options['fields']['field_class_short_description']['label'] = '';
  $handler->display->display_options['fields']['field_class_short_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_class_short_description']['alter']['max_length'] = '35';
  $handler->display->display_options['fields']['field_class_short_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_class_short_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_class_short_description']['settings'] = array(
    'trim_length' => '50',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[path]"><span class="icon">[field_class_icon]</span><span class="title">[title]</span></span><span class="short-description-wrapper">[field_class_short_description]</span>
</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'ITS';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $export['its_class'] = $view;

  $view = new view();
  $view->name = 'its_subject';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'ITS Subject';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_subject_duration' => 'field_subject_duration',
    'field_subject_price' => 'field_subject_price',
    'path' => 'path',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_subject_duration' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_subject_price' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
    'path' => array(
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 0,
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_subject_class_target_id']['id'] = 'field_subject_class_target_id';
  $handler->display->display_options['relationships']['field_subject_class_target_id']['table'] = 'field_data_field_subject_class';
  $handler->display->display_options['relationships']['field_subject_class_target_id']['field'] = 'field_subject_class_target_id';
  $handler->display->display_options['relationships']['field_subject_class_target_id']['required'] = TRUE;
  /* Field: Content: Название */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Duration */
  $handler->display->display_options['fields']['field_subject_duration']['id'] = 'field_subject_duration';
  $handler->display->display_options['fields']['field_subject_duration']['table'] = 'field_data_field_subject_duration';
  $handler->display->display_options['fields']['field_subject_duration']['field'] = 'field_subject_duration';
  $handler->display->display_options['fields']['field_subject_duration']['label'] = '';
  $handler->display->display_options['fields']['field_subject_duration']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subject_duration']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Price */
  $handler->display->display_options['fields']['field_subject_price']['id'] = 'field_subject_price';
  $handler->display->display_options['fields']['field_subject_price']['table'] = 'field_data_field_subject_price';
  $handler->display->display_options['fields']['field_subject_price']['field'] = 'field_subject_price';
  $handler->display->display_options['fields']['field_subject_price']['label'] = '';
  $handler->display->display_options['fields']['field_subject_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subject_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['field_subject_price']['settings'] = array(
    'calculation' => FALSE,
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['path']['alter']['link_class'] = 'btn btn-sm';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_subject_class_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'subject' => 'subject',
  );
  /* Filter criterion: Content: City (field_city) */
  $handler->display->display_options['filters']['field_city_tid']['id'] = 'field_city_tid';
  $handler->display->display_options['filters']['field_city_tid']['table'] = 'field_data_field_city';
  $handler->display->display_options['filters']['field_city_tid']['field'] = 'field_city_tid';
  $handler->display->display_options['filters']['field_city_tid']['value'] = array(
    6 => '6',
  );
  $handler->display->display_options['filters']['field_city_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_city_tid']['vocabulary'] = 'city';
  $handler->display->display_options['filters']['field_city_tid']['hierarchy'] = 1;

  /* Display: Full Package */
  $handler = $view->new_display('panel_pane', 'Full Package', 'panel_pane_full_package');
  $handler->display->display_options['pane_category']['name'] = 'ITS';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
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

  /* Display: Custom Package */
  $handler = $view->new_display('attachment', 'Custom Package', 'attachment_custom_package');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Название */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Duration */
  $handler->display->display_options['fields']['field_subject_duration']['id'] = 'field_subject_duration';
  $handler->display->display_options['fields']['field_subject_duration']['table'] = 'field_data_field_subject_duration';
  $handler->display->display_options['fields']['field_subject_duration']['field'] = 'field_subject_duration';
  $handler->display->display_options['fields']['field_subject_duration']['label'] = '';
  $handler->display->display_options['fields']['field_subject_duration']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subject_duration']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Price */
  $handler->display->display_options['fields']['field_subject_price']['id'] = 'field_subject_price';
  $handler->display->display_options['fields']['field_subject_price']['table'] = 'field_data_field_subject_price';
  $handler->display->display_options['fields']['field_subject_price']['field'] = 'field_subject_price';
  $handler->display->display_options['fields']['field_subject_price']['label'] = '';
  $handler->display->display_options['fields']['field_subject_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subject_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['field_subject_price']['settings'] = array(
    'calculation' => FALSE,
  );
  $handler->display->display_options['displays'] = array(
    'panel_pane_full_package' => 'panel_pane_full_package',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Nearest Course */
  $handler = $view->new_display('panel_pane', 'Nearest Course', 'panel_pane_subject_start');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Start date */
  $handler->display->display_options['fields']['field_subject_start_date']['id'] = 'field_subject_start_date';
  $handler->display->display_options['fields']['field_subject_start_date']['table'] = 'field_data_field_subject_start_date';
  $handler->display->display_options['fields']['field_subject_start_date']['field'] = 'field_subject_start_date';
  $handler->display->display_options['fields']['field_subject_start_date']['label'] = '';
  $handler->display->display_options['fields']['field_subject_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subject_start_date']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'd.m.Y',
    'fromto' => 'both',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_subject_start_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_subject_start_date']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Start date (field_subject_start_date) */
  $handler->display->display_options['sorts']['field_subject_start_date_value']['id'] = 'field_subject_start_date_value';
  $handler->display->display_options['sorts']['field_subject_start_date_value']['table'] = 'field_data_field_subject_start_date';
  $handler->display->display_options['sorts']['field_subject_start_date_value']['field'] = 'field_subject_start_date_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'subject' => 'subject',
  );
  /* Filter criterion: Content: Start date (field_subject_start_date) */
  $handler->display->display_options['filters']['field_subject_start_date_value']['id'] = 'field_subject_start_date_value';
  $handler->display->display_options['filters']['field_subject_start_date_value']['table'] = 'field_data_field_subject_start_date';
  $handler->display->display_options['filters']['field_subject_start_date_value']['field'] = 'field_subject_start_date_value';
  $handler->display->display_options['filters']['field_subject_start_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_subject_start_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_subject_start_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_subject_start_date_value']['year_range'] = '-0:+3';
  /* Filter criterion: Content: City (field_city) */
  $handler->display->display_options['filters']['field_city_tid']['id'] = 'field_city_tid';
  $handler->display->display_options['filters']['field_city_tid']['table'] = 'field_data_field_city';
  $handler->display->display_options['filters']['field_city_tid']['field'] = 'field_city_tid';
  $handler->display->display_options['filters']['field_city_tid']['value'] = array(
    6 => '6',
  );
  $handler->display->display_options['filters']['field_city_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_city_tid']['vocabulary'] = 'city';
  $handler->display->display_options['filters']['field_city_tid']['hierarchy'] = 1;
  $handler->display->display_options['pane_category']['name'] = 'ITS';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
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

  /* Display: Duration */
  $handler = $view->new_display('panel_pane', 'Duration', 'panel_pane_course_duration');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Frequency */
  $handler->display->display_options['fields']['field_subject_frequency']['id'] = 'field_subject_frequency';
  $handler->display->display_options['fields']['field_subject_frequency']['table'] = 'field_data_field_subject_frequency';
  $handler->display->display_options['fields']['field_subject_frequency']['field'] = 'field_subject_frequency';
  $handler->display->display_options['fields']['field_subject_frequency']['label'] = '';
  $handler->display->display_options['fields']['field_subject_frequency']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subject_frequency']['element_label_colon'] = FALSE;
  /* Field: Content: Duration */
  $handler->display->display_options['fields']['field_subject_duration']['id'] = 'field_subject_duration';
  $handler->display->display_options['fields']['field_subject_duration']['table'] = 'field_data_field_subject_duration';
  $handler->display->display_options['fields']['field_subject_duration']['field'] = 'field_subject_duration';
  $handler->display->display_options['fields']['field_subject_duration']['label'] = '';
  $handler->display->display_options['fields']['field_subject_duration']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_subject_duration']['alter']['text'] = '[field_subject_duration] ч. ([field_subject_frequency])';
  $handler->display->display_options['fields']['field_subject_duration']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subject_duration']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['pane_category']['name'] = 'ITS';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
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
  $export['its_subject'] = $view;

  $view = new view();
  $view->name = 'its_teacher';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'ITS Teacher';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: User: Teacher (field_people_teacher) - reverse */
  $handler->display->display_options['relationships']['reverse_field_people_teacher_node']['id'] = 'reverse_field_people_teacher_node';
  $handler->display->display_options['relationships']['reverse_field_people_teacher_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_people_teacher_node']['field'] = 'reverse_field_people_teacher_node';
  $handler->display->display_options['relationships']['reverse_field_people_teacher_node']['required'] = TRUE;
  /* Field: User: Image */
  $handler->display->display_options['fields']['field_people_image']['id'] = 'field_people_image';
  $handler->display->display_options['fields']['field_people_image']['table'] = 'field_data_field_people_image';
  $handler->display->display_options['fields']['field_people_image']['field'] = 'field_people_image';
  $handler->display->display_options['fields']['field_people_image']['label'] = '';
  $handler->display->display_options['fields']['field_people_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_people_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_people_image']['settings'] = array(
    'image_style' => 'teacher',
    'image_link' => '',
  );
  /* Field: User: Full Name */
  $handler->display->display_options['fields']['field_people_full_name']['id'] = 'field_people_full_name';
  $handler->display->display_options['fields']['field_people_full_name']['table'] = 'field_data_field_people_full_name';
  $handler->display->display_options['fields']['field_people_full_name']['field'] = 'field_people_full_name';
  $handler->display->display_options['fields']['field_people_full_name']['label'] = '';
  $handler->display->display_options['fields']['field_people_full_name']['element_label_colon'] = FALSE;
  /* Field: User: Position */
  $handler->display->display_options['fields']['field_people_position']['id'] = 'field_people_position';
  $handler->display->display_options['fields']['field_people_position']['table'] = 'field_data_field_people_position';
  $handler->display->display_options['fields']['field_people_position']['field'] = 'field_people_position';
  $handler->display->display_options['fields']['field_people_position']['label'] = '';
  $handler->display->display_options['fields']['field_people_position']['element_label_colon'] = FALSE;
  /* Field: User: Description */
  $handler->display->display_options['fields']['field_people_description']['id'] = 'field_people_description';
  $handler->display->display_options['fields']['field_people_description']['table'] = 'field_data_field_people_description';
  $handler->display->display_options['fields']['field_people_description']['field'] = 'field_people_description';
  $handler->display->display_options['fields']['field_people_description']['label'] = '';
  $handler->display->display_options['fields']['field_people_description']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['field_people_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_people_description']['element_label_colon'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_people_teacher_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    5 => '5',
  );

  /* Display: Subject Teachers */
  $handler = $view->new_display('panel_pane', 'Subject Teachers', 'panel_pane_subject_theachers');
  $handler->display->display_options['pane_category']['name'] = 'ITS';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
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
  $export['its_teacher'] = $view;

  return $export;
}
