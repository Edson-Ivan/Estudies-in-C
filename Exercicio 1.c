#include <stdio.h>
#include <math.h>


int main () {
    float num1, num2=0;

        printf (" Digite o primeiro valor\n");
        scanf  ("%f", &num1);

        printf (" Digite o segundo valor\n");
        scanf  ("%f", &num2);

    if (num1>num2) {

        printf (" O primeiro numero %.2f, e maior que o segundo %.2f \n", num1, num2);
    
    }else if (num2>num1) {

        printf (" O secundo numero %.2f, e maior que o primeiro %.2f \n", num2, num1);

    }else {
        printf (" Os dois valores digitados sao iguais \n");
    }


    return 0;
}
