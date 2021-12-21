#include <stdio.h>

#include "fraccion.h"
#include "menu.h"


int main(){
  struct fraccion fra1 = {
    .numerador = 8,
    .denominador = 12,
  };
  
  int opcion;
  opcion = menu();
  switch(opcion){
    case 1:
      fraccion_multiplicar(fra1, fra1);
      break;
    case 2:
      fraccion_resta(fra1,fra1);
      break;
    case 3:
      fraccion_suma(fra1,fra1);
      break;
    case 4:
      fraccion_division(fra1,fra1);
      break;
    default:
      printf("Esa opcion no existe..\n");
      break;
  }
  return 0;
}
