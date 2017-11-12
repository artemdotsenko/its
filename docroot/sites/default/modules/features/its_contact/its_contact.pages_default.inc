<?php
/**
 * @file
 * its_contact.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function its_contact_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'contact_us';
  $page->task = 'page';
  $page->admin_title = 'Contact Us';
  $page->admin_description = '';
  $page->path = 'contact';
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
  $handler->name = 'page_contact_us__panel';
  $handler->task = 'page';
  $handler->subtask = 'contact_us';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'panel-page-contact',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Token',
        'keyword' => 'token',
        'name' => 'token',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'name' => 'panel',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '[its:breadcrumb_home]',
    'panels_breadcrumbs_paths' => '<front>',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'contact';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top-content' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom-content' => NULL,
      'main' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%token:its:contact_us_title';
  $display->uuid = '5bb8eca7-b9b6-406f-9897-f9fdc60d4db9';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_contact_us__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ba738b4f-2297-417f-bcaf-3f7fd52eaab2';
  $pane->panel = 'main';
  $pane->type = 'views_panes';
  $pane->subtype = 'its_contacts-panel_pane_contacts';
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
  $pane->uuid = 'ba738b4f-2297-417f-bcaf-3f7fd52eaab2';
  $display->content['new-ba738b4f-2297-417f-bcaf-3f7fd52eaab2'] = $pane;
  $display->panels['main'][0] = 'new-ba738b4f-2297-417f-bcaf-3f7fd52eaab2';
  $pane = new stdClass();
  $pane->pid = 'new-a127fae3-0701-4c39-a96a-29bd9749f3fe';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'webform-client-block-91';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'site_language',
        'settings' => array(
          'language' => array(
            'ru' => 'ru',
            'default' => 0,
            'ua' => 0,
            'en' => 0,
          ),
        ),
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
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a127fae3-0701-4c39-a96a-29bd9749f3fe';
  $display->content['new-a127fae3-0701-4c39-a96a-29bd9749f3fe'] = $pane;
  $display->panels['sidebar'][0] = 'new-a127fae3-0701-4c39-a96a-29bd9749f3fe';
  $pane = new stdClass();
  $pane->pid = 'new-728bda77-61c6-4673-bdef-05dce24b4a7e';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'webform-client-block-145';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'site_language',
        'settings' => array(
          'language' => array(
            'ua' => 'ua',
            'default' => 0,
            'ru' => 0,
            'en' => 0,
          ),
        ),
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
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '728bda77-61c6-4673-bdef-05dce24b4a7e';
  $display->content['new-728bda77-61c6-4673-bdef-05dce24b4a7e'] = $pane;
  $display->panels['sidebar'][1] = 'new-728bda77-61c6-4673-bdef-05dce24b4a7e';
  $pane = new stdClass();
  $pane->pid = 'new-c29659d8-9b6b-4ef1-b20d-ae77a37dca01';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'webform-client-block-92';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'site_language',
        'settings' => array(
          'language' => array(
            'en' => 'en',
            'default' => 0,
            'ru' => 0,
            'ua' => 0,
          ),
        ),
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
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'c29659d8-9b6b-4ef1-b20d-ae77a37dca01';
  $display->content['new-c29659d8-9b6b-4ef1-b20d-ae77a37dca01'] = $pane;
  $display->panels['sidebar'][2] = 'new-c29659d8-9b6b-4ef1-b20d-ae77a37dca01';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['contact_us'] = $page;

  return $pages;

}
