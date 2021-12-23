#include <stdio.h>

#include "primos.h"

int main(){
  int numero;
  printf("Dame el numero y te dire si es primo o no: ");
  scanf("%d",&numero);
  if(primo(numero)){
    printf("Es primo\n");
  }else{
    printf("No es primo\n");
  }
}
