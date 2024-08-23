#ifndef MATEMATICA_H_INCLUDED
#define MATEMATICA_H_INCLUDED
#include "matematica.c"
#include <math.h>

#define ES_PAR(num) ((num % 2) == 0)

int suma(int a, int b);
int exponente(int num, int exp);

int factorial(int num);
int combinatoria(int m, int n);
int fibonacci(int num);
int clasificacionNatural(int num);
int producto(int num, int num1);
int sumaNNumeros(int num);
int sumaNNumerosPares(int num);
int numParesMen(int num);
int esPrimo(int num);

float raizCuadrada(int a, float tol);
float eulerX(int ex, float tol);
float seno( int num, float tol);
float cociente(int dv, int ds);

#endif // MATEMATICA_H_INCLUDED
