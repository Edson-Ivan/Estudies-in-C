#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {
    float nota1, nota2, media=0;

        printf (" Digite a primeira nota \n");
        scanf  ("%f", &nota1);

        printf (" Digite a segunda nota \n");
        scanf  ("%f", &nota2);

    if (nota1 >= 0.0 && nota1 <= 10.0){

        if (nota2 >= 0.0 && nota2 <= 10.0) {
            media = (nota1+nota2)/2;

            printf ("A nota media e %.2f\n", media);
        }else {

            printf (" Segunda nota invalida \n");
        }

    }else {

        printf (" Primeira nota invalidade \n");
    }

    return 0;
}

