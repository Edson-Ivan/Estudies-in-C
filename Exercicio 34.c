#include <stdio.h>
#include <stdlib.h>

int main () {
    float nota, faltas=0;

        printf (" Digite sua nota \n");
        scanf  ("%f", &nota);

        printf (" Digite sue total de faltas \n");
        scanf  ("%f", &faltas);

    if (nota >= 9.0 && nota <= 10.0 && faltas <= 20) {

        printf (" A \n");

        }else if (nota >= 7.5 && nota <= 8.9 && faltas <=20 ) {

            printf (" B \n");

            }else if (nota >= 5.0 && nota <= 7.4 && faltas <=20 ) {

                printf (" C \n");
                
                }else if (nota >= 4.0 && nota <= 4.9 && faltas <=20 ) {

                printf (" D \n");
                
                    }else if (nota >= 0.0 && nota <= 3.9 && faltas <=20 ) {

                    printf (" E \n");
                    
                    }else if (nota >= 9.0 && nota <= 10.0 && faltas > 20) {

                    printf (" B \n");

                }else if (nota >= 7.5 && nota <= 8.9 && faltas <=20 ) {

                printf (" C \n");

            }else if (nota >= 5.0 && nota <= 7.4 && faltas <=20 ) {

                printf (" D \n");
                
        }else if (nota >= 4.0 && nota <= 4.9 && faltas <=20 ) {

        printf (" E \n");
        
    }else if (nota >= 0.0 && nota <= 3.9 && faltas <=20 ) {

    printf (" E \n");


    }


    return 0;
}