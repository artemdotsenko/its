<?php
/**
 * @file
 * its_class.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function its_class_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_1ff54451-1658-4e59-830f-5cbe3b4650af';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -3;
  $handler->conf = array(
    'title' => 'Courses',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-panel-class',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_status',
          'settings' => NULL,
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'class' => 'class',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '[its:breadcrumb_home]
[its:breadcrumb_cources]
%node:title',
    'panels_breadcrumbs_paths' => '<front>
/courses',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'class';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'top-content' => NULL,
      'bottom-content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'a219e2e8-249c-4dc6-9447-0b4a6fe4ade4';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_1ff54451-1658-4e59-830f-5cbe3b4650af';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-68d328fd-d578-40a3-bf2a-87f8c2c1f3b2';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'its_subject-panel_pane_full_package';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'nid' => '',
    ),
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '68d328fd-d578-40a3-bf2a-87f8c2c1f3b2';
  $display->content['new-68d328fd-d578-40a3-bf2a-87f8c2c1f3b2'] = $pane;
  $display->panels['left'][0] = 'new-68d328fd-d578-40a3-bf2a-87f8c2c1f3b2';
  $pane = new stdClass();
  $pane->pid = 'new-4dd542a9-8cf8-412c-82a6-a38f12bc43f4';
  $pane->panel = 'right';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'h1',
    'id' => '',
    'class' => '',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4dd542a9-8cf8-412c-82a6-a38f12bc43f4';
  $display->content['new-4dd542a9-8cf8-412c-82a6-a38f12bc43f4'] = $pane;
  $display->panels['right'][0] = 'new-4dd542a9-8cf8-412c-82a6-a38f12bc43f4';
  $pane = new stdClass();
  $pane->pid = 'new-25a64840-27dd-4848-a621-3a642fd406d0';
  $pane->panel = 'right';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '25a64840-27dd-4848-a621-3a642fd406d0';
  $display->content['new-25a64840-27dd-4848-a621-3a642fd406d0'] = $pane;
  $display->panels['right'][1] = 'new-25a64840-27dd-4848-a621-3a642fd406d0';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-4dd542a9-8cf8-412c-82a6-a38f12bc43f4';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_1ff54451-1658-4e59-830f-5cbe3b4650af'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_4e8b8737-dd23-4c8e-bfdd-7176ea5cd024';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -1;
  $handler->conf = array(
    'title' => 'Subject',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'panel-page-subject',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_status',
          'settings' => NULL,
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'subject' => 'subject',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '[its:breadcrumb_home]
[its:breadcrumb_cources]
%node:title',
    'panels_breadcrumbs_paths' => '<front>
/courses',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'subject';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top-content' => NULL,
      'content' => NULL,
      'sidebar' => NULL,
      'bottom-content' => NULL,
      'title' => NULL,
      'date' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8aef1126-aac1-4e24-bd96-e73b7f3139ce';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_4e8b8737-dd23-4c8e-bfdd-7176ea5cd024';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2375fe69-78ae-4d57-a565-014402e51721';
  $pane->panel = 'content';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2375fe69-78ae-4d57-a565-014402e51721';
  $display->content['new-2375fe69-78ae-4d57-a565-014402e51721'] = $pane;
  $display->panels['content'][0] = 'new-2375fe69-78ae-4d57-a565-014402e51721';
  $pane = new stdClass();
  $pane->pid = 'new-4e0531e7-287e-483c-ac23-1debdbffb5b8';
  $pane->panel = 'content';
  $pane->type = 'its_class_apply_links';
  $pane->subtype = 'its_class_apply_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '4e0531e7-287e-483c-ac23-1debdbffb5b8';
  $display->content['new-4e0531e7-287e-483c-ac23-1debdbffb5b8'] = $pane;
  $display->panels['content'][1] = 'new-4e0531e7-287e-483c-ac23-1debdbffb5b8';
  $pane = new stdClass();
  $pane->pid = 'new-9fc58ed5-a9d8-43a2-9984-1c24bbea6cd1';
  $pane->panel = 'date';
  $pane->type = 'views_panes';
  $pane->subtype = 'its_subject-panel_pane_subject_start';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9fc58ed5-a9d8-43a2-9984-1c24bbea6cd1';
  $display->content['new-9fc58ed5-a9d8-43a2-9984-1c24bbea6cd1'] = $pane;
  $display->panels['date'][0] = 'new-9fc58ed5-a9d8-43a2-9984-1c24bbea6cd1';
  $pane = new stdClass();
  $pane->pid = 'new-a8a6715a-b42e-4647-b39d-d92a38955b51';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'webform-client-block-102';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_language',
        'settings' => array(
          'language' => array(
            'ru' => 'ru',
            'current' => 0,
            'default' => 0,
            'no_language' => 0,
            'ua' => 0,
            'en' => 0,
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'apply-subject',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a8a6715a-b42e-4647-b39d-d92a38955b51';
  $display->content['new-a8a6715a-b42e-4647-b39d-d92a38955b51'] = $pane;
  $display->panels['sidebar'][0] = 'new-a8a6715a-b42e-4647-b39d-d92a38955b51';
  $pane = new stdClass();
  $pane->pid = 'new-6250a842-eca5-4243-8d39-a5dcdd625f6e';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'webform-client-block-101';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_language',
        'settings' => array(
          'language' => array(
            'ua' => 'ua',
            'current' => 0,
            'default' => 0,
            'no_language' => 0,
            'ru' => 0,
            'en' => 0,
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'apply-subject',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '6250a842-eca5-4243-8d39-a5dcdd625f6e';
  $display->content['new-6250a842-eca5-4243-8d39-a5dcdd625f6e'] = $pane;
  $display->panels['sidebar'][1] = 'new-6250a842-eca5-4243-8d39-a5dcdd625f6e';
  $pane = new stdClass();
  $pane->pid = 'new-48b787e2-27af-4fa9-9d62-4728b16d2f65';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'webform-client-block-102';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_language',
        'settings' => array(
          'language' => array(
            'en' => 'en',
            'current' => 0,
            'default' => 0,
            'no_language' => 0,
            'ru' => 0,
            'ua' => 0,
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'apply-subject',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '48b787e2-27af-4fa9-9d62-4728b16d2f65';
  $display->content['new-48b787e2-27af-4fa9-9d62-4728b16d2f65'] = $pane;
  $display->panels['sidebar'][2] = 'new-48b787e2-27af-4fa9-9d62-4728b16d2f65';
  $pane = new stdClass();
  $pane->pid = 'new-a98e1850-8c39-4c80-b7d6-11b2df4823e3';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'its_teacher-panel_pane_subject_theachers';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'a98e1850-8c39-4c80-b7d6-11b2df4823e3';
  $display->content['new-a98e1850-8c39-4c80-b7d6-11b2df4823e3'] = $pane;
  $display->panels['sidebar'][3] = 'new-a98e1850-8c39-4c80-b7d6-11b2df4823e3';
  $pane = new stdClass();
  $pane->pid = 'new-9cb25c87-81d0-4f41-b4c5-45f60056ac8f';
  $pane->panel = 'title';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'h1',
    'id' => '',
    'class' => '',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9cb25c87-81d0-4f41-b4c5-45f60056ac8f';
  $display->content['new-9cb25c87-81d0-4f41-b4c5-45f60056ac8f'] = $pane;
  $display->panels['title'][0] = 'new-9cb25c87-81d0-4f41-b4c5-45f60056ac8f';
  $pane = new stdClass();
  $pane->pid = 'new-2f1c8a38-fc27-47f2-a472-a241e74e6278';
  $pane->panel = 'title';
  $pane->type = 'views_panes';
  $pane->subtype = 'its_subject-panel_pane_course_duration';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2f1c8a38-fc27-47f2-a472-a241e74e6278';
  $display->content['new-2f1c8a38-fc27-47f2-a472-a241e74e6278'] = $pane;
  $display->panels['title'][1] = 'new-2f1c8a38-fc27-47f2-a472-a241e74e6278';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-9cb25c87-81d0-4f41-b4c5-45f60056ac8f';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_4e8b8737-dd23-4c8e-bfdd-7176ea5cd024'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_86e7f628-21e3-4649-a293-ebf1002f4816';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'About',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-about',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'about' => 'about',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'node_status',
          'settings' => NULL,
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '[its:breadcrumb_home]
%node:title',
    'panels_breadcrumbs_paths' => '<front>',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'about';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top-content' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom-content' => NULL,
      'top-left' => NULL,
      'top-right' => NULL,
      'bottom-left' => NULL,
      'bottom-right' => NULL,
      'banner' => NULL,
      'middle-second' => NULL,
      'full-middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '17412d63-69bd-463a-89ef-f49e4ba499ab';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_86e7f628-21e3-4649-a293-ebf1002f4816';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-647d2e59-258f-4e6d-be85-b012d3118773';
  $pane->panel = 'banner';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_about_banner';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'file_rendered',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'file_view_mode' => 'default',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '647d2e59-258f-4e6d-be85-b012d3118773';
  $display->content['new-647d2e59-258f-4e6d-be85-b012d3118773'] = $pane;
  $display->panels['banner'][0] = 'new-647d2e59-258f-4e6d-be85-b012d3118773';
  $pane = new stdClass();
  $pane->pid = 'new-af9627e5-3078-4a44-91f5-11721df1aa8c';
  $pane->panel = 'banner';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_banner_text';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'af9627e5-3078-4a44-91f5-11721df1aa8c';
  $display->content['new-af9627e5-3078-4a44-91f5-11721df1aa8c'] = $pane;
  $display->panels['banner'][1] = 'new-af9627e5-3078-4a44-91f5-11721df1aa8c';
  $pane = new stdClass();
  $pane->pid = 'new-0e79ccdc-10b0-42aa-b2e9-6afcfece85a2';
  $pane->panel = 'bottom-left';
  $pane->type = 'its_contact_multiple_map';
  $pane->subtype = 'its_contact_multiple_map';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0e79ccdc-10b0-42aa-b2e9-6afcfece85a2';
  $display->content['new-0e79ccdc-10b0-42aa-b2e9-6afcfece85a2'] = $pane;
  $display->panels['bottom-left'][0] = 'new-0e79ccdc-10b0-42aa-b2e9-6afcfece85a2';
  $pane = new stdClass();
  $pane->pid = 'new-22ad9de7-4211-4a26-85a4-fa4b9fda87c0';
  $pane->panel = 'bottom-right';
  $pane->type = 'its_contact_branch_list';
  $pane->subtype = 'its_contact_branch_list';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '22ad9de7-4211-4a26-85a4-fa4b9fda87c0';
  $display->content['new-22ad9de7-4211-4a26-85a4-fa4b9fda87c0'] = $pane;
  $display->panels['bottom-right'][0] = 'new-22ad9de7-4211-4a26-85a4-fa4b9fda87c0';
  $pane = new stdClass();
  $pane->pid = 'new-3b5f27a3-6dd1-4cf9-bdf4-5643745cc48b';
  $pane->panel = 'full-middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'advantages-panel_pane_adv_num';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3b5f27a3-6dd1-4cf9-bdf4-5643745cc48b';
  $display->content['new-3b5f27a3-6dd1-4cf9-bdf4-5643745cc48b'] = $pane;
  $display->panels['full-middle'][0] = 'new-3b5f27a3-6dd1-4cf9-bdf4-5643745cc48b';
  $pane = new stdClass();
  $pane->pid = 'new-7ffdba41-8d7a-41d4-8166-499cedc6a8ac';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<h3>%node:field_about_adv_title</h3>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7ffdba41-8d7a-41d4-8166-499cedc6a8ac';
  $display->content['new-7ffdba41-8d7a-41d4-8166-499cedc6a8ac'] = $pane;
  $display->panels['middle'][0] = 'new-7ffdba41-8d7a-41d4-8166-499cedc6a8ac';
  $pane = new stdClass();
  $pane->pid = 'new-c913fae5-e00c-4765-8926-ae717e6bd4ad';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'advantages-panel_pane_advantages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c913fae5-e00c-4765-8926-ae717e6bd4ad';
  $display->content['new-c913fae5-e00c-4765-8926-ae717e6bd4ad'] = $pane;
  $display->panels['middle'][1] = 'new-c913fae5-e00c-4765-8926-ae717e6bd4ad';
  $pane = new stdClass();
  $pane->pid = 'new-af92ed63-24bb-4c18-aab6-dfc3c6ef5641';
  $pane->panel = 'middle-second';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<h3>%node:field_about_partners_title</h3>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'af92ed63-24bb-4c18-aab6-dfc3c6ef5641';
  $display->content['new-af92ed63-24bb-4c18-aab6-dfc3c6ef5641'] = $pane;
  $display->panels['middle-second'][0] = 'new-af92ed63-24bb-4c18-aab6-dfc3c6ef5641';
  $pane = new stdClass();
  $pane->pid = 'new-7971da44-4050-4a1a-aefd-71c74fcecb51';
  $pane->panel = 'middle-second';
  $pane->type = 'views_panes';
  $pane->subtype = 'its_partners-panel_partners_slider';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7971da44-4050-4a1a-aefd-71c74fcecb51';
  $display->content['new-7971da44-4050-4a1a-aefd-71c74fcecb51'] = $pane;
  $display->panels['middle-second'][1] = 'new-7971da44-4050-4a1a-aefd-71c74fcecb51';
  $pane = new stdClass();
  $pane->pid = 'new-a085bdd3-61d3-410b-840c-7889532c4ab3';
  $pane->panel = 'top-content';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'h1',
    'id' => '',
    'class' => '',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a085bdd3-61d3-410b-840c-7889532c4ab3';
  $display->content['new-a085bdd3-61d3-410b-840c-7889532c4ab3'] = $pane;
  $display->panels['top-content'][0] = 'new-a085bdd3-61d3-410b-840c-7889532c4ab3';
  $pane = new stdClass();
  $pane->pid = 'new-72c36eeb-69ca-421e-94e6-0653db53dcae';
  $pane->panel = 'top-left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_about_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'file_rendered',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'file_view_mode' => 'default',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '72c36eeb-69ca-421e-94e6-0653db53dcae';
  $display->content['new-72c36eeb-69ca-421e-94e6-0653db53dcae'] = $pane;
  $display->panels['top-left'][0] = 'new-72c36eeb-69ca-421e-94e6-0653db53dcae';
  $pane = new stdClass();
  $pane->pid = 'new-d1eaf2c2-0d14-43fd-890b-ba6ad994d81e';
  $pane->panel = 'top-right';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd1eaf2c2-0d14-43fd-890b-ba6ad994d81e';
  $display->content['new-d1eaf2c2-0d14-43fd-890b-ba6ad994d81e'] = $pane;
  $display->panels['top-right'][0] = 'new-d1eaf2c2-0d14-43fd-890b-ba6ad994d81e';
  $pane = new stdClass();
  $pane->pid = 'new-8fd02d46-f097-4cad-9349-edb664207598';
  $pane->panel = 'top-right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_about_link';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'link_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '8fd02d46-f097-4cad-9349-edb664207598';
  $display->content['new-8fd02d46-f097-4cad-9349-edb664207598'] = $pane;
  $display->panels['top-right'][1] = 'new-8fd02d46-f097-4cad-9349-edb664207598';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_86e7f628-21e3-4649-a293-ebf1002f4816'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__subject-parent';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -2;
  $handler->conf = array(
    'title' => 'Subject Parent',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-panel-class',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'subject-parent',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_status',
          'settings' => NULL,
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'subject' => 'subject',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'its_class_parent',
          'settings' => NULL,
          'not' => FALSE,
          'context' => 'argument_entity_id:node_1',
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '[its:breadcrumb_home]
[its:breadcrumb_cources]
%node:title',
    'panels_breadcrumbs_paths' => '<front>
/courses',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'class';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'top-content' => NULL,
      'bottom-content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'a219e2e8-249c-4dc6-9447-0b4a6fe4ade4';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__subject-parent';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-333dc0c7-844f-403b-9926-dedd0fc40053';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'its_subject-panel_pane_full_package_subject';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '333dc0c7-844f-403b-9926-dedd0fc40053';
  $display->content['new-333dc0c7-844f-403b-9926-dedd0fc40053'] = $pane;
  $display->panels['left'][0] = 'new-333dc0c7-844f-403b-9926-dedd0fc40053';
  $pane = new stdClass();
  $pane->pid = 'new-4dd542a9-8cf8-412c-82a6-a38f12bc43f4';
  $pane->panel = 'right';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'h1',
    'id' => '',
    'class' => '',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4dd542a9-8cf8-412c-82a6-a38f12bc43f4';
  $display->content['new-4dd542a9-8cf8-412c-82a6-a38f12bc43f4'] = $pane;
  $display->panels['right'][0] = 'new-4dd542a9-8cf8-412c-82a6-a38f12bc43f4';
  $pane = new stdClass();
  $pane->pid = 'new-25a64840-27dd-4848-a621-3a642fd406d0';
  $pane->panel = 'right';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '25a64840-27dd-4848-a621-3a642fd406d0';
  $display->content['new-25a64840-27dd-4848-a621-3a642fd406d0'] = $pane;
  $display->panels['right'][1] = 'new-25a64840-27dd-4848-a621-3a642fd406d0';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-4dd542a9-8cf8-412c-82a6-a38f12bc43f4';
  $handler->conf['display'] = $display;
  $export['node_view__subject-parent'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function its_class_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'all_courses';
  $page->task = 'page';
  $page->admin_title = 'All Courses';
  $page->admin_description = '';
  $page->path = 'courses';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_all_courses__panel';
  $handler->task = 'page';
  $handler->subtask = 'all_courses';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Courses',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'its-all-courses',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'Наши курсы | [site:name] [site:slogan]',
        ),
      ),
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '[its:breadcrumb_home]
[its:breadcrumb_our_cources]',
    'panels_breadcrumbs_paths' => '<front>
<none>',
    'panels_breadcrumbs_home' => 1,
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ef41ce67-d471-4c53-9246-be9efdcd2001';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_all_courses__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f0cbd917-1d86-4b43-8e71-3e5e621362d8';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'its_class-panel_all_courses';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f0cbd917-1d86-4b43-8e71-3e5e621362d8';
  $display->content['new-f0cbd917-1d86-4b43-8e71-3e5e621362d8'] = $pane;
  $display->panels['middle'][0] = 'new-f0cbd917-1d86-4b43-8e71-3e5e621362d8';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-f0cbd917-1d86-4b43-8e71-3e5e621362d8';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['all_courses'] = $page;

  return $pages;

}
