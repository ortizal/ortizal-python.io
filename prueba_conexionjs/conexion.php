<?php
function get_conn(){
    $conexion=mysqli_connect('localhost','root','','prueba');
    $conexion->set_charset('utf8');
    return $conexion;
}
?>