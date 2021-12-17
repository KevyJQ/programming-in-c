#include <stdio.h>
#include <stdlib.h>

#include "menu.h"
#include "cuadrado.h"
#include "circulo.h"
#include "rectangulo.h"
#include "opc_area_perimetro.h"


int main(){
  int respuesta = menu();
  switch(respuesta){
    case 1:
      printf("..Cuadrado..\n");
      int respuesta =  opcion_area_perimetro();
      decision_cuadrado(respuesta);
      break;
    case 2:
      printf("..Circulo..\n");
      int respuesta2 =  opcion_area_perimetro();
      decision_circulo(respuesta2);
      break;
    case 3:
      printf("..Rectangulo..\n");
      int respuesta3 =  opcion_area_perimetro();
      decision_rectangulo(respuesta3);
      break;
    case 4:
      printf("\t... BYE ...\n");
      break;
    default:
      printf("Esa opcion no existe..");
      break;
  }
  return 0;
}
