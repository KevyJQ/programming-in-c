#include <stdio.h>  //Libreria

#include "fraccion.h" 

int main(){

  struct fraccion fra = { //Implementacion de struct donde contendra los valores del numerador y denominador
  .numerador = 4, //Asignacion del numerador
  .denominador = 9  //Asignacion del denominador
  };

  struct fraccion res_suma = fraccion_suma(&fra,&fra);
  fraccion_simplificar(&res_suma);
  imprimir(&res_suma);

  struct fraccion res_resta = fraccion_resta(&fra,&fra);
  imprimir(&res_resta);

  struct fraccion res_mult = fraccion_multiplicacion(&fra,&fra);  //Mandamos a llamar al metodo fraccion_multiplicacion, donde nos va a regresar un valor que lo vamos a almacenar en res_mult.
  fraccion_simplificar(&res_mult);
  imprimir(&res_mult);  //Mandamos a llamar al metodo imprimir que le vamos a mandar como referencia la direccion donde esta almacenado el valor de res_mult

  struct fraccion res_divi = fraccion_division(&fra,&fra);
  fraccion_simplificar(&res_divi);
  imprimir(&res_divi);


}

