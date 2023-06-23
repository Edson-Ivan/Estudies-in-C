#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    float altura, peso=0;

        printf (" Por favor, digite sua altura \n");
        scanf  ("%f", &altura);

        printf (" Por favor, digite seu peso \n");
        scanf  ("%f", &peso);

    if (altura < 1.20 && peso <= 60) {

        printf (" Categoria A \n");

        }else if (altura >= 1.20 && altura <= 1.70 && peso <= 60) {

            printf (" Categoria B \n");

            }else if (altura > 1.70 && peso <= 60) {

                printf (" Categoria C \n");

                }else if (altura < 1.20 && peso > 60 && peso<= 90) {

                    printf (" Categoria D \n");

                    }else if (altura >= 1.20 && altura <= 1.70 && peso > 60 && peso <= 90) {

                        printf (" Categoria E \n");

                            }else if (altura > 1.70 && peso > 60 && peso<= 90) {

                                printf (" Categoria F \n");

                        }else if (altura < 1.20 && peso > 90) {

                    printf (" Categoria G \n");

                    }else if (altura >= 1.20 && altura <= 1.70 && peso > 90) {

                printf (" Categoria H \n");

                }else if (altura > 1.70 && peso > 90) {

            printf (" Categoria I \n");

        }




    return 0;
}