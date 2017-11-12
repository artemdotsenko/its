<?php
/**
 * @file
 * its_article.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function its_article_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_ef070945-b3c1-4f20-9fac-9e14f30a3a07';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 4;
  $handler->conf = array(
    'title' => 'News',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'panel-page-news',
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
              'article' => 'article',
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
[its:breadcrumb_news]',
    'panels_breadcrumbs_paths' => '<front>
/news',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'news';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top-content' => NULL,
      'main' => NULL,
      'sidebar' => NULL,
      'bottom-content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '302e8a39-076c-46dc-91ef-3ddd9516f620';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_ef070945-b3c1-4f20-9fac-9e14f30a3a07';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-bd8d60ea-1fd6-4e3e-9715-0402bacf74b0';
  $pane->panel = 'main';
  $pane->type = 'node_content';
  $pane->subtype = 'node_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'links' => 0,
    'no_extras' => 0,
    'override_title' => 1,
    'override_title_text' => '',
    'identifier' => '',
    'link' => 0,
    'leave_node_title' => 0,
    'build_mode' => 'full',
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = 'bd8d60ea-1fd6-4e3e-9715-0402bacf74b0';
  $display->content['new-bd8d60ea-1fd6-4e3e-9715-0402bacf74b0'] = $pane;
  $display->panels['main'][0] = 'new-bd8d60ea-1fd6-4e3e-9715-0402bacf74b0';
  $pane = new stdClass();
  $pane->pid = 'new-a48d1ed6-cbe0-489b-b83e-a365405cf62b';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'its_articles-panel_pane_news_categories';
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
  $pane->uuid = 'a48d1ed6-cbe0-489b-b83e-a365405cf62b';
  $display->content['new-a48d1ed6-cbe0-489b-b83e-a365405cf62b'] = $pane;
  $display->panels['sidebar'][0] = 'new-a48d1ed6-cbe0-489b-b83e-a365405cf62b';
  $pane = new stdClass();
  $pane->pid = 'new-30efa54e-14b7-4e4c-8a66-514660377ad5';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'its_articles-panel_pane_popular_news';
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
  $pane->uuid = '30efa54e-14b7-4e4c-8a66-514660377ad5';
  $display->content['new-30efa54e-14b7-4e4c-8a66-514660377ad5'] = $pane;
  $display->panels['sidebar'][1] = 'new-30efa54e-14b7-4e4c-8a66-514660377ad5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a48d1ed6-cbe0-489b-b83e-a365405cf62b';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_ef070945-b3c1-4f20-9fac-9e14f30a3a07'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__panel_context_9c02595e-f5e2-4725-b84d-51e7750d8878';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Category Page',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'panel-page-news',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'news_categories' => 'news_categories',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '[its:breadcrumb_home]
[its:breadcrumb_news]
%term:name
',
    'panels_breadcrumbs_paths' => '<front>
/news
<none>',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'news';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top-content' => NULL,
      'main' => NULL,
      'sidebar' => NULL,
      'bottom-content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e53581fc-9765-4da7-9892-4b242c3446fd';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view__panel_context_9c02595e-f5e2-4725-b84d-51e7750d8878';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-527d8c61-cdf1-4c34-b320-9b7e91a164d0';
  $pane->panel = 'main';
  $pane->type = 'views_panes';
  $pane->subtype = 'its_articles-panel_pane_all_articles';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_term_1',
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
  $pane->uuid = '527d8c61-cdf1-4c34-b320-9b7e91a164d0';
  $display->content['new-527d8c61-cdf1-4c34-b320-9b7e91a164d0'] = $pane;
  $display->panels['main'][0] = 'new-527d8c61-cdf1-4c34-b320-9b7e91a164d0';
  $pane = new stdClass();
  $pane->pid = 'new-67e97d8b-0f99-4e4f-b81b-bf5a9378746a';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'its_articles-panel_pane_news_categories';
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
  $pane->uuid = '67e97d8b-0f99-4e4f-b81b-bf5a9378746a';
  $display->content['new-67e97d8b-0f99-4e4f-b81b-bf5a9378746a'] = $pane;
  $display->panels['sidebar'][0] = 'new-67e97d8b-0f99-4e4f-b81b-bf5a9378746a';
  $pane = new stdClass();
  $pane->pid = 'new-f887bf03-a120-4930-a4bb-a65c8653de99';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'its_articles-panel_pane_popular_news';
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
  $pane->uuid = 'f887bf03-a120-4930-a4bb-a65c8653de99';
  $display->content['new-f887bf03-a120-4930-a4bb-a65c8653de99'] = $pane;
  $display->panels['sidebar'][1] = 'new-f887bf03-a120-4930-a4bb-a65c8653de99';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-527d8c61-cdf1-4c34-b320-9b7e91a164d0';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_9c02595e-f5e2-4725-b84d-51e7750d8878'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function its_article_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'news';
  $page->task = 'page';
  $page->admin_title = 'News';
  $page->admin_description = '';
  $page->path = 'news';
  $page->access = array(
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_news__panel';
  $handler->task = 'page';
  $handler->subtask = 'news';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'panel-page-news',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '[its:breadcrumb_home]
[its:breadcrumb_news]',
    'panels_breadcrumbs_paths' => '<front>
<none>',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'news';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top-content' => NULL,
      'top-left' => NULL,
      'top-right' => NULL,
      'middle' => NULL,
      'full-middle' => NULL,
      'banner' => NULL,
      'middle-second' => NULL,
      'bottom-left' => NULL,
      'bottom-right' => NULL,
      'bottom-content' => NULL,
      'main' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '306f63e0-7ddd-4847-b42a-4b305e546be6';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_news__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-4f6b248b-9bb0-4eb7-8bcb-fd9755fd3719';
  $pane->panel = 'main';
  $pane->type = 'views_panes';
  $pane->subtype = 'its_articles-panel_pane_all_articles';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'context' => array(
      0 => 'empty',
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
  $pane->uuid = '4f6b248b-9bb0-4eb7-8bcb-fd9755fd3719';
  $display->content['new-4f6b248b-9bb0-4eb7-8bcb-fd9755fd3719'] = $pane;
  $display->panels['main'][0] = 'new-4f6b248b-9bb0-4eb7-8bcb-fd9755fd3719';
  $pane = new stdClass();
  $pane->pid = 'new-f49fd2dc-e100-45cb-a00d-413324c6bdf6';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'its_articles-panel_pane_news_categories';
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
  $pane->uuid = 'f49fd2dc-e100-45cb-a00d-413324c6bdf6';
  $display->content['new-f49fd2dc-e100-45cb-a00d-413324c6bdf6'] = $pane;
  $display->panels['sidebar'][0] = 'new-f49fd2dc-e100-45cb-a00d-413324c6bdf6';
  $pane = new stdClass();
  $pane->pid = 'new-3974638f-6798-4533-847f-d8008e586aa9';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'its_articles-panel_pane_popular_news';
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
  $pane->uuid = '3974638f-6798-4533-847f-d8008e586aa9';
  $display->content['new-3974638f-6798-4533-847f-d8008e586aa9'] = $pane;
  $display->panels['sidebar'][1] = 'new-3974638f-6798-4533-847f-d8008e586aa9';
  $pane = new stdClass();
  $pane->pid = 'new-99fc7b0a-9c95-4d66-808c-01bc733037ca';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'its_add-panel_pane_news_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '99fc7b0a-9c95-4d66-808c-01bc733037ca';
  $display->content['new-99fc7b0a-9c95-4d66-808c-01bc733037ca'] = $pane;
  $display->panels['sidebar'][2] = 'new-99fc7b0a-9c95-4d66-808c-01bc733037ca';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['news'] = $page;

  return $pages;

}
