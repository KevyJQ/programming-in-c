#include <stdio.h>  //Libreria

#include "fraccion.h"
#include "menu_deci.h" 

int main(){

  struct fraccion fra = { //Implementacion de struct donde contendra los valores del numerador y denominador
  .numerador = 9, //Asignacion del numerador
  .denominador = 5  //Asignacion del denominador
  };

  int opc = menu_decision();
  struct fraccion res_vali;
  struct fraccion res_suma;
  struct fraccion res_resta;
  struct fraccion res_mult;
  struct fraccion res_divi;

  switch(opc){
    case 1:
      if(fra.numerador != 0 && fra.denominador != 0){
        res_suma = fraccion_suma(&fra,&fra);
        fraccion_simplificar(&res_suma);
        imprimir(&res_suma);
        break;
      }else{
        printf("Datos erroneos..\n");
        break;
      }
    case 2:
      if(fra.numerador != 0 && fra.denominador != 0){
        res_resta = fraccion_resta(&fra,&fra);
        if(&res_resta == 0){
          imprimir(&res_resta);
          break;  
        }else{
          printf("Esta operacion dara 0\n");
        }
      }else{
        printf("Datos erroneos..\n");
        break;
      }
      break;
    case 3:
      if(fra.numerador != 0 && fra.denominador != 0){
        res_mult = fraccion_multiplicacion(&fra,&fra);  //Mandamos a llamar al metodo fraccion_multiplicacion, donde nos va a regresar un valor que lo vamos a almacenar en res_mult.
        fraccion_simplificar(&res_mult);
        imprimir(&res_mult);  //Mandamos a llamar al metodo imprimir que le vamos a mandar como referencia la direccion donde esta almacenado el valor de res_mult        
        break;
      }else{
        printf("Datos erroneos..\n");
        break;
      }
    case 4:
      if(fra.numerador != 0 && fra.denominador != 0){
        res_divi = fraccion_division(&fra,&fra);
        fraccion_simplificar(&res_divi);
        imprimir(&res_divi); 
        break;
      }else{
        printf("Datos erroneos..\n");
        break;
      }
    default:
      printf("Esa opcion no existe..\n");
  }
}

