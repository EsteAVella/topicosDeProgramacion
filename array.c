#include "array.h"

int mostrarVec(int* pv,unsigned* ce){

    printf("\n{");
    for(int i = 0; i < *ce; i++){
        printf(" %d ",*(pv+i));
    }
    printf("}\n");

    return 1;
}

// Ejercicio 1.1

int insertarPorPosicion(int vec[], int num, unsigned* ce, int pos){

    if(pos > TAM || pos < 1){
        return -1;
    };

    pos--;

    for(int i = *ce; i >= pos; i--){
        vec[i+1] = vec[i];
    }
    vec[pos] = num;
    (*ce) ++;

    return 1;
}

//Ejercicio 1.2

int insertarOrdenado(int* vec, int num, unsigned* ce){

    int* fin = vec;
    int* maxVec = vec + TAM;
    // con esto posicionamos el vector al final del array que haya lugar
    fin += (*ce == TAM) ? (*ce-1) : (*ce); // faltaria la parte que si esta lleno que me ubique en el vec+= *ce-1

    // Esta condicion esta de mas tendria que ve con el lote de pruebas a ver que pasa
    if( maxVec <= fin || (maxVec == fin && *fin > num )){
        return -1;
    }
    // Condicion si el cantidad de elementos == TAM maximo del vector y el numero es mas grande que el ultimo ordenado
    if( *ce == TAM && num >= *fin ){
        return -1;
    }

    while( vec < fin && *(fin-1)>num ){
        *fin = *(fin-1);
        fin --;
    }

    *fin = num;

    if( *fin > num){
        *fin = num;
    }

    if( *ce < TAM){
        *ce += 1;
    }

    return 1;
}

//Ejercicio 1.3

int eliminarPoss(int* vec, int poss, unsigned* ce){

    int* fin = vec + *(ce);
    vec += poss-1;

    if(poss > *ce){
        return -1;
    }

    *vec = *(vec+1);
    while(fin > vec){
     *vec = *(vec+1);
     vec++;
    }
    *ce -= 1;

    return 1;
}

//Ejercicio 1.4

int eliminarPrimero (int* vec, int num, unsigned* ce){

    int* fin = vec + *ce;
    int aux = *ce;

    while( fin > vec ){

        if( aux > *ce){
            *vec = *(vec+1);
        }

        if(aux == *ce && *vec == num ){
            *vec = *(vec+1);
            *ce -= 1;
        }

        vec++;
    }

    return 1;
}

//Ejercicio 1.5

int eliminarApariciones (int* vec, int num, unsigned* ce){

    int* fin = vec + *ce;
    int* pl = vec;


    while(fin > vec){

        while( (*pl == num) && pl < fin ){
            pl ++;
            *ce -= 1;
        }

        if(*vec == num){
            *vec = *pl;

        }

        vec++;
        pl++;
    }

    return 1;
}


