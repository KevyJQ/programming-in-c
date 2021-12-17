#include <stdio.h>
#include <stdbool.h>

#include "opc_area_perimetro.h"

int opcion_area_perimetro(){
  
  bool desicion = false;
  int option;

  while(desicion == false){
    printf("Que opcion deseas..\n1. Area\n2. Perimetro\nOpcion:");
    scanf("%d",&option);
    if(option == 1 || option == 2){
      return option;
    }else{
      printf("Desicion erronea..\n");
      if(option != 1 && option != 2){
        desicion = true;
      }
    }
  }
  return 0;
}
