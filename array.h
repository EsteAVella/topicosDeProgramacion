#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED
#define TAM 5
#include "array.c"
//auxiliares =>

int mostrarVec(int* pv, unsigned* ce);
int esLetra(char letra);
char aMin(char letra);
char aMayusc(char letra);

//EJERCICIOS

int insertarPorPosicion (int vec[],int num, unsigned* ce,int pos);
int insertarOrdenado (int* vec, int num, unsigned* ce);
int eliminarPoss( int* vec, int poss, unsigned* ce);
int eliminarPrimero (int* vec, int num, unsigned* ce);
int eliminarApariciones (int* vec, int num, unsigned* ce);

int mStrLen(char* orig);
char* mstrCat(char* dest, const char *ori);


#endif // ARRAY_H_INCLUDED
