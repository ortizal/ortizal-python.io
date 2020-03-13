<?php
require_once "conexion.php";
$conn=get_conn();
$nombres=$_POST['txt_nombre'];
$apellidos=$_POST['txt_apellido'];
$pass=$_POST['txt_password'];
// $insert="INSERT usuario('nombre','apellido','password') VALUES ('$nombres','$apellidos','$pass')"
// $query
return $nombres;
?>