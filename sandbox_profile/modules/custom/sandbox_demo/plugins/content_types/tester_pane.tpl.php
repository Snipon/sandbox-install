<?php 
  // $variables is the variable to use
?>

<ul class="stuff">
  <?php foreach($variables['stuff'] as $key => $row): ?>
    <li class='item row-<?php print $key; ?>'>
      <?php print $row; ?>
    </li>
  <?php endforeach; ?>
</ul>
