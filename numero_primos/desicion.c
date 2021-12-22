#include <stdio.h>

#include "desicion.h"

int desicion(int numero){
  if(numero == 0 || numero == 1 || numero == 4){
    return 0;
  }
  for(int i = 2; i < numero ; i++){
    if((numero % i) == 0){
      return 0;
    }
  }
  return 1;
}

