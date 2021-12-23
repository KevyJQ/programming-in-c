#include <stdio.h>

#include "primos.h"

int primo(int numero){
  if(numero == 0 || numero == 1){
    return 0;
  }
  for(int i = 2; i < numero ; i++){
    if((numero % i) == 0){
      return 0;
    }
  }
  return 1;
}
