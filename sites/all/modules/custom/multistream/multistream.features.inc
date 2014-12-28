<?php
/**
 * @file
 * multistream.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function multistream_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function multistream_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function multistream_flag_default_flags() {
  $flags = array();
  // Exported flag: "Favoriting of multistreams".
  $flags['multistream_favs'] = array(
    'entity_type' => 'node',
    'title' => 'Favoriting of multistreams',
    'global' => 0,
    'types' => array(
      0 => 'multistream',
    ),
    'flag_short' => 'Favorite',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unfavorite',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'teaser' => TRUE,
    ),
    'show_as_field' => FALSE,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'show_on_page' => 0,
    'api_version' => 3,
    'module' => 'multistream',
    'locked' => array(
      0 => 'name',
    ),
    'status' => FALSE,
    'import_roles' => array(
      'flag' => array(
        0 => 2,
      ),
      'unflag' => array(
        0 => 2,
      ),
    ),
  );
  // Exported flag: "User stream favorites".
  $flags['stream_favs'] = array(
    'entity_type' => 'stream',
    'title' => 'User stream favorites',
    'global' => 0,
    'types' => array(
      0 => 'stream',
    ),
    'flag_short' => 'Favorite',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unfavorite',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(),
    'show_as_field' => FALSE,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => FALSE,
    'api_version' => 3,
    'module' => 'multistream',
    'locked' => array(
      0 => 'name',
    ),
    'status' => FALSE,
    'import_roles' => array(
      'flag' => array(
        0 => 2,
      ),
      'unflag' => array(
        0 => 2,
      ),
    ),
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function multistream_node_info() {
  $items = array(
    'multistream' => array(
      'name' => t('Multistream'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
