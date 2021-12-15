#include <stdio.h>
#include <string.h>

int pedirNumero(){
  int numero;
  printf("Dame el numero de la tabla de multiplicar que deseas: ");
  scanf("%d",&numero);
  return numero;
}

void imprimir(int numero, int multiplicacion,int i){
  printf("%d X %d = %d\n",numero,i,multiplicacion);
}

void multiplicacion(int numero){
  for(int i=0;i<=10;i++){
    int multiplicacion = numero*i;
    imprimir(numero,multiplicacion,i);
  }
}

int main() {
  int numero = pedirNumero();
  multiplicacion(numero);
  return 0;
}

