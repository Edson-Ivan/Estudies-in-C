#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {
    float km, litros, kmL=0;

        printf (" Digite o total de Km percorrido \n");
        scanf  ("%f", &km);

        printf (" Digite o total de Litros gasto \n");
        scanf  ("%f", &litros);
        
            kmL = km/litros;

        if (kmL < 8) {

            printf (" Venda o carro!! \n");

        }else if (kmL >= 8 && kmL <= 12) {

            printf (" Economico! \n");

        }else if (kmL > 12) {

            printf (" Super economico! \n");
        }


    return 0;
}
