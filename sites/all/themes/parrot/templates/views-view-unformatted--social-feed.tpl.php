<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<div class="views-social-feed">
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <div class="item <?php print $view->result[$id]->node_type;?>">
    <?php print $row; ?>
  </div>
<?php endforeach; ?>
</div>