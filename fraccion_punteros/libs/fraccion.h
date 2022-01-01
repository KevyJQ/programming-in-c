#ifndef FRACCION_H
#define FRACCION_H

struct fraccion{
  int numerador;
  int denominador;
};

struct fraccion fraccion_multiplicacion(struct fraccion *f1,struct fraccion *f2);

void imprimir(struct fraccion *f);

#endif //FRACCION_H
