<?php
require_once 'conexion.php';
    function get_listas(){
        $conn = get_conn();   
        $query = 'SELECT * FROM nacionalidades';
        $resultado = $conn->query($query);
        $listas = "<option value='0' >--Seleccione una opcion--</option>";
        while ( $row = $resultado->fetch_array(MYSQLI_ASSOC)){
            $listas .= "<option value='$row[cod_nac]' >$row[pais]</option>";
        }
        return $listas;
    }
    echo get_listas();    
?>