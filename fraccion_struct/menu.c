#include <stdio.h>

#include "menu.h"

int menu(){
  int opcion;
  printf("Que operacion deseas realizar\n1. Multiplicacion\n2. Resta\n3. Suma\n4. Division\nOpcion: ");
  scanf("%d",&opcion);
  return opcion;
}
