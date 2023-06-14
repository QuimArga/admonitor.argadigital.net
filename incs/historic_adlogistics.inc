<?php
$pendents=0;
$sql = "SELECT * FROM lin_repartiment WHERE DATE(data)<>'$avui'";
$result2 = mysqli_query($link, $sql);
if (!empty($result2) and mysqli_num_rows($result2) > 0) {
  while ($row2 = mysqli_fetch_assoc($result2)) {
    $pendents++;
  }
} 
?>
<div class="col-sm-3 col-lg-3">
    <div class="half-unit">
        <dtitle>Històric <?=$servername?></dtitle>
        <hr>
        <div class="cont">
            <?php
            if ($pendents>0){
                ?>
                <p class="blink"><bold><bad><?=$pendents?></bad></bold></p>
                <?php
            }else{
                ?>
                <p><bold><?=$pendents?></bold></p>
                <?php
            }
            ?>
        </div>
    </div>
</div>