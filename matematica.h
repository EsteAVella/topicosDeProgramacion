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

float raizCuadrada(int a, float tol);
float eulerX(int ex, float tol);
float seno( int num, float tol);

#endif // MATEMATICA_H_INCLUDED
