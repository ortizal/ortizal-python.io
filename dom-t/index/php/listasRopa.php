<?php 
    require_once '../../conexion/php/conexion.php';
    function get_listas(){
        $conn = getConn();   
        $query = 'SELECT * FROM almacenropa';
        $resultado = $conn->query($query);
        while ( $row = $resultado->fetch_array(MYSQLI_ASSOC)){
            echo "$row[nombre]</br>";
        }
    }
    echo get_listas();  
?>