
///MOSTRAR MENU DE BICICLETAS: AL INICIALIZAR , EL PROGRAMA DEBE MOSTRAR UNA LISTA DE 5 MARCAS DE BICICLETAS DISPONIBLES EN LA TIENDA, JUNTO CON SUS
///PRECIOS. LA INFORMACION DE LAS BICICLETAS DEBE SER ALMACENADA EN UNA MATRIZ BIDIMENSIONAL

/// SELECCIONAR BICICICLETA:EL USUARIO DEBE PODER SELECCIONAR UNA BICICLETA INGRESANDO EL NUMERO CORRESPONDIENTE.
///UNA VEZ SELECCIONADA, EL PROGRAMA DEBE MOSTRAR UNA DESCRIPCION DETALLADA DE LA BICICLETA

///OPCIONES DESPUES DE SELECCIONAR: DESPUES DE MOSTRAR LA DESCRIPCION, EL PROGRAMA DEBE OFRECER DOS OPCIONES:
///VOLVER AL MENU ANTERIOR PARA SELECCIONAR OTRA BICICLETA, PROCEDER A LA COMPRA DE LA BICICLETA SELECCIONADA

///PROCESO DE COMPRA: SI EL USUARIO DECIDE COMPRAR LA BICICLETA, EL PROGRAMA DEBE CONFIRMAR LA COMPRA Y MOSTRAR UN MENSAJE DE
///"COMPRA EXITOSA". SI EL USUARIO DECIDE NO COMPRAR, EL PROGRAMA DEBE TERMINAR.

/// VOLVER AL MENU: SI EL USUARIO DECIDE VOLVER AL MENU ANTERIOR, DEBE SER CAPAZ DE SELECCIONAR OTRA BICICLETA O SALIR DEL PROGRAMA.


#include <iostream>
#include<vector>
using namespace std;

 int main(){
//1) INICIALIZAR UNA MATRIZ DE 5 * 2 PARA LA LISTA DE BICICLETAS (MARCA Y PRECIO)
//2) MOSTROR LA MATRIZ
int  matrizBicicletas[5] [2]={
      { 1, 10},
      { 2, 20},
      { 3, 30},
      { 4, 40},
      { 5, 50},
    };
cout<< " a continuacion podra ver la nuestra lista de bicicletas con sus marcas y precios " <<endl;

    for ( int i=0; i<5; i++){
         for(int j=0; j<2; j++){
            cout<< matrizBicicletas[i][j] << " " ;
         }
      cout<< endl;
    }
cout<< endl;
//3)INICIALIZAR UNA VARIABLE PARA QUE EL USUARIO INGRESE SU RESPUESTA
//4) crear un switch para comparar la respuesta ingresada por el usuario, y asi poder devolver la descripcion del producto;

 int respuesta;

 cout<< "ingrese un numero del 1 al 5 (en el orden en que se encuentra la lista) para obtener mas informacion sobre la bicicleta: ";
 cin>> respuesta;

 switch (respuesta){
     case 1:
          cout<<"la bicicleta 1 es de color roja y negra";
          break;
     case 2:
          cout<<"la bicicleta 2 es de color azul y negra";
          break;
     case 3:
          cout<<"la bicicleta 3 es de color negra";
          break;
     case 4:
          cout<<"la bicicleta 4 es de color rosa y blanca";
          break;
     case 5:
          cout<<"la bicicleta 5 es de color blanca y negra";
          break;
          }
  cout<< endl;
//5) inicializar una variable para que el usuario ingrese su respuesta
//6 mostrar texto para que el usuario pueda elegir e ingresar su respuesta
//7) crear un if y un else para interactuar segun respuesta

 int respuesta2;

 cout<< " 1.desea volver al menu anterior para seleccionar otra bicibleta. " <<endl
     << " 2.proceder con la compra de la bicicleta seleccionada. "<< endl
     <<" digite su opcion: ";
  cin>> respuesta2;

  if(respuesta2 ==1){

    cout<< "ingrese un numero del 1 al 5 (en el orden en que se encuentra la lista) para obtener mas informacion sobre la bicicleta: ";
 cin>> respuesta;

 switch (respuesta){
     case 1:
          cout<<"la bicicleta 1 es de color roja y negra";
          break;
     case 2:
          cout<<"la bicicleta 2 es de color azul y negra";
          break;
     case 3:
          cout<<"la bicicleta 3 es de color negra";
          break;
     case 4:
          cout<<"la bicicleta 4 es de color rosa y blanca";
          break;
     case 5:
          cout<<"la bicicleta 5 es de color blanca y negra";
          break;
          }
  cout<< endl;

  } else{

//8) INICIALIZAR UNA VARIABLE PARA LA RESPUESTA DEL USUARIO
//9) un if para proceser segun respuesta del usuario

char respuesta3;

 cout<<"desea confirmar la compra de la bicicleta? (si=s / no=n) .";
 cin>> respuesta3;

 if(respuesta3 == 's'){
        cout<< "la compra fue exitosa.";
   }
}

//10) INICIALIZAR UNA VARIABLE PARA LA RESPUESTA DEL USUARIO
// 11) un if para proceser segun respuesta del usuario

char respuesta4;

cout<< "desea volver al menu anterior(si=s) o salir del programa(no=n)? :  " << endl;
cin>> respuesta4;

if(respuesta4 == 's'){

 cout<< "ingrese un numero del 1 al 5 (en el orden en que se encuentra la lista) para obtener mas informacion sobre la bicicleta: ";
 cin>> respuesta;

 switch (respuesta){
     case 1:
          cout<<"la bicicleta 1 es de color roja y negra";
          break;
     case 2:
          cout<<"la bicicleta 2 es de color azul y negra";
          break;
     case 3:
          cout<<"la bicicleta 3 es de color negra";
          break;
     case 4:
          cout<<"la bicicleta 4 es de color rosa y blanca";
          break;
     case 5:
          cout<<"la bicicleta 5 es de color blanca y negra";
          break;
          }

    cout<< endl;

   };

return 0;
}



