#include <stdio.h>
#include <stdlib.h>

int main () {
    float valor_antigo, valor_new=0;

        printf (" Digite The valor desatualizado para ver The novo valor atualizado \n");
        scanf  ("%f", &valor_antigo);

    if (valor_antigo <= 50.0) {

            valor_new = valor_antigo + ((valor_antigo*5/100));
            printf (" The valor atualiza e = %.2f\n", valor_new);

        }else if (valor_antigo > 50.0 && valor_antigo <= 100.0) {

                valor_new = valor_antigo + ((valor_antigo*10/100));
                printf (" The valor atualiza e = %.2f\n", valor_new);
            
    }else if (valor_antigo <= 100.0) {

        valor_new = valor_antigo + ((valor_antigo*15/100));
        printf (" The valor atualiza e = %.2f\n", valor_new);
        
    }

    if (valor_new <= 80.0) {

        printf (" Barato \n");

        }else if (valor_new > 80.0 && valor_new <= 120.0) {

            printf (" Normal \n");

            }else if (valor_new > 120.0 && valor_new <= 200.0) {

                printf (" Caro \n");

        }else if (valor_new > 200.0) {

            printf (" Muito caro \n");

    }





    return 0;
}