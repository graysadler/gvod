<?php
/**
 * @file
 * multistream.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function multistream_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'games';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Games';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'See What\'s Hot';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Sort criterion: Taxonomy term: Viewers (field_viewers) */
  $handler->display->display_options['sorts']['field_viewers_value']['id'] = 'field_viewers_value';
  $handler->display->display_options['sorts']['field_viewers_value']['table'] = 'field_data_field_viewers';
  $handler->display->display_options['sorts']['field_viewers_value']['field'] = 'field_viewers_value';
  $handler->display->display_options['sorts']['field_viewers_value']['order'] = 'DESC';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'stream_category' => 'stream_category',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Games - What\'s Hot';
  $export['games'] = $view;

  $view = new view();
  $view->name = 'multistreams';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Multistreams';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Multistreams';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Stream Category (field_stream_category) */
  $handler->display->display_options['arguments']['field_stream_category_tid']['id'] = 'field_stream_category_tid';
  $handler->display->display_options['arguments']['field_stream_category_tid']['table'] = 'field_data_field_stream_category';
  $handler->display->display_options['arguments']['field_stream_category_tid']['field'] = 'field_stream_category_tid';
  $handler->display->display_options['arguments']['field_stream_category_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_stream_category_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_stream_category_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_stream_category_tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'multistream' => 'multistream',
  );
  /* Filter criterion: Content: Event Dates (field_event_dates) */
  $handler->display->display_options['filters']['field_event_dates_value']['id'] = 'field_event_dates_value';
  $handler->display->display_options['filters']['field_event_dates_value']['table'] = 'field_data_field_event_dates';
  $handler->display->display_options['filters']['field_event_dates_value']['field'] = 'field_event_dates_value';
  $handler->display->display_options['filters']['field_event_dates_value']['operator'] = '>=';

  /* Display: Browse by Game - Multistreams */
  $handler = $view->new_display('block', 'Browse by Game - Multistreams', 'browse_by_game_multistreams');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Stream Category (field_stream_category) */
  $handler->display->display_options['arguments']['field_stream_category_tid']['id'] = 'field_stream_category_tid';
  $handler->display->display_options['arguments']['field_stream_category_tid']['table'] = 'field_data_field_stream_category';
  $handler->display->display_options['arguments']['field_stream_category_tid']['field'] = 'field_stream_category_tid';
  $handler->display->display_options['arguments']['field_stream_category_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_stream_category_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_stream_category_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_stream_category_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'multistream' => 'multistream',
  );
  $handler->display->display_options['block_description'] = 'Browse by Game - Multistreams';

  /* Display: Browse by Game - Multistream Events */
  $handler = $view->new_display('block', 'Browse by Game - Multistream Events', 'browse_by_game_multistream_events');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Stream Category (field_stream_category) */
  $handler->display->display_options['arguments']['field_stream_category_tid']['id'] = 'field_stream_category_tid';
  $handler->display->display_options['arguments']['field_stream_category_tid']['table'] = 'field_data_field_stream_category';
  $handler->display->display_options['arguments']['field_stream_category_tid']['field'] = 'field_stream_category_tid';
  $handler->display->display_options['arguments']['field_stream_category_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_stream_category_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_stream_category_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_stream_category_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'multistream' => 'multistream',
  );
  /* Filter criterion: Content: Event Dates (field_event_dates) */
  $handler->display->display_options['filters']['field_event_dates_value']['id'] = 'field_event_dates_value';
  $handler->display->display_options['filters']['field_event_dates_value']['table'] = 'field_data_field_event_dates';
  $handler->display->display_options['filters']['field_event_dates_value']['field'] = 'field_event_dates_value';
  $handler->display->display_options['filters']['field_event_dates_value']['operator'] = '>=';
  $handler->display->display_options['block_description'] = 'Browse by Game - Multistream Events';

  /* Display: Browse by Game - My Multistreams */
  $handler = $view->new_display('block', 'Browse by Game - My Multistreams', 'browse_by_game_my_multistreams');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'multistream' => 'multistream',
  );
  $handler->display->display_options['block_description'] = 'Browse by Game - My Multistreams';
  $export['multistreams'] = $view;

  $view = new view();
  $view->name = 'streams';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'stream';
  $view->human_name = 'Streams';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'You Might Like These';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Add to player #';
  $handler->display->display_options['header']['area']['content'] = 'Add to player #';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Field: Stream: Stream ID */
  $handler->display->display_options['fields']['stream_id']['id'] = 'stream_id';
  $handler->display->display_options['fields']['stream_id']['table'] = 'stream';
  $handler->display->display_options['fields']['stream_id']['field'] = 'stream_id';
  /* Sort criterion: Stream: Viewers */
  $handler->display->display_options['sorts']['viewers']['id'] = 'viewers';
  $handler->display->display_options['sorts']['viewers']['table'] = 'stream';
  $handler->display->display_options['sorts']['viewers']['field'] = 'viewers';
  $handler->display->display_options['sorts']['viewers']['order'] = 'DESC';
  /* Filter criterion: Stream: Is_live */
  $handler->display->display_options['filters']['is_live']['id'] = 'is_live';
  $handler->display->display_options['filters']['is_live']['table'] = 'stream';
  $handler->display->display_options['filters']['is_live']['field'] = 'is_live';
  $handler->display->display_options['filters']['is_live']['value']['value'] = '1';

  /* Display: You Might Like These */
  $handler = $view->new_display('block', 'You Might Like These', 'block');
  $export['streams'] = $view;

  return $export;
}
