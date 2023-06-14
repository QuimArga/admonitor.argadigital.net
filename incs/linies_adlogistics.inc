        <div class="col-sm-3 col-lg-3">
      		<div class="dash-unit">
	      		<dtitle>Entregues <?=$servername?></dtitle>
                <?php
                $xlin=0;
                $xok=0;
                $xin=0;
                $xre=0;
                $avui = date('Y-m-d');
                $sql = "SELECT * FROM lin_repartiment WHERE DATE(data)='$avui'";
                $result2 = mysqli_query($link, $sql);
                if (!empty($result2) and mysqli_num_rows($result2) > 0) {
                  while ($row2 = mysqli_fetch_assoc($result2)) {
                    
                    $xestat = $row2["estat"];
                    $xlin++;
                    
                    if (strcmp($xestat, "ok") == 0) {
                      $xok++;
                    } else if (strcmp($xestat, "in") == 0) {
                      $xin++;
                    } else if (strcmp($xestat, "no") == 0) {
                      $xin++;
                    } else if (strcmp($xestat, "") == 0) {
                      $xre++;
                    }
                    
                  }
                } 
                $xfet=$xok+$xin;
                $xtant=$xfet*100;
                if ($xtant<>0){
                    $xtant=$xtant/$xlin;
                    $xtant=Round($xtant,2);
                }else{
                    $xtant=0;
                }
                ?>
	      		<hr>
	      		<div class="cont">
					<p><bold><?=$xok?></bold> | <ok>Correctes</ok></p>
					<br>
                    <p><bold><?=$xin?></bold> | <bad>Incidència</bad></p>
					<br>
					<p><bold><?=$xre?></bold> | Pendent</p>
					<br>
                    <?php
                    if ($xtant==0){
                        ?>
                        <p class="blink"><img src="images/down-small.png" alt=""> <?=$xtant?>% Realitzat</p>
                        <?php
                    }else{
                        ?>
                        <p><img src="images/up-small.png" alt=""> <?=$xtant?>% Realitzat</p>
                        <?php
                    }
                    ?>
				</div>

			</div>
        </div>