#include <stdio.h>

#include "circulo.h"
#include "opc_area_perimetro.h"

void decision_circulo(int respuesta){
  if(respuesta == 1){
    circulo_calculo_area(); 
  }else if(respuesta == 2){
    circulo_calculo_perimetro();
  }
}

void circulo_calculo_area(){

  float radio,area;
  printf("Dame el radio: ");
  scanf("%f",&radio);
  area = (3.14*(radio*radio));
  printf("El area del circulo es: %.2f\n",area);
} 

void circulo_calculo_perimetro(){
  float radio,perimetro;
  printf("Dame el radio: ");
  scanf("%f",&radio);
  perimetro = 2*3.14*radio;
  printf("El perimetro del circulo es: %.2f\n",perimetro);
}
