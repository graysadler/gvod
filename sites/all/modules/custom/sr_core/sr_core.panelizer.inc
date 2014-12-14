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
  $panelizer->name = 'node:blog:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'blog';
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
  $display->layout = 'three_25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'three_25_50_25_top' => NULL,
      'three_25_50_25_first' => NULL,
      'three_25_50_25_second' => NULL,
      'three_25_50_25_third' => NULL,
      'three_25_50_25_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '46b03a13-b99c-4523-889a-c0fa477eb95a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f399dc01-6cb9-4202-bbf1-02a7737f592b';
    $pane->panel = 'three_25_50_25_first';
    $pane->type = 'block';
    $pane->subtype = 'block-5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => 'Welcome to our blog!',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f399dc01-6cb9-4202-bbf1-02a7737f592b';
    $display->content['new-f399dc01-6cb9-4202-bbf1-02a7737f592b'] = $pane;
    $display->panels['three_25_50_25_first'][0] = 'new-f399dc01-6cb9-4202-bbf1-02a7737f592b';
    $pane = new stdClass();
    $pane->pid = 'new-a7dd1ff4-8680-4f48-aaba-18a9103d9729';
    $pane->panel = 'three_25_50_25_first';
    $pane->type = 'block';
    $pane->subtype = 'views-social_feed-social_feed';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a7dd1ff4-8680-4f48-aaba-18a9103d9729';
    $display->content['new-a7dd1ff4-8680-4f48-aaba-18a9103d9729'] = $pane;
    $display->panels['three_25_50_25_first'][1] = 'new-a7dd1ff4-8680-4f48-aaba-18a9103d9729';
    $pane = new stdClass();
    $pane->pid = 'new-07628ff3-ba2b-4cbd-95d3-a4dbd65b81c2';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'both',
      'id' => 'tabs',
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
    $pane->uuid = '07628ff3-ba2b-4cbd-95d3-a4dbd65b81c2';
    $display->content['new-07628ff3-ba2b-4cbd-95d3-a4dbd65b81c2'] = $pane;
    $display->panels['three_25_50_25_second'][0] = 'new-07628ff3-ba2b-4cbd-95d3-a4dbd65b81c2';
    $pane = new stdClass();
    $pane->pid = 'new-a45265a3-0339-4696-ad2c-807543a211bc';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_blog_images';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'full-page-inner',
        'image_link' => '',
      ),
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
    $pane->uuid = 'a45265a3-0339-4696-ad2c-807543a211bc';
    $display->content['new-a45265a3-0339-4696-ad2c-807543a211bc'] = $pane;
    $display->panels['three_25_50_25_second'][1] = 'new-a45265a3-0339-4696-ad2c-807543a211bc';
    $pane = new stdClass();
    $pane->pid = 'new-0bec384e-2067-418f-bd38-ac17f06bb5b4';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'none',
      'id' => '',
      'class' => '',
      'context' => 'panelizer',
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
    $pane->uuid = '0bec384e-2067-418f-bd38-ac17f06bb5b4';
    $display->content['new-0bec384e-2067-418f-bd38-ac17f06bb5b4'] = $pane;
    $display->panels['three_25_50_25_second'][2] = 'new-0bec384e-2067-418f-bd38-ac17f06bb5b4';
    $pane = new stdClass();
    $pane->pid = 'new-9602b6fe-edab-4db8-be1e-d1002ec8b126';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '9602b6fe-edab-4db8-be1e-d1002ec8b126';
    $display->content['new-9602b6fe-edab-4db8-be1e-d1002ec8b126'] = $pane;
    $display->panels['three_25_50_25_second'][3] = 'new-9602b6fe-edab-4db8-be1e-d1002ec8b126';
    $pane = new stdClass();
    $pane->pid = 'new-cc33e410-0b2e-42d5-968a-30d5fed12e3b';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'cc33e410-0b2e-42d5-968a-30d5fed12e3b';
    $display->content['new-cc33e410-0b2e-42d5-968a-30d5fed12e3b'] = $pane;
    $display->panels['three_25_50_25_second'][4] = 'new-cc33e410-0b2e-42d5-968a-30d5fed12e3b';
    $pane = new stdClass();
    $pane->pid = 'new-89e3c047-0b22-4af8-b2ad-e77144ea843e';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '89e3c047-0b22-4af8-b2ad-e77144ea843e';
    $display->content['new-89e3c047-0b22-4af8-b2ad-e77144ea843e'] = $pane;
    $display->panels['three_25_50_25_second'][5] = 'new-89e3c047-0b22-4af8-b2ad-e77144ea843e';
    $pane = new stdClass();
    $pane->pid = 'new-3a896e81-2f41-40ae-aa8c-8aa17fc12d3b';
    $pane->panel = 'three_25_50_25_third';
    $pane->type = 'block';
    $pane->subtype = 'quicktabs-popular_blog';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
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
    $pane->uuid = '3a896e81-2f41-40ae-aa8c-8aa17fc12d3b';
    $display->content['new-3a896e81-2f41-40ae-aa8c-8aa17fc12d3b'] = $pane;
    $display->panels['three_25_50_25_third'][0] = 'new-3a896e81-2f41-40ae-aa8c-8aa17fc12d3b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a45265a3-0339-4696-ad2c-807543a211bc';
  $panelizer->display = $display;
  $export['node:blog:default'] = $panelizer;

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
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'three_25_50_25';
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
      'three_25_50_25_top' => NULL,
      'three_25_50_25_first' => NULL,
      'three_25_50_25_second' => NULL,
      'three_25_50_25_third' => NULL,
      'three_25_50_25_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'd9e0ae56-4078-4ea1-a532-58e88b12a89d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b93750f2-22a9-46c0-a29a-d48f9c20825a';
    $pane->panel = 'three_25_50_25_first';
    $pane->type = 'block';
    $pane->subtype = 'views-blog_listing-blogs_featured';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Hi! We\'re StreamRiot :)',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'featured-blogs',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b93750f2-22a9-46c0-a29a-d48f9c20825a';
    $display->content['new-b93750f2-22a9-46c0-a29a-d48f9c20825a'] = $pane;
    $display->panels['three_25_50_25_first'][0] = 'new-b93750f2-22a9-46c0-a29a-d48f9c20825a';
    $pane = new stdClass();
    $pane->pid = 'new-a8749e2e-f17e-407d-83ec-9c6cb3a90db0';
    $pane->panel = 'three_25_50_25_first';
    $pane->type = 'block';
    $pane->subtype = 'block-8';
    $pane->shown = FALSE;
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a8749e2e-f17e-407d-83ec-9c6cb3a90db0';
    $display->content['new-a8749e2e-f17e-407d-83ec-9c6cb3a90db0'] = $pane;
    $display->panels['three_25_50_25_first'][1] = 'new-a8749e2e-f17e-407d-83ec-9c6cb3a90db0';
    $pane = new stdClass();
    $pane->pid = 'new-f47901da-8cda-4492-b9fc-4fb10fb0b9bc';
    $pane->panel = 'three_25_50_25_first';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'f47901da-8cda-4492-b9fc-4fb10fb0b9bc';
    $display->content['new-f47901da-8cda-4492-b9fc-4fb10fb0b9bc'] = $pane;
    $display->panels['three_25_50_25_first'][2] = 'new-f47901da-8cda-4492-b9fc-4fb10fb0b9bc';
    $pane = new stdClass();
    $pane->pid = 'new-27b5cac6-21c9-4492-b3cc-483bddbd424c';
    $pane->panel = 'three_25_50_25_first';
    $pane->type = 'block';
    $pane->subtype = 'views-social_feed-social_feed';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '27b5cac6-21c9-4492-b3cc-483bddbd424c';
    $display->content['new-27b5cac6-21c9-4492-b3cc-483bddbd424c'] = $pane;
    $display->panels['three_25_50_25_first'][3] = 'new-27b5cac6-21c9-4492-b3cc-483bddbd424c';
    $pane = new stdClass();
    $pane->pid = 'new-f4199c1a-ff7b-4e7b-956c-9102fdb66ce1';
    $pane->panel = 'three_25_50_25_first';
    $pane->type = 'block';
    $pane->subtype = 'views-tweets-block_1';
    $pane->shown = FALSE;
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'f4199c1a-ff7b-4e7b-956c-9102fdb66ce1';
    $display->content['new-f4199c1a-ff7b-4e7b-956c-9102fdb66ce1'] = $pane;
    $display->panels['three_25_50_25_first'][4] = 'new-f4199c1a-ff7b-4e7b-956c-9102fdb66ce1';
    $pane = new stdClass();
    $pane->pid = 'new-a3497512-234b-412c-af40-901e2e1bcb16';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_rendered',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'file_view_mode' => 'media_original',
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'banner-image',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a3497512-234b-412c-af40-901e2e1bcb16';
    $display->content['new-a3497512-234b-412c-af40-901e2e1bcb16'] = $pane;
    $display->panels['three_25_50_25_second'][0] = 'new-a3497512-234b-412c-af40-901e2e1bcb16';
    $pane = new stdClass();
    $pane->pid = 'new-03ff30d6-146d-438e-b042-97c3f75e05ae';
    $pane->panel = 'three_25_50_25_second';
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
    $display->panels['three_25_50_25_second'][1] = 'new-03ff30d6-146d-438e-b042-97c3f75e05ae';
    $pane = new stdClass();
    $pane->pid = 'new-b855a04c-3c82-4e63-bd51-70f4deba705b';
    $pane->panel = 'three_25_50_25_third';
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
    $display->panels['three_25_50_25_third'][0] = 'new-b855a04c-3c82-4e63-bd51-70f4deba705b';
    $pane = new stdClass();
    $pane->pid = 'new-0464d8b2-94b4-4c31-bc09-7e28b12ace7d';
    $pane->panel = 'three_25_50_25_third';
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
    $display->panels['three_25_50_25_third'][1] = 'new-0464d8b2-94b4-4c31-bc09-7e28b12ace7d';
    $pane = new stdClass();
    $pane->pid = 'new-0849148c-0a97-44be-8104-5a598f09c698';
    $pane->panel = 'three_25_50_25_third';
    $pane->type = 'block';
    $pane->subtype = 'views-blog_right_side_block-block';
    $pane->shown = FALSE;
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
    $display->panels['three_25_50_25_third'][2] = 'new-0849148c-0a97-44be-8104-5a598f09c698';
    $pane = new stdClass();
    $pane->pid = 'new-5e34c095-b68b-4415-a3e0-03336c330114';
    $pane->panel = 'three_25_50_25_third';
    $pane->type = 'block';
    $pane->subtype = 'views-blog_right_side_block-block_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '5e34c095-b68b-4415-a3e0-03336c330114';
    $display->content['new-5e34c095-b68b-4415-a3e0-03336c330114'] = $pane;
    $display->panels['three_25_50_25_third'][3] = 'new-5e34c095-b68b-4415-a3e0-03336c330114';
    $pane = new stdClass();
    $pane->pid = 'new-e2dbf6c0-7fcc-4205-ad62-93659837e8bb';
    $pane->panel = 'three_25_50_25_top';
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
    $display->panels['three_25_50_25_top'][0] = 'new-e2dbf6c0-7fcc-4205-ad62-93659837e8bb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:page:default'] = $panelizer;

  return $export;
}
