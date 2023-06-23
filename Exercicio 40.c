#include <stdio.h>
#include <stdlib.h>

int main () {
    float valor_Fabrica, valor_Final=0;

        printf (" digite o valo de fabrica do automovel \n");
        scanf  ("%f", &valor_Fabrica);

    if ( valor_Fabrica <= 12000) {

        valor_Final = (valor_Fabrica) + ((valor_Fabrica*5)/100);
        printf (" O custo final e = %.2f \n", valor_Final);

        }else if (valor_Fabrica > 12000 && valor_Fabrica <= 25000) {

            valor_Final = (valor_Fabrica) + (((10+15)*valor_Fabrica)/100);
            printf (" O custo final e = %.2f \n", valor_Final);

    }else if (valor_Fabrica > 25000) {

        valor_Final = (valor_Fabrica) + (((20+15)*valor_Fabrica)/100);
        printf (" O custo final e = %.2f \n", valor_Final);
            
    }else {

        printf (" ERRO \n");
    }
// CORRIGIR PORCENTAGEM;

    return 0;
}