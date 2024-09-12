#include <stdio.h>
#include <stdlib.h>
#include "matematica.h"
#include "array.h"
#include "matrices.h"
#define MAX_FIL 50
#define MAX_COL 50
#define MAXA 20

int main()
{
    char cad1[MAXA] = "hola";
    //char cad2[] = " mundo";

    printf("%d",mStrLen(cad1));

    return 0;
}

    /*
    unsigned cf = 3;
    unsigned cc = 3;

    int mat[MAX_FIL][MAX_COL] = {     {1,1,1},
                                      {2,1,1},
                                      {2,2,1}
                                };
    mostrarMatriz(mat, cf, cc);

    printf("la suma inferior de la matriz m es: %d", sumaInferior(mat,cf,cc));
    */
