#include <stdio.h>  //Libreria

#include "fraccion.h" 

int main(){

  struct fraccion fra = { //Implementacion de struct donde contendra los valores del numerador y denominador
  .numerador = 2, //Asignacion del numerador
  .denominador = 4  //Asignacion del denominador
  };

  struct fraccion res_mult = fraccion_multiplicacion(&fra,&fra);  //Mandamos a llamar al metodo fraccion_multiplicacion, donde nos va a regresar un valor que lo vamos a almacenar en res_mult.
  
  imprimir(&res_mult);  //Mandamos a llamar al metodo imprimir que le vamos a mandar como referencia la direccion donde esta almacenado el valor de res_mult

}

