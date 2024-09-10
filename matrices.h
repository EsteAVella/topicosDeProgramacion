#ifndef MATRICES_H_INCLUDED
#define MATRICES_H_INCLUDED
#include "matrices.c"
#define MAX_FIL 50
#define MAX_COL 50

void mostrarMatriz( int mat[][MAX_COL], unsigned cf, unsigned cc);
int esIdentidad(int mat[][MAX_COL], unsigned cf, unsigned cc);
int trazaDeMatriz(int mat[][MAX_COL], unsigned cf, unsigned cc);
int sumaSuperior(int mat[][MAX_COL], unsigned cf, unsigned cc);
int sumaInferior(int mat[][MAX_COL], unsigned cf, unsigned cc);

#endif // MATRICES_H_INCLUDED
