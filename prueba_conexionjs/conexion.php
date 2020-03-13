<?php
function get_conn(){
    $conexion=mysqli_connect('localhost','root','','prueba');
    return $conexion;
}
?>