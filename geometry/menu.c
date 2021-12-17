#include <stdio.h>

#include "menu.h"

int menu(){
  int opcion;
  printf("\n... Bienvenidos ...\n");
  printf("Las siguientes figuras son las disponibles para calculos.\n"
  "1. Cuadrado\n"
  "2. Circulo\n"
  "3. Rectangulo\n"
  "4. Salir\n");
  
  printf("Que opcion deseas: ");
  scanf("%d",&opcion);

  printf("... ... ... ... ...\n");
  return opcion;
}
