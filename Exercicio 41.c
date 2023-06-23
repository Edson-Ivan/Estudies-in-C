#include <stdio.h>
#include <stdlib.h>

int main () {
    float altura, peso, IMC=0;

        printf (" Informe sua altura \n");
        scanf  ("%f", &altura);

        printf (" Informe sue peso \n");
        scanf  ("%f", &peso);

        IMC = peso/(altura*altura);

    if ( IMC < 18.5) { 

        printf (" Abaixo do peso \n");

        }else if (IMC >= 18.5 && IMC <= 24.9){

            printf (" Saudavel \n");

            }else if (IMC > 24.9 && IMC <= 29.9){

                printf (" Peso em execesso \n");
            
            }else if (IMC > 29.9 && IMC <= 34.9){

                printf (" Obesidade Grau I \n");
            
        }else if (IMC > 34.9 && IMC <= 39.9){

            printf (" Obesidade Grau II (sereva) \n");
            
    }else if (IMC > 39.9 ){

        printf (" Obesidade Grau III (morbida) \n");
            
    }else {

        printf ("ERRO\n");
    }

    return 0;
}