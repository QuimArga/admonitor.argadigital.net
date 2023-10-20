<?php
$servername = "progresgarbi.cat";
$username = "adtenda_garbi";
$password = "Arga2020";
$dbname = "adtenda_garbi";

$link = mysqli_connect($servername, $username, $password, $dbname);
if ($link === false) {
  die("ERROR: Could not connect. " . mysqli_connect_error());
}
?>