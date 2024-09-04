#include <stdio.h>
#include <stdlib.h>
#include "matematica.h"
#include "array.h"

int main()
{
    int vec[TAM] = {2,3,3,6,8};
    unsigned ce = 5;
    int* pv = vec;
    int num = 3;
//    int pos = 2;

    printf(" El siguiente vector es el original: \n");
    mostrarVec(pv,&ce);
    printf("\n Agregamos el numero: %d en orden y queda el siguiente vector: \n",num);
    printf("\n El array de retorno despues del delete poss: %d \n",eliminarApariciones(pv,num,&ce));
    mostrarVec(pv,&ce);

    return 0;
}

