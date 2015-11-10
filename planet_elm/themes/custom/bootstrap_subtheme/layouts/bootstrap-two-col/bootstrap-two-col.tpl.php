<?php print $content['header']; ?>

<div class="container">
  <div class="row">
    <div class="col-md-8">
      <div class="main-content">
        <?php print $content['content']; ?>
      </div>
    </div>

    <div class="col-md-4 hidden-xs">
      <div class="row">
        <div class="col-md-8">
          <div class="sidebar">
        <?php print $content['sidebar']; ?>
      </div>
    </div>
  </div>
</div>

<?php print $content['footer']; ?>

