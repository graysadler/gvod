<div class="stream-wrapper">
	<div class="image-wrapper">
		<div class="image"><?php print render($content['image']); ?></div>
		<div class="image-overlay"></div>		
	</div>
	<?php print render($content['channel']); ?>
	<?php print render($content['viewers']); ?>
	<div class="stream-actions">
  	<ul class="add-to-player">
  		<li class="item add-q">Q</li>
  		<li class="item add-1">1</li>
  		<li class="item add-2">2</li>
  		<li class="item add-3">3</li>
  		<li class="item add-4">4</li>
  		<li class="item add-5">5</li>
    </ul>
  	<div class="favorite"></div>
  	<div class="remove"></div>		
	</div>
</div>