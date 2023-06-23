#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {
    int numero=0;
    float logaritimo=0;

        printf (" Por favor, digite um numero inteiro positivo \n");
        scanf ("%d", &numero);

    if (numero>=0){

        logaritimo = log (numero); // na base e = 2.7812...

        printf (" A função log do valor digitado e = %.2f \n", logaritimo);

    }else {

        printf (" Valor invalido \n");
    }



    return 0;
}
