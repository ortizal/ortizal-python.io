$(document).ready(function(){
    $.ajax({
        type:'POST',
        url:'../php/listar.php'             
    })
    .done(function(lista){
if (){};
        $('#listado').html(lista);
    })
    .fail(function(){
        alert('Error en cargar las listas');
    })
    return false;
    
})