<?php
/**
 * @file
 * its_contact.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function its_contact_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'advantages';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Advantages';
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Icon */
  $handler->display->display_options['fields']['field_adv_icon']['id'] = 'field_adv_icon';
  $handler->display->display_options['fields']['field_adv_icon']['table'] = 'field_data_field_adv_icon';
  $handler->display->display_options['fields']['field_adv_icon']['field'] = 'field_adv_icon';
  $handler->display->display_options['fields']['field_adv_icon']['label'] = '';
  $handler->display->display_options['fields']['field_adv_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_adv_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_adv_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Sort criterion: Taxonomy term: Вес */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'advantages' => 'advantages',
  );

  /* Display: Advantages */
  $handler = $view->new_display('panel_pane', 'Advantages', 'panel_pane_advantages');
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

  /* Display: Adv in Num */
  $handler = $view->new_display('panel_pane', 'Adv in Num', 'panel_pane_adv_num');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Имя */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'adv_num' => 'adv_num',
  );
  $handler->display->display_options['pane_category']['name'] = 'ITS';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['advantages'] = $view;

  $view = new view();
  $view->name = 'its_contacts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'ITS Contacts';
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['label'] = '';
  $handler->display->display_options['fields']['field_city']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_city']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_city']['delta_offset'] = '0';
  /* Field: Content: Main Phone Number */
  $handler->display->display_options['fields']['field_contact_phone']['id'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['table'] = 'field_data_field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['field'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['label'] = '';
  $handler->display->display_options['fields']['field_contact_phone']['element_label_colon'] = FALSE;
  /* Field: Content: Phones */
  $handler->display->display_options['fields']['field_contact_phones']['id'] = 'field_contact_phones';
  $handler->display->display_options['fields']['field_contact_phones']['table'] = 'field_data_field_contact_phones';
  $handler->display->display_options['fields']['field_contact_phones']['field'] = 'field_contact_phones';
  $handler->display->display_options['fields']['field_contact_phones']['label'] = '';
  $handler->display->display_options['fields']['field_contact_phones']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_phones']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_contact_phones']['multi_type'] = 'ul';
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_contact_address']['id'] = 'field_contact_address';
  $handler->display->display_options['fields']['field_contact_address']['table'] = 'field_data_field_contact_address';
  $handler->display->display_options['fields']['field_contact_address']['field'] = 'field_contact_address';
  $handler->display->display_options['fields']['field_contact_address']['label'] = '';
  $handler->display->display_options['fields']['field_contact_address']['element_label_colon'] = FALSE;
  /* Field: Content: Map */
  $handler->display->display_options['fields']['field_contact_map']['id'] = 'field_contact_map';
  $handler->display->display_options['fields']['field_contact_map']['table'] = 'field_data_field_contact_map';
  $handler->display->display_options['fields']['field_contact_map']['field'] = 'field_contact_map';
  $handler->display->display_options['fields']['field_contact_map']['label'] = '';
  $handler->display->display_options['fields']['field_contact_map']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_map']['click_sort_column'] = 'lat';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'phones' => 'phones',
  );

  /* Display: Contacts List */
  $handler = $view->new_display('panel_pane', 'Contacts List', 'panel_pane_contacts');
  $handler->display->display_options['field_language_add_to_query'] = 0;
  $handler->display->display_options['pane_category']['name'] = 'ITS';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['its_contacts'] = $view;

  $view = new view();
  $view->name = 'its_phones';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'ITS Phones';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'dropdown';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Main Phone Number */
  $handler->display->display_options['fields']['field_contact_phone']['id'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['table'] = 'field_data_field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['field'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['label'] = '';
  $handler->display->display_options['fields']['field_contact_phone']['element_type'] = '0';
  $handler->display->display_options['fields']['field_contact_phone']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_contact_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_phone']['element_wrapper_type'] = '0';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_phone_description']['id'] = 'field_phone_description';
  $handler->display->display_options['fields']['field_phone_description']['table'] = 'field_data_field_phone_description';
  $handler->display->display_options['fields']['field_phone_description']['field'] = 'field_phone_description';
  $handler->display->display_options['fields']['field_phone_description']['label'] = '';
  $handler->display->display_options['fields']['field_phone_description']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_phone_description']['alter']['text'] = '<ul class="dropdown-menu" aria-labelledby="dropdownPhone">
<li>[field_phone_description]</li>
</ul>';
  $handler->display->display_options['fields']['field_phone_description']['element_type'] = '0';
  $handler->display->display_options['fields']['field_phone_description']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_phone_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone_description']['element_wrapper_type'] = '0';
  /* Sort criterion: Content: Promoted to front page */
  $handler->display->display_options['sorts']['promote']['id'] = 'promote';
  $handler->display->display_options['sorts']['promote']['table'] = 'node';
  $handler->display->display_options['sorts']['promote']['field'] = 'promote';
  $handler->display->display_options['sorts']['promote']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'phones' => 'phones',
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

  /* Display: Phones */
  $handler = $view->new_display('panel_pane', 'Phones', 'panel_phones_list');
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_phones_list');
  $export['its_phones'] = $view;

  return $export;
}
