#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {
    float x, y, z, opcao, resultado=0;

        printf (" Digite um valor inteiro positivo para A \n");
        scanf  ("%f", &x);

        printf (" Digite um valor inteiro positivo para B \n");
        scanf  ("%f", &y);

        printf (" Digite um valor inteiro positivo para Z \n");
        scanf  ("%f", &z);

        printf (" Digite : \n 1 - Para calcular Media geometrica. \n 2 - Para calcular Media Ponderada. \n 3 - Para calcular Media Harmonica. \n 4 - Para calcular Media Arimetica. \n");
        scanf  ("%f", &opcao);

    if (opcao == 1) {

        resultado = cbrt ((x*y*z));
        printf (" Media Geometrica %.2f \n", resultado);

    }else if (opcao == 2) {

        resultado = ((x+2)*(y+3)* z)/6;
        printf (" Media Pornderada %.2f \n", resultado);
        
    }else if (opcao == 3) {
        resultado = 3/(1/x + 1/y + 1/z);
        printf (" Media Harmonica %.2f \n", resultado);
        
    }if (opcao == 4) {

        resultado = (x+y+z)/3;
        printf (" Media Aritmetica %.2f \n", resultado);
        
    }

    return 0;
}
