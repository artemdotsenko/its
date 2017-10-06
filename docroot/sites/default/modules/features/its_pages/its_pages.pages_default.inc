<?php
/**
 * @file
 * its_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function its_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home_page';
  $page->task = 'page';
  $page->admin_title = 'Home Page';
  $page->admin_description = '';
  $page->path = 'home';
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
  $handler->name = 'page_home_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'home_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'threecol_25_50_25_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6db30d2e-5591-4b09-934d-958e5e50f6e6';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_home_page__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2b437e69-4bae-42a9-91e2-f00bc6f0cc9e';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'its_events-panel_upcomnig_events';
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
  $pane->uuid = '2b437e69-4bae-42a9-91e2-f00bc6f0cc9e';
  $display->content['new-2b437e69-4bae-42a9-91e2-f00bc6f0cc9e'] = $pane;
  $display->panels['bottom'][0] = 'new-2b437e69-4bae-42a9-91e2-f00bc6f0cc9e';
  $pane = new stdClass();
  $pane->pid = 'new-5d5d9ed7-c418-4132-9c67-307fa0aabd30';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'its_articles-panel_promoted_article';
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
  $pane->uuid = '5d5d9ed7-c418-4132-9c67-307fa0aabd30';
  $display->content['new-5d5d9ed7-c418-4132-9c67-307fa0aabd30'] = $pane;
  $display->panels['bottom'][1] = 'new-5d5d9ed7-c418-4132-9c67-307fa0aabd30';
  $pane = new stdClass();
  $pane->pid = 'new-ce08a9b0-7b1c-493e-b7c2-eadb8927b34d';
  $pane->panel = 'bottom';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'ce08a9b0-7b1c-493e-b7c2-eadb8927b34d';
  $display->content['new-ce08a9b0-7b1c-493e-b7c2-eadb8927b34d'] = $pane;
  $display->panels['bottom'][2] = 'new-ce08a9b0-7b1c-493e-b7c2-eadb8927b34d';
  $pane = new stdClass();
  $pane->pid = 'new-888da4bc-8a66-45ae-a3ef-f1cec96854f1';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'its_reviews-panel_reviews';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '888da4bc-8a66-45ae-a3ef-f1cec96854f1';
  $display->content['new-888da4bc-8a66-45ae-a3ef-f1cec96854f1'] = $pane;
  $display->panels['bottom'][3] = 'new-888da4bc-8a66-45ae-a3ef-f1cec96854f1';
  $pane = new stdClass();
  $pane->pid = 'new-b542331c-f694-4782-9e6c-1b347340fe55';
  $pane->panel = 'bottom';
  $pane->type = 'block';
  $pane->subtype = 'its_contact-its_contact_sign_up';
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'b542331c-f694-4782-9e6c-1b347340fe55';
  $display->content['new-b542331c-f694-4782-9e6c-1b347340fe55'] = $pane;
  $display->panels['bottom'][4] = 'new-b542331c-f694-4782-9e6c-1b347340fe55';
  $pane = new stdClass();
  $pane->pid = 'new-64b6e6f6-24e7-4204-878a-386c046d283d';
  $pane->panel = 'bottom';
  $pane->type = 'block';
  $pane->subtype = 'its_social-its_social_links';
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '64b6e6f6-24e7-4204-878a-386c046d283d';
  $display->content['new-64b6e6f6-24e7-4204-878a-386c046d283d'] = $pane;
  $display->panels['bottom'][5] = 'new-64b6e6f6-24e7-4204-878a-386c046d283d';
  $pane = new stdClass();
  $pane->pid = 'new-902b5e10-3896-433b-850a-b0f7bd551069';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'its_class-panel_class_list';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'arguments' => array(
      'field_class_position_value' => 'left',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'left-classes',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '902b5e10-3896-433b-850a-b0f7bd551069';
  $display->content['new-902b5e10-3896-433b-850a-b0f7bd551069'] = $pane;
  $display->panels['left'][0] = 'new-902b5e10-3896-433b-850a-b0f7bd551069';
  $pane = new stdClass();
  $pane->pid = 'new-9bf2696f-de64-4914-bca9-ea736c8626ef';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'its_class-panel_class_list';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_class_position_value' => 'right',
    ),
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'right-classes',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9bf2696f-de64-4914-bca9-ea736c8626ef';
  $display->content['new-9bf2696f-de64-4914-bca9-ea736c8626ef'] = $pane;
  $display->panels['right'][0] = 'new-9bf2696f-de64-4914-bca9-ea736c8626ef';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-902b5e10-3896-433b-850a-b0f7bd551069';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home_page'] = $page;

  return $pages;

}
