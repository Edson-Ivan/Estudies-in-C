#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {
    float altura, peso=0;
    char sexo=0;
        printf (" Por favor digite seu sexo \n");
        scanf  ("%c", &sexo);
        printf (" Por favor, digite o sua altura \n");
        scanf  ("%f", &altura);

    if ( sexo == 'M' || sexo == 'm'){

        peso = (72.7*altura) - 58;
        printf (" Seu peso ideal e %.2f \n", peso);

    }else if ( sexo == 'F' || sexo == 'f'){

        peso = (62.1*altura) - 44.7;
        printf (" Seu peso ideal e %.2f \n", peso);

    }else {

        printf (" Por favor informar um caracter valido (M ou F) \n");
    }

    return 0;
}
