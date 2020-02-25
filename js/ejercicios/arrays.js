var amigos=["Miguel", "Fabio","Emerson","Gabriel"];
document.write('Tienes ' + amigos.length +' en tus contactos'+'<br>');
document.write('Tu tercer amigo en lista es: ' + amigos[2] +'<br>');
amigos[0]="Andres";
document.write(amigos+'<br>');
var amigas=["Mile","Natha","Giss","Cynthia"];
amiguis=amigos.concat(amigas);
document.write(amiguis+'<br>');
document.write(amiguis.join(' @ ') +'<br>');
