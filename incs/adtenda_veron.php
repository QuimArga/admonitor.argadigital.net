<?php
$servername = "frutasveron.es";
$username = "adtenda_frutasveron";
$password = "Arga2020";
$dbname = "adtenda_frutasveron";

$link = mysqli_connect($servername, $username, $password, $dbname);
if ($link === false) {
  die("ERROR: Could not connect. " . mysqli_connect_error());
}
?>