#include <stdio.h>
#include <stdlib.h>
#include "matematica.h"

int main()
{
    int a = 8;
    int b = 13;
    int c = 9;
    float tol = 0.2;

    printf("el numero %d^%d es :%d\n",a,b, exponente(a,b));
    printf("e elevado a %d, es :%f \n",a,eulerX(a,tol));
    printf("La raiz cuadrada de %d es:%f \n",c,raizCuadrada(c,tol));
    printf("encontro el numero %d en la serie de fibonacci? ::%d\n",a,fibonacci(a));
    printf("el seno de %d es: %f \n",a,sen(a,tol));
    printf("clasificacion del numero %d es: %d \n",a,clasificacionNatural(a));
    printf("el producto entre a:%d y b:%d es:: %d\n",a,b, producto(a,b));
    printf("La suma de los primeros N= %d numeros es:: %d \n",b,numParesMen(b));
    printf("El numero a=%d es primo? :::%d",b,esPrimo(b));
    return 0;
}

