#include <stdio.h>

#include "cuadrado.h"
#include "opc_area_perimetro.h"

void decision_cuadrado(int respuesta){
  if(respuesta == 1){
    cuadrado_calculo_area(); 
  }else if(respuesta == 2){
    cuadrado_calculo_perimetro();
  }
}

void cuadrado_calculo_area(){
  int lado,area;
  printf("Dame el lado: ");
  scanf("%d",&lado);
  area = lado*lado;
  printf("El area del cuadrado es: %d\n",area);
} 

void cuadrado_calculo_perimetro(){
  int lado,perimetro;
  printf("Dame el lado: ");
  scanf("%d",&lado);
  perimetro = 4*lado;
  printf("El perimetro del cuadrado es: %d\n",perimetro);
}
