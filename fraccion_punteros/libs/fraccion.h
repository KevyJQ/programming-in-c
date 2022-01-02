#ifndef FRACCION_H
#define FRACCION_H

struct fraccion{
  int numerador;
  int denominador;
};

struct fraccion fraccion_suma(struct fraccion *f1,struct fraccion *f2);
struct fraccion fraccion_resta(struct fraccion *f1,struct fraccion *f2);
struct fraccion fraccion_multiplicacion(struct fraccion *f1,struct fraccion *f2);
struct fraccion fraccion_division(struct fraccion *f1,struct fraccion *f2);

struct fraccion fraccion_simplificar(struct fraccion *f);
void imprimir(struct fraccion *f);

#endif //FRACCION_H
