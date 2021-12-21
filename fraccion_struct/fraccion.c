#include "fraccion.h"

#include <stdio.h>

void fraccion_imprimir(struct fraccion f) {
  printf("%d / %d\n", f.numerador, f.denominador);
}

struct fraccion fraccion_simplificar(struct fraccion f){
  if(f.numerador < f.denominador){
    //printf("Numerador es menor\n");
    for(int i=f.numerador;i>=1;i--){
      int num = f.numerador;
      int deno = f.denominador;
      if(((num % i) == 0) && ((deno % i) == 0)){
        f.numerador = f.numerador / i;
        f.denominador = f.denominador / i;
      }
    }
    fraccion_imprimir(f);
  }else{
    //Numerador es mayor
    for(int i=f.denominador;i>=1;i--){
      int num = f.numerador;
      int deno = f.denominador;
      if(((num % i) == 0) && ((deno % i) == 0)){
        f.numerador = f.numerador / i;
        f.denominador = f.denominador / i;
      }
    }
    fraccion_imprimir(f);
  }
}

struct fraccion fraccion_multiplicar(struct fraccion f1, struct fraccion f2){
  struct fraccion mult;
  mult.numerador = f1.numerador * f2.numerador;
  mult.denominador = f1.denominador * f2.denominador;
  if(mult.numerador == 0 || mult.denominador == 0){
    printf("Esta multiplicacion se hace cero o se indetermina\n");
  }else{
    printf("El resultado de la multiplicacion es: ");
    fraccion_simplificar(mult);
    //fraccion_imprimir(mult);
  }
  return mult;
}

struct fraccion fraccion_resta(struct fraccion f1, struct fraccion f2){
  struct fraccion rest;
  if(f1.denominador == f2.denominador){
    rest.denominador = f1.denominador;
    rest.numerador = f1.numerador - f2.numerador;
    if(rest.numerador == 0 || rest.denominador == 0){
      printf("Esta resta se hace cero o se indetermina\n");
    }
  }else{  //Esta parte esta para seguirr modificando los casos...
    rest.denominador = f1.denominador * f2.denominador;
    rest.numerador = (((rest.denominador/f1.denominador)*f1.numerador)-((rest.denominador/f2.denominador)*f2.numerador));
    fraccion_imprimir(rest);
  }
  return rest;
}

struct fraccion fraccion_suma(struct fraccion f1, struct fraccion f2){
  struct fraccion suma;
  if(f1.denominador == f2.denominador){
    suma.denominador = f1.denominador;
    suma.numerador = f1.numerador + f2.numerador;
    if(suma.numerador == 0){
      suma.denominador = 0;
      printf("El resultado de la suma es %d\n",suma.numerador);
    }else if(suma.denominador == 0){
      printf("Esto tiende al infinito..\n");
    }else{
      printf("El resultado de la suma es: ");
      fraccion_simplificar(suma);
    }
  }else{  //Esta parte esta para seguirr modificando los casos...
    suma.denominador = f1.denominador * f2.denominador;
    suma.numerador = (((suma.denominador/f1.denominador)*f1.numerador)+((suma.denominador/f2.denominador)*f2.numerador));
    fraccion_simplificar(suma);
  }
  return suma;
}

struct fraccion fraccion_division(struct fraccion f1,struct fraccion f2){
  struct fraccion divi;
  divi.numerador = f1.numerador * f2.denominador;
  divi.denominador = f1.denominador * f2.numerador;
  if(divi.numerador == 0 || divi.denominador == 0){
    printf("Esta division es indefinida..\n");
  }else if(divi.numerador == divi.denominador){
    printf("El resultado de la division es 1\n");
  }else{
    fraccion_imprimir(divi);
  }
  return divi;
}

