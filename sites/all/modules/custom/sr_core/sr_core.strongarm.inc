<?php
/**
 * @file
 * sr_core.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function sr_core_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_help';
  $strongarm->value = 0;
  $export['comment_anonymous_help'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_staff';
  $strongarm->value = 0;
  $export['comment_anonymous_staff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_help';
  $strongarm->value = 1;
  $export['comment_default_mode_help'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_staff';
  $strongarm->value = 1;
  $export['comment_default_mode_staff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_help';
  $strongarm->value = '50';
  $export['comment_default_per_page_help'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_staff';
  $strongarm->value = '50';
  $export['comment_default_per_page_staff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_help';
  $strongarm->value = 1;
  $export['comment_form_location_help'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_staff';
  $strongarm->value = 1;
  $export['comment_form_location_staff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_help';
  $strongarm->value = '2';
  $export['comment_help'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_help';
  $strongarm->value = '1';
  $export['comment_preview_help'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_staff';
  $strongarm->value = '1';
  $export['comment_preview_staff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_staff';
  $strongarm->value = '1';
  $export['comment_staff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_help';
  $strongarm->value = 1;
  $export['comment_subject_field_help'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_staff';
  $strongarm->value = 1;
  $export['comment_subject_field_staff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__help';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '4',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '3',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__help'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__staff';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '6',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(
        'sharethis' => array(
          'default' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__staff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_help';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_help'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_staff';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_staff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_help';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_help'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_staff';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_staff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_help';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_help'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_multistream';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_multistream'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_staff';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_staff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_help';
  $strongarm->value = '1';
  $export['node_preview_help'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_staff';
  $strongarm->value = '0';
  $export['node_preview_staff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_help';
  $strongarm->value = 1;
  $export['node_submitted_help'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_staff';
  $strongarm->value = 0;
  $export['node_submitted_staff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_article';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(),
  );
  $export['panelizer_defaults_node_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_blog';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'full' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_help';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_help'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_page';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_staff';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(),
  );
  $export['panelizer_defaults_node_staff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_taxonomy_term_game_category';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_taxonomy_term_game_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_taxonomy_term_solutions';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_taxonomy_term_solutions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_taxonomy_term_tags';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(),
  );
  $export['panelizer_defaults_taxonomy_term_tags'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_user_user';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(),
  );
  $export['panelizer_defaults_user_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:blog:default_selection';
  $strongarm->value = 0;
  $export['panelizer_node:blog:default_selection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:blog:full_selection';
  $strongarm->value = 0;
  $export['panelizer_node:blog:full_selection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:blog:page_manager_selection';
  $strongarm->value = 'node:blog:default';
  $export['panelizer_node:blog:page_manager_selection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:blog:teaser_selection';
  $strongarm->value = 0;
  $export['panelizer_node:blog:teaser_selection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:blog_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:19:"panelizer_node:blog";s:23:"allowed_layout_settings";a:9:{s:8:"flexible";b:1;s:14:"twocol_stacked";b:1;s:13:"twocol_bricks";b:1;s:25:"threecol_25_50_25_stacked";b:1;s:6:"onecol";b:1;s:6:"twocol";b:1;s:25:"threecol_33_34_33_stacked";b:1;s:17:"threecol_33_34_33";b:1;s:17:"threecol_25_50_25";b:1;}s:10:"form_state";N;}';
  $export['panelizer_node:blog_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:blog_allowed_layouts_default';
  $strongarm->value = 0;
  $export['panelizer_node:blog_allowed_layouts_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:blog_allowed_types';
  $strongarm->value = array(
    'page_breadcrumb-page_breadcrumb' => 'page_breadcrumb-page_breadcrumb',
    'page_help-page_help' => 'page_help-page_help',
    'page_feed_icons-page_feed_icons' => 'page_feed_icons-page_feed_icons',
    'page_logo-page_logo' => 'page_logo-page_logo',
    'page_tabs-page_tabs' => 'page_tabs-page_tabs',
    'page_site_name-page_site_name' => 'page_site_name-page_site_name',
    'page_messages-page_messages' => 'page_messages-page_messages',
    'page_slogan-page_slogan' => 'page_slogan-page_slogan',
    'page_title-page_title' => 'page_title-page_title',
    'page_primary_links-page_primary_links' => 'page_primary_links-page_primary_links',
    'page_actions-page_actions' => 'page_actions-page_actions',
    'page_secondary_links-page_secondary_links' => 'page_secondary_links-page_secondary_links',
    'node_form_title-node_form_title' => 'node_form_title-node_form_title',
    'node_form_comment-node_form_comment' => 'node_form_comment-node_form_comment',
    'node_form_publishing-node_form_publishing' => 'node_form_publishing-node_form_publishing',
    'node_form_menu-node_form_menu' => 'node_form_menu-node_form_menu',
    'node_form_buttons-node_form_buttons' => 'node_form_buttons-node_form_buttons',
    'node_form_language-node_form_language' => 'node_form_language-node_form_language',
    'node_form_author-node_form_author' => 'node_form_author-node_form_author',
    'node_form_path-node_form_path' => 'node_form_path-node_form_path',
    'node_form_log-node_form_log' => 'node_form_log-node_form_log',
    'form-form' => 'form-form',
    'node-node' => 'node-node',
    'node_comments-node_comments' => 'node_comments-node_comments',
    'node_attachments-node_attachments' => 'node_attachments-node_attachments',
    'node_updated-node_updated' => 'node_updated-node_updated',
    'node_body-node_body' => 'node_body-node_body',
    'node_comment_form-node_comment_form' => 'node_comment_form-node_comment_form',
    'node_content-node_content' => 'node_content-node_content',
    'node_terms-node_terms' => 'node_terms-node_terms',
    'node_title-node_title' => 'node_title-node_title',
    'node_created-node_created' => 'node_created-node_created',
    'node_links-node_links' => 'node_links-node_links',
    'node_type_desc-node_type_desc' => 'node_type_desc-node_type_desc',
    'node_author-node_author' => 'node_author-node_author',
    'term_description-term_description' => 'term_description-term_description',
    'term_list-term_list' => 'term_list-term_list',
    'comment_reply_form-comment_reply_form' => 'comment_reply_form-comment_reply_form',
    'user_contact-user_contact' => 'user_contact-user_contact',
    'contact-contact' => 'contact-contact',
    'user_signature-user_signature' => 'user_signature-user_signature',
    'user_profile-user_profile' => 'user_profile-user_profile',
    'user_picture-user_picture' => 'user_picture-user_picture',
    'search_form-search_form' => 'search_form-search_form',
    'search_result-search_result' => 'search_result-search_result',
    'vocabulary_terms-vocabulary_terms' => 'vocabulary_terms-vocabulary_terms',
    'panelizer_form_default-panelizer_form_default' => 'panelizer_form_default-panelizer_form_default',
    'entity_form_field-comment:comment_body' => 'entity_form_field-comment:comment_body',
    'entity_form_field-node:body' => 'entity_form_field-node:body',
    'entity_form_field-node:field_tags' => 'entity_form_field-node:field_tags',
    'entity_form_field-node:field_image' => 'entity_form_field-node:field_image',
    'token-node:source' => 'token-node:source',
    'token-node:log' => 'token-node:log',
    'token-node:content-type' => 'token-node:content-type',
    'token-node:comment-count' => 'token-node:comment-count',
    'token-node:comment-count-new' => 'token-node:comment-count-new',
    'token-node:menu-link' => 'token-node:menu-link',
    'token-node:metatag' => 'token-node:metatag',
    'token-node:nid' => 'token-node:nid',
    'token-node:vid' => 'token-node:vid',
    'token-node:title' => 'token-node:title',
    'token-node:body' => 'token-node:body',
    'token-node:summary' => 'token-node:summary',
    'token-node:language' => 'token-node:language',
    'token-node:url' => 'token-node:url',
    'token-node:edit-url' => 'token-node:edit-url',
    'token-node:created' => 'token-node:created',
    'token-node:changed' => 'token-node:changed',
    'token-node:author' => 'token-node:author',
    'token-node:original' => 'token-node:original',
    'token-node:field_tags' => 'token-node:field_tags',
    'token-node:field_image' => 'token-node:field_image',
    'token-content-type:name' => 'token-content-type:name',
    'token-content-type:machine-name' => 'token-content-type:machine-name',
    'token-content-type:description' => 'token-content-type:description',
    'token-content-type:node-count' => 'token-content-type:node-count',
    'token-content-type:edit-url' => 'token-content-type:edit-url',
    'token-term:edit-url' => 'token-term:edit-url',
    'token-term:parents' => 'token-term:parents',
    'token-term:root' => 'token-term:root',
    'token-term:metatag' => 'token-term:metatag',
    'token-term:tid' => 'token-term:tid',
    'token-term:name' => 'token-term:name',
    'token-term:description' => 'token-term:description',
    'token-term:node-count' => 'token-term:node-count',
    'token-term:url' => 'token-term:url',
    'token-term:vocabulary' => 'token-term:vocabulary',
    'token-term:parent' => 'token-term:parent',
    'token-term:original' => 'token-term:original',
    'token-vocabulary:machine-name' => 'token-vocabulary:machine-name',
    'token-vocabulary:edit-url' => 'token-vocabulary:edit-url',
    'token-vocabulary:vid' => 'token-vocabulary:vid',
    'token-vocabulary:name' => 'token-vocabulary:name',
    'token-vocabulary:description' => 'token-vocabulary:description',
    'token-vocabulary:node-count' => 'token-vocabulary:node-count',
    'token-vocabulary:term-count' => 'token-vocabulary:term-count',
    'token-vocabulary:original' => 'token-vocabulary:original',
    'token-file:basename' => 'token-file:basename',
    'token-file:extension' => 'token-file:extension',
    'token-file:size-raw' => 'token-file:size-raw',
    'token-file:fid' => 'token-file:fid',
    'token-file:name' => 'token-file:name',
    'token-file:path' => 'token-file:path',
    'token-file:mime' => 'token-file:mime',
    'token-file:size' => 'token-file:size',
    'token-file:url' => 'token-file:url',
    'token-file:timestamp' => 'token-file:timestamp',
    'token-file:owner' => 'token-file:owner',
    'token-file:original' => 'token-file:original',
    'token-user:cancel-url' => 'token-user:cancel-url',
    'token-user:one-time-login-url' => 'token-user:one-time-login-url',
    'token-user:picture' => 'token-user:picture',
    'token-user:roles' => 'token-user:roles',
    'token-user:uid' => 'token-user:uid',
    'token-user:name' => 'token-user:name',
    'token-user:mail' => 'token-user:mail',
    'token-user:url' => 'token-user:url',
    'token-user:edit-url' => 'token-user:edit-url',
    'token-user:last-login' => 'token-user:last-login',
    'token-user:created' => 'token-user:created',
    'token-user:original' => 'token-user:original',
    'token-current-user:ip-address' => 'token-current-user:ip-address',
    'token-menu-link:mlid' => 'token-menu-link:mlid',
    'token-menu-link:title' => 'token-menu-link:title',
    'token-menu-link:url' => 'token-menu-link:url',
    'token-menu-link:parent' => 'token-menu-link:parent',
    'token-menu-link:parents' => 'token-menu-link:parents',
    'token-menu-link:root' => 'token-menu-link:root',
    'token-menu-link:menu' => 'token-menu-link:menu',
    'token-menu-link:edit-url' => 'token-menu-link:edit-url',
    'token-current-page:title' => 'token-current-page:title',
    'token-current-page:url' => 'token-current-page:url',
    'token-current-page:page-number' => 'token-current-page:page-number',
    'token-current-page:query' => 'token-current-page:query',
    'token-url:path' => 'token-url:path',
    'token-url:relative' => 'token-url:relative',
    'token-url:absolute' => 'token-url:absolute',
    'token-url:brief' => 'token-url:brief',
    'token-url:unaliased' => 'token-url:unaliased',
    'token-url:args' => 'token-url:args',
    'token-array:first' => 'token-array:first',
    'token-array:last' => 'token-array:last',
    'token-array:count' => 'token-array:count',
    'token-array:reversed' => 'token-array:reversed',
    'token-array:keys' => 'token-array:keys',
    'token-array:join' => 'token-array:join',
    'token-array:value' => 'token-array:value',
    'token-array:join-path' => 'token-array:join-path',
    'token-random:number' => 'token-random:number',
    'token-random:hash' => 'token-random:hash',
    'token-comment:cid' => 'token-comment:cid',
    'token-comment:hostname' => 'token-comment:hostname',
    'token-comment:name' => 'token-comment:name',
    'token-comment:mail' => 'token-comment:mail',
    'token-comment:homepage' => 'token-comment:homepage',
    'token-comment:title' => 'token-comment:title',
    'token-comment:body' => 'token-comment:body',
    'token-comment:url' => 'token-comment:url',
    'token-comment:edit-url' => 'token-comment:edit-url',
    'token-comment:created' => 'token-comment:created',
    'token-comment:changed' => 'token-comment:changed',
    'token-comment:parent' => 'token-comment:parent',
    'token-comment:node' => 'token-comment:node',
    'token-comment:author' => 'token-comment:author',
    'token-comment:original' => 'token-comment:original',
    'token-menu:name' => 'token-menu:name',
    'token-menu:machine-name' => 'token-menu:machine-name',
    'token-menu:description' => 'token-menu:description',
    'token-menu:menu-link-count' => 'token-menu:menu-link-count',
    'token-menu:edit-url' => 'token-menu:edit-url',
    'token-metatag:title' => 'token-metatag:title',
    'token-metatag:description' => 'token-metatag:description',
    'token-metatag:abstract' => 'token-metatag:abstract',
    'token-metatag:keywords' => 'token-metatag:keywords',
    'token-metatag:robots' => 'token-metatag:robots',
    'token-metatag:news_keywords' => 'token-metatag:news_keywords',
    'token-metatag:standout' => 'token-metatag:standout',
    'token-metatag:generator' => 'token-metatag:generator',
    'token-metatag:rights' => 'token-metatag:rights',
    'token-metatag:image_src' => 'token-metatag:image_src',
    'token-metatag:canonical' => 'token-metatag:canonical',
    'token-metatag:shortlink' => 'token-metatag:shortlink',
    'token-metatag:publisher' => 'token-metatag:publisher',
    'token-metatag:author' => 'token-metatag:author',
    'token-metatag:original-source' => 'token-metatag:original-source',
    'token-metatag:revisit-after' => 'token-metatag:revisit-after',
    'token-metatag:content-language' => 'token-metatag:content-language',
    'token-site:name' => 'token-site:name',
    'token-site:slogan' => 'token-site:slogan',
    'token-site:mail' => 'token-site:mail',
    'token-site:url' => 'token-site:url',
    'token-site:url-brief' => 'token-site:url-brief',
    'token-site:login-url' => 'token-site:login-url',
    'token-date:short' => 'token-date:short',
    'token-date:medium' => 'token-date:medium',
    'token-date:long' => 'token-date:long',
    'token-date:custom' => 'token-date:custom',
    'token-date:since' => 'token-date:since',
    'token-date:raw' => 'token-date:raw',
    'token-view:name' => 'token-view:name',
    'token-view:description' => 'token-view:description',
    'token-view:machine-name' => 'token-view:machine-name',
    'token-view:title' => 'token-view:title',
    'token-view:url' => 'token-view:url',
    'entity_field_extra-taxonomy_term:description' => 'entity_field_extra-taxonomy_term:description',
    'entity_field_extra-user:summary' => 'entity_field_extra-user:summary',
    'entity_field-comment:comment_body' => 'entity_field-comment:comment_body',
    'entity_field-node:body' => 'entity_field-node:body',
    'entity_field-node:field_tags' => 'entity_field-node:field_tags',
    'entity_field-node:field_image' => 'entity_field-node:field_image',
    'block-blog-recent' => 'block-blog-recent',
    'block-comment-recent' => 'block-comment-recent',
    'block-menu-devel' => 'block-menu-devel',
    'block-node-syndicate' => 'block-node-syndicate',
    'block-node-recent' => 'block-node-recent',
    'block-search-form' => 'block-search-form',
    'block-system-powered-by' => 'block-system-powered-by',
    'block-system-help' => 'block-system-help',
    'block-system-navigation' => 'block-system-navigation',
    'block-system-management' => 'block-system-management',
    'block-system-user-menu' => 'block-system-user-menu',
    'block-system-main-menu' => 'block-system-main-menu',
    'block-user-login' => 'block-user-login',
    'block-user-new' => 'block-user-new',
    'block-user-online' => 'block-user-online',
    'block-devel-execute_php' => 'block-devel-execute_php',
    'block-devel-switch_user' => 'block-devel-switch_user',
    'custom-custom' => 'custom-custom',
  );
  $export['panelizer_node:blog_allowed_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:blog_allowed_types_default';
  $strongarm->value = 0;
  $export['panelizer_node:blog_allowed_types_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:blog_default';
  $strongarm->value = array(
    'entity_form_field' => 'entity_form_field',
    'token' => 'token',
    'entity_field_extra' => 'entity_field_extra',
    'entity_field' => 'entity_field',
    'block' => 'block',
    'custom' => 'custom',
    'panels_mini' => 'panels_mini',
    'other' => 'other',
  );
  $export['panelizer_node:blog_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:page:default_selection';
  $strongarm->value = 0;
  $export['panelizer_node:page:default_selection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:page:page_manager_selection';
  $strongarm->value = 'node:page:default';
  $export['panelizer_node:page:page_manager_selection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:page:teaser_selection';
  $strongarm->value = 0;
  $export['panelizer_node:page:teaser_selection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_page_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:11:"panels_page";s:23:"allowed_layout_settings";a:29:{s:8:"flexible";b:1;s:14:"twocol_stacked";b:1;s:13:"twocol_bricks";b:1;s:25:"threecol_25_50_25_stacked";b:1;s:6:"onecol";b:1;s:6:"twocol";b:1;s:25:"threecol_33_34_33_stacked";b:1;s:17:"threecol_33_34_33";b:1;s:17:"threecol_25_50_25";b:1;s:25:"mothership-html5page-page";b:1;s:12:"two_50_mp_fw";b:1;s:9:"one_mp_fw";b:1;s:14:"three_33_mp_fw";b:1;s:8:"three_33";b:1;s:13:"two_33_66_alt";b:1;s:6:"two_50";b:1;s:6:"one_fw";b:1;s:14:"three_25_50_25";b:1;s:16:"three_inset_left";b:1;s:3:"one";b:1;s:9:"two_brick";b:1;s:7:"four_25";b:1;s:9:"two_33_66";b:1;s:17:"three_inset_right";b:1;s:9:"two_66_33";b:1;s:11:"three_33_mp";b:1;s:6:"one_mp";b:1;s:10:"four_25_mp";b:1;s:9:"two_50_mp";b:1;}s:10:"form_state";N;}';
  $export['panels_page_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_page_default';
  $strongarm->value = array(
    'entity_form_field' => 'entity_form_field',
    'token' => 'token',
    'entity_field_extra' => 'entity_field_extra',
    'entity_field' => 'entity_field',
    'block' => 'block',
    'custom' => 'custom',
    'panels_mini' => 'panels_mini',
    'other' => 'other',
  );
  $export['panels_page_default'] = $strongarm;

  return $export;
}
