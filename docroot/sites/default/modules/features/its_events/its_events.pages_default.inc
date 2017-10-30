<?php
/**
 * @file
 * its_events.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function its_events_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'all_events';
  $page->task = 'page';
  $page->admin_title = 'All Events';
  $page->admin_description = '';
  $page->path = 'events';
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
  $handler->name = 'page_all_events__panel';
  $handler->task = 'page';
  $handler->subtask = 'all_events';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'panel-page-all-events',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '[its:breadcrumb_home]
[its:breadcrumb_events]',
    'panels_breadcrumbs_paths' => '<front>
<none>',
    'panels_breadcrumbs_home' => 1,
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
  $display->uuid = '471deb96-5ed4-46e1-ae36-5cc5932ab31b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_all_events__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f5a6689d-4d55-4826-b2b2-3e3a3d6d12a7';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'its_events-panel_pane_nearest_event';
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
  $pane->uuid = 'f5a6689d-4d55-4826-b2b2-3e3a3d6d12a7';
  $display->content['new-f5a6689d-4d55-4826-b2b2-3e3a3d6d12a7'] = $pane;
  $display->panels['middle'][0] = 'new-f5a6689d-4d55-4826-b2b2-3e3a3d6d12a7';
  $pane = new stdClass();
  $pane->pid = 'new-623e6077-0146-4e07-9c47-8fedfafd42e4';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'its_events-panel_all_events';
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
  $pane->uuid = '623e6077-0146-4e07-9c47-8fedfafd42e4';
  $display->content['new-623e6077-0146-4e07-9c47-8fedfafd42e4'] = $pane;
  $display->panels['middle'][1] = 'new-623e6077-0146-4e07-9c47-8fedfafd42e4';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-623e6077-0146-4e07-9c47-8fedfafd42e4';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['all_events'] = $page;

  return $pages;

}
