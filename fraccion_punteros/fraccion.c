#include <stdio.h>

#include "fraccion.h"

void imprimir(struct fraccion *f){
  printf("El resultado es: %d / %d\n",f->numerador,f->denominador);
}

struct fraccion fraccion_simplificar(struct fraccion *f){
  if(f->numerador < f->denominador){
    for(int i = f->numerador; i >= 1;i--){
      int num = f->numerador;
      int deno = f->denominador;
      if(((num % i) == 0) && ((deno % i)==0)){
        f->numerador = f->numerador / i;
        f->denominador = f->denominador / i;
      }
    }
  }else{
    for(int i = f->denominador; i >= 1; i--){
      int num = f->numerador;
      int deno = f->denominador;
      if(((num % i) == 0) && ((deno % i) == 0)){
        f->numerador = f->numerador / i;
        f->denominador = f->denominador / i;
      }
    }
  }
}

struct fraccion fraccion_suma(struct fraccion *f1,struct fraccion *f2){
  //suma
  struct fraccion sum;
  //Este caso solo aplica cuando es la misma fraccion la que estamos sumando
  sum.numerador = f1->numerador + f2->numerador;
  sum.denominador = f1->denominador;
  if(sum.numerador == 0 || sum.denominador == 0){
    printf("El resultado dara 0 o no se podra realizar..\n");
  }
  return sum;
}

struct fraccion fraccion_resta(struct fraccion *f1,struct fraccion *f2){
  //Resta
  struct fraccion res;
  //Este forma solo funciona siempre y cuando sea la misma fraccion la que se esta restando
  res.numerador = f1->numerador - f2->numerador;
  res.denominador = f2->denominador;
  return res;
}

struct fraccion fraccion_multiplicacion(struct fraccion *f1,struct fraccion *f2){
  struct fraccion mult;
  mult.numerador = f1->numerador * f2->numerador;
  mult.denominador = f1->denominador * f2->denominador;
  if(mult.numerador == 0 || mult.denominador == 0){
    printf("El resultado de la operacion es 0 o no se puede realizar...\n");
  }
  return mult;
}

struct fraccion fraccion_division(struct fraccion *f1, struct fraccion *f2){
  //Division
  struct fraccion divi;
  divi.numerador = f1->numerador * f2->denominador;
  divi.denominador = f1->denominador * f2->numerador;
  if(divi.numerador == 0 || divi.denominador == 0){
    printf("Esta division no se puede realizar..\n");
  }
  return divi;
}

