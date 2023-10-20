<?php
$sql = "SELECT * from cap_ped ORDER BY codi DESC LIMIT 1";
$result = $link->query($sql);
if ($result->num_rows > 0) {
    while ($row = $result->fetch_assoc()) {
        $data = $row["data"];
        $data_comanda = date("d-m-Y", strtotime($data));
        $data_avui = date("Y-m-d");
        
        $date1=date_create($data);
        $date2=date_create($data_avui);
        $diff=date_diff($date1,$date2);
        $diferencia = $diff->format("%a");

    }
}
?>
<li>
    <i class="unread"></i>
    <?php
    if ($diferencia >5){
        ?>
        <img class="avatar blink" src="images/<?=$dbname?>.png" alt="avatar">
        <?php
    }else{
        ?>
        <img class="avatar" src="images/<?=$dbname?>.png" alt="avatar">
        <?php
    }
    ?>
    <p class="sender"><?=$dbname?></p>
    <p class="message"><strong><?=$data_comanda?></strong></p>
</li>