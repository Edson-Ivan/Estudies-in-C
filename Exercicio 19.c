#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {
    int numero=0;

        printf (" Por favor digite um numero inteiro \n");
        scanf  ("%d", &numero);

    if (numero%3==0 && numero%5!=0){

        printf (" O numero digitado e divisıvel por 3 \n");

    }else if (numero%5==0 && numero%3!=0){

        printf (" O numero digitado e divisıvel por 5 \n");
    }else if (numero%5==0 && numero%3==0) {

        printf (" O numero digitado e divisilvel  por 3 e 5 \n");
    }else {

        printf (" O numero digitado não e divisilvel nem por 3 nem por 5 \n");
    }

    return 0;
}
