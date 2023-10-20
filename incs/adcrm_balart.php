<!-- CAPÇALERES I LINIES ADCRM BALART -->     
<?php
// Adlogistics Joprimsa
$conn = ftp_connect('balart.adcrm.net', 21);
$result = ftp_login($conn, 'sel2909', 'ViaCannetum2');
// Esto si queremos ponerlo en modo pasivo, sino lo ponemos en FALSE
$mode = ftp_pasv($conn, TRUE);
$file_list = ftp_nlist($conn, "");
$n=0;
foreach ($file_list as $file)
{
    if ($file<>'arxius_tractats'){
        $n++;
    }
}
?>
<div class="col-sm-3 col-lg-3">
  <div class="dash-unit">
      <div class="cont">
      <img src="images/balart.png">
        <?php
        if ($n<>0){
          ?>
          <p class="blink"><bold><bad><?=$n?></bad></bold></p>
          <?php
        }else{
          ?>
          <p><bold><ok><?=$n?></ok></bold></p>
          <?php
        }
        ?>
        
      </div>
  </div>
</div>
<?php
//close
ftp_close($conn);
?> 