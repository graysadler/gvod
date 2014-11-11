<?php
/**
 * @file
 * sr_core.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function sr_core_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:page:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
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
          0 => 'sidebar_first',
          1 => 'center',
          2 => 'sidebar_second',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '48.754789272030656',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'center-content blog-related',
      ),
      'sidebar_first' => array(
        'type' => 'region',
        'title' => 'Sidebar first',
        'width' => '26.245210727969347',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'sidebar-first',
      ),
      'sidebar_second' => array(
        'type' => 'region',
        'title' => 'Sidebar second',
        'width' => 25,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'sidebar-second',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'sidebar_first' => NULL,
      'sidebar_second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'd9e0ae56-4078-4ea1-a532-58e88b12a89d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e2dbf6c0-7fcc-4205-ad62-93659837e8bb';
    $pane->panel = 'center';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'both',
      'id' => 'tabs',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e2dbf6c0-7fcc-4205-ad62-93659837e8bb';
    $display->content['new-e2dbf6c0-7fcc-4205-ad62-93659837e8bb'] = $pane;
    $display->panels['center'][0] = 'new-e2dbf6c0-7fcc-4205-ad62-93659837e8bb';
    $pane = new stdClass();
    $pane->pid = 'new-03ff30d6-146d-438e-b042-97c3f75e05ae';
    $pane->panel = 'center';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 1,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 1,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '03ff30d6-146d-438e-b042-97c3f75e05ae';
    $display->content['new-03ff30d6-146d-438e-b042-97c3f75e05ae'] = $pane;
    $display->panels['center'][1] = 'new-03ff30d6-146d-438e-b042-97c3f75e05ae';
    $pane = new stdClass();
    $pane->pid = 'new-a8749e2e-f17e-407d-83ec-9c6cb3a90db0';
    $pane->panel = 'sidebar_first';
    $pane->type = 'block';
    $pane->subtype = 'block-8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Hi! We’re StreamRiot :)',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a8749e2e-f17e-407d-83ec-9c6cb3a90db0';
    $display->content['new-a8749e2e-f17e-407d-83ec-9c6cb3a90db0'] = $pane;
    $display->panels['sidebar_first'][0] = 'new-a8749e2e-f17e-407d-83ec-9c6cb3a90db0';
    $pane = new stdClass();
    $pane->pid = 'new-f47901da-8cda-4492-b9fc-4fb10fb0b9bc';
    $pane->panel = 'sidebar_first';
    $pane->type = 'block';
    $pane->subtype = 'block-5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Welcome to our blog!',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f47901da-8cda-4492-b9fc-4fb10fb0b9bc';
    $display->content['new-f47901da-8cda-4492-b9fc-4fb10fb0b9bc'] = $pane;
    $display->panels['sidebar_first'][1] = 'new-f47901da-8cda-4492-b9fc-4fb10fb0b9bc';
    $pane = new stdClass();
    $pane->pid = 'new-f4199c1a-ff7b-4e7b-956c-9102fdb66ce1';
    $pane->panel = 'sidebar_first';
    $pane->type = 'block';
    $pane->subtype = 'views-tweets-block_1';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'f4199c1a-ff7b-4e7b-956c-9102fdb66ce1';
    $display->content['new-f4199c1a-ff7b-4e7b-956c-9102fdb66ce1'] = $pane;
    $display->panels['sidebar_first'][2] = 'new-f4199c1a-ff7b-4e7b-956c-9102fdb66ce1';
    $pane = new stdClass();
    $pane->pid = 'new-b855a04c-3c82-4e63-bd51-70f4deba705b';
    $pane->panel = 'sidebar_second';
    $pane->type = 'block';
    $pane->subtype = 'block-4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b855a04c-3c82-4e63-bd51-70f4deba705b';
    $display->content['new-b855a04c-3c82-4e63-bd51-70f4deba705b'] = $pane;
    $display->panels['sidebar_second'][0] = 'new-b855a04c-3c82-4e63-bd51-70f4deba705b';
    $pane = new stdClass();
    $pane->pid = 'new-0464d8b2-94b4-4c31-bc09-7e28b12ace7d';
    $pane->panel = 'sidebar_second';
    $pane->type = 'block';
    $pane->subtype = 'block-7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0464d8b2-94b4-4c31-bc09-7e28b12ace7d';
    $display->content['new-0464d8b2-94b4-4c31-bc09-7e28b12ace7d'] = $pane;
    $display->panels['sidebar_second'][1] = 'new-0464d8b2-94b4-4c31-bc09-7e28b12ace7d';
    $pane = new stdClass();
    $pane->pid = 'new-0849148c-0a97-44be-8104-5a598f09c698';
    $pane->panel = 'sidebar_second';
    $pane->type = 'block';
    $pane->subtype = 'views-blog_right_side_block-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '0849148c-0a97-44be-8104-5a598f09c698';
    $display->content['new-0849148c-0a97-44be-8104-5a598f09c698'] = $pane;
    $display->panels['sidebar_second'][2] = 'new-0849148c-0a97-44be-8104-5a598f09c698';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:page:default'] = $panelizer;

  return $export;
}
