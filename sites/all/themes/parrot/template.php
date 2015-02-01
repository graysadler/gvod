<?php
/*
  Preprocess
*/


function parrot_preprocess_html(&$vars) {
  //  kpr($vars['content']);

  if(user_is_anonymous()) {
    $vars['classes_array'][] = 'anon';
  }
}

function parrot_preprocess_page(&$vars,$hook) {
  //typekit
  //drupal_add_js('http://use.typekit.com/XXX.js', 'external');
  //drupal_add_js('try{Typekit.load();}catch(e){}', array('type' => 'inline'));

  //webfont
  //drupal_add_css('http://cloud.webtype.com/css/CXXXX.css','external');

  //googlefont
  //  drupal_add_css('http://fonts.googleapis.com/css?family=Bree+Serif','external');

  // If this is a panel page, add template suggestions.
  // Must have Ctools Page Manager enabled. Uncomment to use.
  if (module_exists('page_manager')) {
    if($panel_page = page_manager_get_current_page()) {
      // add a generic suggestion for all panel pages
      $vars['theme_hook_suggestions'][] = 'page__panel';

      // add the panel page machine name to the template suggestions
      $vars['theme_hook_suggestions'][] = 'page__' . $panel_page['name'];

      //add a body class for good measure
      $body_classes[] = 'page-panel';
    }
  }
}

function parrot_preprocess_region(&$vars,$hook) {
  //  kpr($vars['content']);
}

function parrot_preprocess_block(&$vars, $hook) {
  //  kpr($vars['content']);

  //lets look for unique block in a region $region-$blockcreator-$delta
   $block =
   $vars['elements']['#block']->region .'-'.
   $vars['elements']['#block']->module .'-'.
   $vars['elements']['#block']->delta;

  // print $block .' ';
   switch ($block) {
     case 'header-menu_block-2':
       $vars['classes_array'][] = '';
       break;
     case 'sidebar-system-navigation':
       $vars['classes_array'][] = '';
       break;
    default:

    break;

   }


  switch ($vars['elements']['#block']->region) {
    case 'header':
      $vars['classes_array'][] = '';
      break;
    case 'sidebar':
      $vars['classes_array'][] = '';
      $vars['classes_array'][] = '';
      break;
    default:

      break;
  }

}

function parrot_preprocess_node(&$vars,$hook) {
  //  kpr($vars['content']);
}

function parrot_preprocess_comment(&$vars,$hook) {
  //  kpr($vars['content']);
}

function parrot_preprocess_field(&$vars,$hook) {
  //  kpr($vars['content']);
  //add class to a specific field
  switch ($vars['element']['#field_name']) {
    case 'field_ROCK':
      $vars['classes_array'][] = 'classname1';
    case 'field_ROLL':
      $vars['classes_array'][] = 'classname1';
      $vars['classes_array'][] = 'classname2';
      $vars['classes_array'][] = 'classname1';
    case 'field_FOO':
      $vars['classes_array'][] = 'classname1';
    case 'field_BAR':
      $vars['classes_array'][] = 'classname1';
    default:
      break;
  }
}

function parrot_preprocess_maintenance_page(){
  //  kpr($vars['content']);
}

/*

changes the classes from the div wrapper around each field
change the div class="description" to <small>
adds form-required
*/
function parrot_form_element($variables) {
  $output = '';
  
  $element = &$variables['element'];
  // This is also used in the installer, pre-database setup.
  $t = get_t();

  // This function is invoked as theme wrapper, but the rendered form element
  // may not necessarily have been processed by form_builder().
  $element += array(
      '#title_display' => 'before',
  );

  // Add element #id for #type 'item'.
  if (isset($element['#markup']) && !empty($element['#id'])) {
    $attributes['id'] = $element['#id'];
  }
  // Add element's #type and #name as class to aid with JS/CSS selectors.

  $attributes['class'] = array();
  if(! theme_get_setting('mothership_classes_form_wrapper_formitem')){
    $attributes['class'] = array('form-item');
  }

  //date selects need the form-item for the show/hide end date
  if(isset($element['#type'])){
    if ($element['#type'] == 'date_select' OR $element['#type'] == 'date_text' OR $element['#type'] == 'date_popup' ){ //AND
      $attributes['class'] = array('form-item');
    }

  }

  if (!empty($element['#type'])) {
    if(!theme_get_setting('mothership_classes_form_wrapper_formtype')){
      $attributes['class'][] = 'form-type-' . strtr($element['#type'], '_', '-');
    }
  }
  if (!empty($element['#name'])) {
    if(!theme_get_setting('mothership_classes_form_wrapper_formname')){
      $attributes['class'][] = 'form-item-' . strtr($element['#name'], array(' ' => '-', '_' => '-', '[' => '-', ']' => ''));
    }
  }
  // Add a class for disabled elements to facilitate cross-browser styling.
  if (!empty($element['#attributes']['disabled'])) {
    $attributes['class'][] = 'form-disabled';
  }

  if((isset($element['#title']) && $element['#title'] != 'Language') && (isset($element['#required']) && $element['#required'])) {
    $attributes['class'][] = 'form-required';
  }


  //freeform css class killing \m/
  if($attributes['class']){
    $remove_class_form = explode(", ", theme_get_setting('mothership_classes_form_freeform'));
    $attributes['class'] = array_values(array_diff($attributes['class'],$remove_class_form));
  }

  if($attributes['class']){
    $output =  '<div' . drupal_attributes($attributes) . '>' . "\n";
  }else{
    //$output =  "\n" . '<div>' . "\n";
  }


  // If #title is not set, we don't display any label or required marker.
  if (!isset($element['#title'])) {
    $element['#title_display'] = 'none';
  }
  $prefix = isset($element['#field_prefix']) ? '<span class="field-prefix">' . $element['#field_prefix'] . '</span> ' : '';
  $suffix = isset($element['#field_suffix']) ? ' <span class="field-suffix">' . $element['#field_suffix'] . '</span>' : '';

  $output .= '<div class="field-icon-wrapper"><div class="field-icon"></div></div>';
  
  switch ($element['#title_display']) {
  	case 'before':
  	case 'invisible':
  	  $output .= ' ' . theme('form_element_label', $variables);
  	  $output .= ' ' . $prefix . $element['#children'] . $suffix . "\n";
  	  break;

  	case 'after':
  	  $output .= ' ' . $prefix . $element['#children'] . $suffix;
  	  $output .= ' ' . theme('form_element_label', $variables) . "\n";
  	  break;

  	case 'none':
  	case 'attribute':
  	  // Output no label and no required marker, only the children.
  	  $output .= ' ' . $prefix . $element['#children'] . $suffix . "\n";
  	  break;
  }

  if (!empty($element['#description'])) {

    /*
     changes the description <div class="description"> to <small>
    */
    if(!theme_get_setting('mothership_classes_form_description')){
      $output .= "\n" . '<div class="description">' . $element['#description'] . "</div>\n";
    }else{
      $output .= "\n" . '<small>' . $element['#description'] . "</small>\n";
    }


  }
  if($attributes['class']){
    $output .= "</div>\n";
  }
  return $output;
}

/*
 * remove form-text class
* remove text type if its html5
* add placeholder in html5
*/
function parrot_textfield($variables) {
  $element = $variables['element'];
  $element['#size'] = isset($element['#size']) ? $element['#size'] : 30;

  //is this element requred then lest add the required element into the input
  $required = !empty($element['#required']) ? ' required' : '';

  //dont need to set type in html5 its default so lets remove it because we can
  $element['#attributes']['type'] = 'text';

  //placeholder
  if (!empty($element['#title']) AND theme_get_setting('mothership_classes_form_placeholder_label') ) {
    $element['#attributes']['placeholder'] =  $element['#title'];
  }


  element_set_attributes($element, array('id', 'name', 'value', 'size', 'maxlength'));

  //remove the form-text class
  if(!theme_get_setting('mothership_classes_form_input')){
    _form_set_class($element, array('form-text'));
  }
  $extra = '';
  if ($element['#autocomplete_path'] && drupal_valid_path($element['#autocomplete_path'])) {
    drupal_add_library('system', 'drupal.autocomplete');
    $element['#attributes']['class'][] = 'form-autocomplete';

    $attributes = array();
    $attributes['type'] = 'hidden';
    $attributes['id'] = $element['#attributes']['id'] . '-autocomplete';
    $attributes['value'] = url($element['#autocomplete_path'], array('absolute' => TRUE));
    $attributes['disabled'] = 'disabled';
    $attributes['class'][] = 'autocomplete';
    $extra = '<input' . drupal_attributes($attributes) . $required .' />';
  }

  $output = '<input' . drupal_attributes($element['#attributes']) . $required . ' />';

  return $output . $extra;
}

/**
 * Theme function to output content for classic Quicktabs style tabs.
 *
 * @ingroup themeable
 */
function parrot_qt_quicktabs($variables) {
  $element = $variables['element'];
  $output = '<div '. drupal_attributes($element['#options']['attributes']) .'>';

  if($variables['element']['#options']['attributes']['id'] == 'quicktabs-player_menu') {
    if(user_is_anonymous()) {
      $block = multistream_block_view('multistream_panel_actions_anon');      
    } else {
      $block = multistream_block_view('multistream_panel_actions');      
    }
    //$output .= $block['content'];       
    $element['container']['actions'] = array('#markup' => $block['content'], '#weight' => -100);
    $element['tabs']['share'] = module_invoke('sharethis', 'block_view', 'sharethis_block');
    $element['tabs']['more'] = '<div id="player-more-wrapper"><div class="button"></div><ul class="more-actions"><li class="new">New Multi-Stream</li><li class="open">Open Favorites</li><li class="save">Save</li></ul></div>';    
  }
  
  $output .= drupal_render($element['tabs']);
 
  $output .= drupal_render($element['container']);
  $output .= '<div class="handle"></div>';
  $output .= '</div>';
  
  return $output;
}

/**
 * Theme function to output tablinks for classic Quicktabs style tabs.
 *
 * @ingroup themeable
 */
function parrot_qt_quicktabs_tabset($vars) {
  $variables = array(
      'attributes' => array(
          'class' => 'quicktabs-tabs quicktabs-style-' . $vars['tabset']['#options']['style'],
      ),
      'items' => array(),
  );
  foreach (element_children($vars['tabset']['tablinks']) as $key) {
    $item = array();
    if (is_array($vars['tabset']['tablinks'][$key])) {
      $tab = $vars['tabset']['tablinks'][$key];
      if ($key == $vars['tabset']['#options']['active']) {
        $item['class'] = array('active');
      }
      $item['class'][] = drupal_html_class($tab['#title']);
      $item['data'] = drupal_render($tab);
      $variables['items'][] = $item;
    }
  }
  $output = '<div class="quicktabs-tabs-wrapper">';
  
  if(isset($vars['tabset']['share'])) {
    $output .= $vars['tabset']['share']['content'];
  }
  $output .= theme('item_list', $variables);
  if(isset($vars['tabset']['more'])) {
    $output .= $vars['tabset']['more'];
  }
  $output .= '</div>';
  return $output;
}

/**
 * Returns HTML for help text based on file upload validators.
 *
 * @param $variables
 *   An associative array containing:
 *   - description: The normal description for this field, specified by the
 *     user.
 *   - upload_validators: An array of upload validators as used in
 *     $element['#upload_validators'].
 *
 * @ingroup themeable
 */
function parrot_file_upload_help($variables) {
  $description = $variables['description'];
  $upload_validators = $variables['upload_validators'];

  $descriptions = array();

  if (strlen($description)) {
    $descriptions[] = $description;
  }
  if (isset($upload_validators['file_validate_size'])) {
    //$descriptions[] = t('Files must be less than !size.', array('!size' => '<strong>' . format_size($upload_validators['file_validate_size'][0]) . '</strong>'));
  }
  if (isset($upload_validators['file_validate_extensions'])) {
    //$descriptions[] = t('Allowed file types: !extensions.', array('!extensions' => '<strong>' . check_plain($upload_validators['file_validate_extensions'][0]) . '</strong>'));
  }
  if (isset($upload_validators['file_validate_image_resolution'])) {
    $max = $upload_validators['file_validate_image_resolution'][0];
    $min = $upload_validators['file_validate_image_resolution'][1];
    if ($min && $max && $min == $max) {
      $descriptions[] = t('Images must be exactly !size pixels.', array('!size' => '<strong>' . $max . '</strong>'));
    }
    elseif ($min && $max) {
      $descriptions[] = t('Images must be between !min and !max pixels.', array('!min' => '<strong>' . $min . '</strong>', '!max' => '<strong>' . $max . '</strong>'));
    }
    elseif ($min) {
      $descriptions[] = t('Min. Size: !min.', array('!min' => '' . $min . ''));
    }
    elseif ($max) {
      $descriptions[] = t('Images must be smaller than !max pixels.', array('!max' => '<strong>' . $max . '</strong>'));
    }
  }

  return implode('<br />', $descriptions);
}

/**
 * Returns HTML for an image field widget.
 *
 * @param $variables
 *   An associative array containing:
 *   - element: A render element representing the image field widget.
 *
 * @ingroup themeable
 */
function parrot_image_widget($variables) {
  $element = $variables['element'];
  $output = '';
 
  $output .= '<div class="image-widget form-managed-file clearfix">';

  if (isset($element['preview'])) {
    $output .= '<div class="image-preview">';
    $output .= drupal_render($element['preview']);
    $output .= '</div>';
  }

  $output .= '<div class="image-widget-data">';
  if ($element['fid']['#value'] != 0) {
    $element['filename']['#markup'] .= ' <span class="file-size">(' . format_size($element['#file']->filesize) . ')</span> ';
  }
  
  $element['upload']['#attributes']['class'][] = 'upload';
  $element['remove_button']['#attributes']['class'][] = 'remove-button';
  $element['upload_button']['#attributes']['class'][] = 'upload-button';
  $element['alt']['#attributes']['class'][] = 'alt';
  $element['title']['#attributes']['class'][] = 'title';
  
  $output .= drupal_render_children($element);
  $output .= '</div>';
  $output .= '</div>';

  return $output;
}

function parrot_preprocess_form_element(&$vars) {
  $element = $vars['element'];
  
  switch($element['#field_name']) {
  	case 'field_cover':
  	case 'field_player_background':
  	  $vars['element']['#title_display'] = 'after';
  	  break;
  }
}