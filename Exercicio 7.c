#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {
    int num1, num2, diferenca=0;

        printf (" Digite um numero inteiro \n");
        scanf  ("%d", &num1);

        printf (" Digite mais um numero inteiro \n");
        scanf  ("%d", &num2);

    if (num1>num2){

        printf (" O numero %d e maior que o numero %d \n", num1, num2);
    }else if (num2>num1){

        printf (" O numero %d e maior que o numero %d \n", num2, num1);
    }else {
        
        printf (" Números iguais \n");

    }

    return 0;
}
