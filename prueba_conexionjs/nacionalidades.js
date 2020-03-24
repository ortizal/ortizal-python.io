$(document).ready(function(){
    $.ajax({
        type:'POST',
        url:'nacionalidades.php'             
    })
    .done(function(lista_nacionalidades){
        $('#nacionalidades').html(lista_nacionalidades)    
    })
    .fail(function(){
        alert('Error en cargar las listas')
    })
})