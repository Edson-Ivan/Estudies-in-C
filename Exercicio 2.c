#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main () {
    float numero, raiz=0;

        printf ("Por favor digite um valor \n");
        scanf  ("%f", &numero);

    if (numero >=0 ) {

        raiz = sqrt (numero);
        printf (" A raiz quadrada do numero digitado e %.2f \n", raiz);

    }else {
        
        printf ("Numero invalido\n");
    }

    return 0;
}