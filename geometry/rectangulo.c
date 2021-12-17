#include <stdio.h>

#include "rectangulo.h"
#include "opc_area_perimetro.h"

void decision_rectangulo(int respuesta){
  if(respuesta == 1){
    rectangulo_calculo_area(); 
  }else if(respuesta == 2){
    rectangulo_calculo_perimetro();
  }
}

void rectangulo_calculo_area(){
  int base,altura,area;
  printf("Dame la base: ");
  scanf("%d",&base);
  printf("Dame la altura: ");
  scanf("%d",&altura);
  area = base*altura;
  printf("El area del rectangulo es: %d\n",area);
} 

void rectangulo_calculo_perimetro(){
  int base,altura,perimetro;
  printf("Dame la base: ");
  scanf("%d",&base);
  printf("Dame la altura: ");
  scanf("%d",&altura);
  perimetro = (2*base)+(2*altura);
  printf("El perimetro del rectangulo es: %d\n",perimetro);
}
