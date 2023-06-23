#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {
    float numero1, numero2, resultado=0;
    char operacoes=0;
    int i=1;

        printf (" Por favor, digite o simbolo da operação desejada (+, -, *, /) \n");
        scanf  ("%c", &operacoes);

    switch (operacoes) {

        case '+':  printf (" Digite o 1 para realizar a operação \n");
                   scanf  ("%f", &numero1);

                   printf (" Digite o 2 para realizar a operação \n");
                   scanf  ("%f", &numero2);
                   resultado = numero1+numero2;

                   printf (" O resultado da operação e = %.2f \n", resultado);
        break;
                
        case '-':  printf (" Digite o 1 para realizar a operação \n");
                   scanf  ("%f", &numero1);

                   printf (" Digite o 2 para realizar a operação \n");
                   scanf  ("%f", &numero2);
                   resultado = numero1-numero2;

                   printf (" O resultado da operação e = %.2f \n", resultado);
        break;

        case '*':  printf (" Digite o 1 para realizar a operação \n");
                   scanf  ("%f", &numero1);

                   printf (" Digite o 2 para realizar a operação \n");
                   scanf  ("%f", &numero2);
                   resultado = numero1*numero2;

                   printf (" O resultado da operação e = %.2f \n", resultado);
        break;

        case '/':  printf (" Digite o 1 para realizar a operação \n");
                   scanf  ("%f", &numero1);

                   printf (" Digite o 2 para realizar a operação \n");
                   scanf  ("%f", &numero2);
                   resultado = numero1/numero2;

                   printf (" O resultado da operação e = %.2f \n", resultado);
        break;

        default : printf (" Operação invalida \n");
        break;
       
    }

    return 0;
}
