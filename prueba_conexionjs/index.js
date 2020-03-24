$(document).ready(function(){
    $('#enviar').click(function(){
      var datos = $('#formulario').serialize();
      alert (datos); 
      $.ajax({
        type: "POST",
        url: "index.php",
        data: datos,
        success:function(r){
            if (r == 1){
                alert ('Datos ingresados con exito');
            }else{
                alert ('Fallo el server');
            }
        }
      });
      return false; 
    });
})
