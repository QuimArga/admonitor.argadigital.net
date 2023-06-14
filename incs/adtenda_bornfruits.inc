<?php
$servername = "bornfruits.com";
$username = "adtenda_fruitfriends";
$password = "Arga2020";
$dbname = "adtenda_fruitfriends";

$link = mysqli_connect($servername, $username, $password, $dbname);
if ($link === false) {
  die("ERROR: Could not connect. " . mysqli_connect_error());
}
?>