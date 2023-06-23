#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {
    int ano=0;

        printf (" Por favor informe o ano desejado \n");
        scanf  ("%d", &ano);

    if (ano%4==0 || ano%400==0 && ano%100!=0) {

        printf (" ANO BISSEXTO \n");
    }else {

        printf (" O ANO INFORMADO NAO E BISSEXTO \n");
    }

    return 0;
}
