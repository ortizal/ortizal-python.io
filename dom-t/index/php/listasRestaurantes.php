<?php 
    require_once '../../conexion/php/conexion.php';
    function get_listasRestaurante(){
        $conn = getConn();   
        $query = 'SELECT * FROM restaurante';
        $resultado = $conn->query($query);
        while ( $row = $resultado->fetch_array(MYSQLI_ASSOC)){
           echo $message = "<p>$row[nombre]</p></br>";
        }    
    }
    function get_listasRpa(){
        $conn = getConn();   
        $query = 'SELECT * FROM almacenropa';
        $resultado = $conn->query($query);
        while ( $row = $resultado->fetch_array(MYSQLI_ASSOC)){
            echo "$row[nombre]</br>";
        }
    }
    
?>