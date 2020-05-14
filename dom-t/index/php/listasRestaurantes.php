<?php 
    require_once '../../conexion/php/conexion.php';
    function get_listas(){
        $conn = getConn();   
        $query = 'SELECT * FROM restaurante';
        $resultado = $conn->query($query);
        while ( $row = $resultado->fetch_array(MYSQLI_ASSOC)){
           echo $message = "<p>$row[nombre]</p></br>";
        }    
    }
    
?>