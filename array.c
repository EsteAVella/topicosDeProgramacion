#include "array.h"


//aux
int mostrarVec(int* pv,unsigned* ce){

    printf("\n{");
    for(int i = 0; i < *ce; i++){
        printf(" %d ",*(pv+i));
    }
    printf("}\n");

    return 1;
}

int esLetra(char letra){

    if( (letra >= 65 && letra <= 90) || (letra >= 97 && letra <= 122) ){
        return 1;
    } else {
        return 0;
    }
}

char aMin(char letra){

    if(letra >= 65 && letra <= 90){
        return letra + 32;
    }
    return letra;
}

char aMayusc(char letra){

    if(letra >= 97 && letra <= 122){
        return letra - 32;
    }
    return letra;
}

char* saltarEspacios(char* frase){

    if(!(*frase)) return NULL;

    while(!esLetra(*frase) && *frase){
        frase++;
    }
    return frase;
}

char* saltarLetras(char* frase){
    if(!(*frase)) return NULL;

    while(esLetra(*frase)){
        frase ++;
    }
    return frase;
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

//ARRAY PERO CHAR

int mStrLen(char* orig){

    int cant = 0;

    while(*orig){
        orig++;
        //falta es letra
        cant++;
    }

    return cant;
}

char* mstrCat(char* dest, const char * ori){
    char* ini = dest;

    while(*dest){
        dest++;
    }

    while(*ori){
        *dest = *ori;
        dest++;
        ori++;
    }

    *dest = '\0';

    return ini;
}

int mStrcmp(const char* cad1, const char* cad2){
// Caso ideal 0  | ambas cadenas son iguales
// Caso positivo | cad1 es mas grande que cad2
// Caso negativo | cad1 es menor que cad2
    while(*cad1 && *cad2){
        if(*cad1 != *cad2){
            return *cad1-*cad2;
        }
        cad1++;
        cad2++;
    }
    return *cad1 - *cad2;
}

//Ejercicio 1.6
int esPalindromo(char* palabra){

    char* ini = palabra;
    char* fin = palabra + strlen(palabra)-1;

    while(ini < fin){
        if(!esLetra(*ini)){
            ini ++;
        } else if ( !esLetra(*fin)){
            fin--;
        } else {
            if(*ini != *fin){
                return 0;
            }
        ini++;
        fin--;
        }
    }

    return 1;
}

//Ejercicio 1.7
int valorPalabra(char* palabra){

    int cant = 0;

    while(*palabra){

        if(esLetra(*palabra)){
            cant += *palabra;
        }
        palabra++;
    }

    return cant;
}

//Ejercicio 1.8
int contarApariciones(char* cad, char* palabra){
    int cant = 0;

    while(*cad){

        if(*cad == *palabra){
            return 0;
        }
        cad++;
    }


    return cant;
}

char* proximaPalabra(char *frase) {
    // Saltar los espacios iniciales
    frase = saltarEspacios(frase);
    if (!*frase) return NULL;  // Si no hay más palabras, retornamos NULL

    // Este es el inicio de la palabra
    char *inicio = frase;

    // Saltamos las letras de la palabra
    frase = saltarLetras(frase);

    // Si no es el final del string, terminamos la palabra actual con un '\0'
    if (*frase) {
        *frase = '\0';  // Cortamos la palabra actual
        frase++;        // Avanzamos al próximo caracter
    }

    // Retornamos el inicio de la palabra encontrada
    return inicio;
}

//void* _memcopy(void* dest, void* src, size_t count)

