#include <stdio.h>

#include "menu_deci.h"


int menu_decision(){
  int opcion;
  printf("... Bienvenido ...\n");
  printf("Las opciones son las siguientes\n1. Suma\n2. Resta\n3. Multiplicacion\n4. Division\nQue opcion desea: ");
  scanf("%d",&opcion);
  return opcion;
}
