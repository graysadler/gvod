<?php
/**
 * @file
 * sr_core.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function sr_core_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'header';
  $mini->category = '';
  $mini->admin_title = 'Header';
  $mini->admin_description = 'Header';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'first',
          1 => 'middle',
          2 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'middle' => array(
        'type' => 'region',
        'title' => 'middle',
        'width' => 25,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'first' => array(
        'type' => 'region',
        'title' => 'first',
        'width' => 25,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'four_25_top' => NULL,
      'four_25_first' => NULL,
      'four_25_second' => NULL,
      'four_25_third' => NULL,
      'four_25_fourth' => NULL,
      'four_25_bottom' => NULL,
      'center' => NULL,
      'middle' => NULL,
      'first' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd61079f2-be42-4a25-b045-c57c50441268';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-74d54e69-9e71-44d0-adbf-348c640b331e';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'system-main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '74d54e69-9e71-44d0-adbf-348c640b331e';
    $display->content['new-74d54e69-9e71-44d0-adbf-348c640b331e'] = $pane;
    $display->panels['center'][0] = 'new-74d54e69-9e71-44d0-adbf-348c640b331e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-74d54e69-9e71-44d0-adbf-348c640b331e';
  $mini->display = $display;
  $export['header'] = $mini;

  return $export;
}
