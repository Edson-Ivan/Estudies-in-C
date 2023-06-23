#include <stdio.h>
#include <math.h>


int main () {
    float numero, raiz, quadrado=0;

        printf ("Por favor digite um valor \n");
        scanf  ("%f", &numero);

    if (numero >=0 ) {

        raiz = sqrt (numero);
        quadrado = pow (numero, 2);
        printf (" A raiz quadrada do numero digitado e %.2f, e o quadrado e %.2f  \n", raiz, quadrado);

    }else {
        
        printf ("Numero invalido\n");
    }

    return 0;
}