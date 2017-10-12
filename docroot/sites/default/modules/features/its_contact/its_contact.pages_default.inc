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
  $page->access = array();
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
  $pane->pid = 'new-a97b5d49-e46a-4f9f-b138-5885e58f769f';
  $pane->panel = 'main';
  $pane->type = 'views_panes';
  $pane->subtype = 'its_contact-panel_pane_contact_list';
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
  $pane->uuid = 'a97b5d49-e46a-4f9f-b138-5885e58f769f';
  $display->content['new-a97b5d49-e46a-4f9f-b138-5885e58f769f'] = $pane;
  $display->panels['main'][0] = 'new-a97b5d49-e46a-4f9f-b138-5885e58f769f';
  $pane = new stdClass();
  $pane->pid = 'new-a127fae3-0701-4c39-a96a-29bd9749f3fe';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'webform-client-block-91';
  $pane->shown = TRUE;
  $pane->access = array();
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
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['contact_us'] = $page;

  return $pages;

}
