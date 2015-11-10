<?php
/**
 * @file
 * planet_elm_general.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function planet_elm_general_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'rss_view';
  $page->task = 'page';
  $page->admin_title = 'Rss View';
  $page->admin_description = '';
  $page->path = 'rss-view';
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
  $handler->name = 'page_rss_view__panel';
  $handler->task = 'page';
  $handler->subtask = 'rss_view';
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
  $display->layout = 'bootstrap-two-col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'header' => NULL,
      'content' => NULL,
      'sidebar' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Planet Elm';
  $display->uuid = '0f5c436a-96b9-4140-8edb-467b1df406c4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-517696f3-478a-444b-a3bd-4ac72b3c536b';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'feed_items-panel_pane_1';
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
    $pane->uuid = '517696f3-478a-444b-a3bd-4ac72b3c536b';
    $display->content['new-517696f3-478a-444b-a3bd-4ac72b3c536b'] = $pane;
    $display->panels['content'][0] = 'new-517696f3-478a-444b-a3bd-4ac72b3c536b';
    $pane = new stdClass();
    $pane->pid = 'new-cbbfd1bd-1e02-4bc5-9275-5dad28532f77';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'feeds-panel_pane_1';
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
    $pane->uuid = 'cbbfd1bd-1e02-4bc5-9275-5dad28532f77';
    $display->content['new-cbbfd1bd-1e02-4bc5-9275-5dad28532f77'] = $pane;
    $display->panels['sidebar'][0] = 'new-cbbfd1bd-1e02-4bc5-9275-5dad28532f77';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['rss_view'] = $page;

  return $pages;

}
