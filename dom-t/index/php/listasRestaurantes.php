<?php 
    require_once '../../conexion/php/conexion.php';
    function get_listas(){
        $conn = getConn();   
        $query = 'SELECT * FROM restaurate';
        $resultado = $conn->query($query);
        while ( $row = $resultado->fetch_array(MYSQLI_ASSOC)){
            echo "<p><a>$row[nombre]</a></p></br>";
        }
    }
    echo get_listas();  
?>