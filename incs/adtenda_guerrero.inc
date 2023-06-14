<?php
$servername = "qadt893.adtenda.net";
$username = "qadt893";
$password = "Arga2020";
$dbname = "qadt893";

$link = mysqli_connect($servername, $username, $password, $dbname);
if ($link === false) {
  die("ERROR: Could not connect. " . mysqli_connect_error());
}
//tornem a definir la variable doncs la agafa per el nom del png
$dbname = "adtenda_guerrero";
?>