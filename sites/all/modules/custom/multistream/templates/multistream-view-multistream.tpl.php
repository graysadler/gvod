<div id="player-wrapper" class="<?php print $class; ?>">
  <div class="player-background" style="background-image:url(<?php print $background; ?>);"></div>
  <div id="player-messages"></div>
  <?php print render($player_menu); ?>
  <div id="riot-player-wrapper"><?php print $riot; ?></div>
  <?php print render($social_menu); ?>
</div>

