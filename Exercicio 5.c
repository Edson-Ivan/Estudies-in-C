#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {
    int numero=0;

        printf (" Digite um valor inteiro \n");
        scanf  ("%d", &numero);

    if (numero%2 == 0){

        printf (" O numero digitado e um valor par \n");
    }else {

        printf (" O numero digitado e um valor impar \n");        
    }

    return 0;
}

