<?php
require_once "conexion.php";
$conn=get_conn();
$nombres=$_POST['txt_nombre'];
$apellidos=$_POST['txt_apellido'];
$nacionalidad=$_POST['txt_nacionalidad'];
$usuario=$_POST['txt_usuario'];
$pass=sha1($_POST['txt_password']);
$insert="INSERT INTO usuario(nombre, apellido, nacionalidad, usuario, password) 
        VALUES ('$nombres','$apellidos','$nacionalidad','$usuario','$pass')";
$query=mysqli_query($conn,$insert);
echo $query;
?>