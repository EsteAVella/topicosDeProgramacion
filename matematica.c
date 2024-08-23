#include "matematica.h"
#include <math.h>

//auxiliares

int suma(int a, int b){
    return a+b;
}

int exponente( int num, int exp){
    int aux = num;
    if( exp == 0){
        return num = 1;
    }
    if(exp == 1){
        return num;
    }
    for(int i = 2; i <= exp; i++){
        aux*=num;
    }
    return aux;
}

//Ejercicio 1_  (Y)
int factorial(int num){
    int aux = 1;

    for(int i = num; i > 0 ; i--){
        aux*=i;
    }
    return aux;
}

//Ejercicio 2_

int combinatoria( int m, int n){
    int calc;
    if(n >= m || n <= 0){
        return 0;
    }
    calc = factorial(m)/(factorial(n)*factorial(m-n));
    return calc;
}

//Ejercicio 3_

float eulerX(int ex, float tol){
    int ciclo = 1;
    float term = 1;
    float termAnt;
    float aux;

    do{
        termAnt = term;
        term+= ((float)exponente(ex,ciclo)/factorial(ciclo));
        aux = term - termAnt;
        ciclo ++;
    }while(aux>tol);

    return term;
}

//Ejercicio 4_

float raizCuadrada(int num, float tol){
    float term = 1;
    float termAnt;
    float aux;

    do{
       termAnt = term;
       term = 0.5*(termAnt+num/termAnt);
       aux = termAnt - term;
       if(aux < 0){
        aux = aux * -1;
       }
    }while(aux > tol);

    return term;
}

//Ejercicio 5_

int fibonacci( int num ){
    int actual = 1;
    int anterior = 1;
    int aux;

    do{
        aux = anterior + actual;
        anterior = actual;
        actual = aux;
    }while(actual < num);

    if( num == actual){
        return 1;
    } else {
        return 0;
    }
}

//Ejercicio 6_

float sen( int num, float tol){
    float term = 0;
    float aux = num;
    int ciclo = 3;
    int iter = 1;
    do{
        term = (float)exponente(num,ciclo)/factorial(ciclo);
        if(iter % 2 == 0){
            aux += term;
        }else{
            aux -= term;
        }
        ciclo +=2;
        iter ++;
    }while( fabs(term) > tol);

    return aux;
}

//Ejercicio 7_
// FALTA HACER QUE DEVUELVA SI ES IGUAL ES PERFECTO SI ES MENOR ES DEFICIENTE Y SI ES MAYOR ES ABUNDANTE
int clasificacionNatural(int num){
    int calc = 0;
    int aux = num/2;

    for(int i = aux; i > 0; i--){
        if( (num % i) == 0){
            calc += i;
        }
    }
    return calc;
}

//Ejercicio 8_

int producto( int num, int num2){
    int aux = 0;
    if(num == 0 || num2 == 0){
        return aux = 0;
    }
    for(int i = num2; i>0 ; i--){
        aux += num;
    }
    return aux;
}

//Ejercicio 9_



