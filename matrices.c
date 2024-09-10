#include "matrices.h"
#define MAX_FIL 50
#define MAX_COL 50

//Auxiliares

void mostrarMatriz(int mat[][MAX_COL], unsigned cf, unsigned cc){

    for(int i=0; i < cf; i++){

        for(int j = 0; j < cc; j++){
            printf(" %d ", mat[i][j]);
        };
        printf("\n");
    }
}

int esIdentidad( int mat[][MAX_COL], unsigned cf, unsigned cc){

    for( int i = 0; i < cf; i ++ ){
        if( i =! 1){
            return -1;
        }
    }

    return 1;
}

//Ejercicio 1.11

int trazaDeMatriz(int mat[][MAX_COL], unsigned cf, unsigned cc){

    int acum = 0;

    for( int i = 0; i < cf; i ++ ){
        acum += mat[i][i];
    }

    return acum;
}

//Ejercicio 1.12

int sumaSuperior(int mat[][MAX_COL], unsigned cf, unsigned cc){
    int i, j;
    int acum = 0;

    for( i = 0; i < j; i++){
        for( j = i + 1; j < cf; j++ ){
            acum += mat[i][j];
        }

    }
    return acum;
}

int sumaInferior(int mat[][MAX_COL], unsigned cf, unsigned cc){
    int i, j;
    int acum = 0;

    for( i = cf - 1; i > 0 ; i--){
        for( j = 0; j < i; j++ ){
            acum += mat[i][j];
        }

    }
    return acum;
}
