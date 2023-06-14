<?php
$servername = "terrassafruits.cat";
$username = "adtenda_terrasa";
$password = "Arga2020";
$dbname = "adtenda_terrasa";

$link = mysqli_connect($servername, $username, $password, $dbname);
if ($link === false) {
  die("ERROR: Could not connect. " . mysqli_connect_error());
}
?>