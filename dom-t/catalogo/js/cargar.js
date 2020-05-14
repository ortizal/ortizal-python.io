$(document).ready(function(){
  datos = '../../index/php/listasRestaurantes.php';
  $.ajax({
    type:'POST',
    url:'../php/listar.php',
    data:datos,
    success:function(lista){
      if(r == 1){
          $('#listado').html(lista);
      }else{
            alert ("error");
      }    
    }
  })
})