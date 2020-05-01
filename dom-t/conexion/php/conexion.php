<?php
    function conn(){
        $conexion=mysqli_connect("localhost","root","","dom-t");
        $conexion->set_charset ('utf8');
        return $conexion;
    }
?>