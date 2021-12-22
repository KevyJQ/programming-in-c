#include <stdio.h>

#include "desicion.h"

int main(){
  int numero;
  printf("Dame el numero y te dire si es primo o no: ");
  scanf("%d",&numero);
  if(desicion(numero)){
    printf("Es primo\n");
  }else{
    printf("No es primo\n");
  }
}
