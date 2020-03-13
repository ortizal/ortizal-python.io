$(document).ready(function(){
    $("#formulario").bind("submit",function(){
        var enviar=$("#enviar");
        $.ajax({
            type:$(this).attr("method"),
            url:$(this).attr("action"),
            data:$(this).serialize(),
            success:function(data){
                $(".respuesta").html($nombres);
            },
            error:function(){
                alert("error al tratar de enviar el formulario");
            }
        })
        return false;
    })
})
