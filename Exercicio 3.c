#include <stdio.h>
#include <math.h>


int main () {
    float numero, raiz, quadrado=0;

        printf ("Por favor digite um valor \n");
        scanf  ("%f", &numero);

    if (numero >=0 ) {

        raiz = sqrt (numero);
        printf (" A raiz quadrada do numero digitado e %.2f \n", raiz);

    }else {
        
        quadrado = pow (numero, 2);
        printf ("O quadrado do numero digitado e %.2f \n", quadrado);
    }

    return 0;
}