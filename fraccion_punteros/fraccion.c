#include <stdio.h>

#include "fraccion.h"

void imprimir(struct fraccion *f){
  printf("El resultado es: %d / %d\n",f->numerador,f->denominador);
}

struct fraccion fraccion_multiplicacion(struct fraccion *f1,struct fraccion *f2){
  struct fraccion mult;
  mult.numerador = f1->numerador * f2->numerador;
  mult.denominador = f1->denominador * f2->denominador;
  //imprimir(&mult);
  
  return mult;
}
