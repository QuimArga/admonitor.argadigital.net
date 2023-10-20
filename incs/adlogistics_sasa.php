<?php
$servername = "sasa.adlogistics.net";
$username = "adlogistics_sasa";
$password = "Arga2019";
$dbname = "adlogistics_sasa";

$link = mysqli_connect($servername, $username, $password, $dbname);
if ($link === false) {
  die("ERROR: Could not connect. " . mysqli_connect_error());
}
?>