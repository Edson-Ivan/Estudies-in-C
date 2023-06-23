#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {
    char estado[30];
    float valor_Final=0;

        printf (" Por favor digite o valor do bruto do produto \n");
        scanf  ("%f", &valor_Final);

        printf (" informe a sigla do seu estado \n");
        scanf  ("%s", estado);

        printf ("\n\n %s\n", estado);

    /*switch (estado) {

        case 'mg' : valor_Final += (valor_Final* 7)/100;
                           printf (" O valor a ser pago e = %.2f \n", valor_Final);
        break;

        case 'sp' : valor_Final += (valor_Final* 12)/100;
                           printf (" O valor a ser pago e = %.2f \n", valor_Final);
        break;

        case 'rj' : valor_Final += (valor_Final* 15)/100;
                           printf (" O valor a ser pago e = %.2f \n", valor_Final);
        break;

        case 'rs' : valor_Final += (valor_Final* 8)/100;
                           printf (" O valor a ser pago e = %.2f \n", valor_Final);
        break;

        default : printf (" ERRO \n");
        break;

    }*/

    if (estado=="mg" || estado =='MG') {

        printf ("OKKKKK");


    }
    
    printf ("teste");
    
    
    return 0;
}
