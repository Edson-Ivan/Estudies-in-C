#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {
    float baseMA, baseME, altura, area=0;

        printf (" Digite a base maior do trapezio \n");
        scanf  ("%f", &baseMA);

        printf (" Digite a base menor do trapezio \n");
        scanf  ("%f", &baseME);

        printf (" Digite a altura do trapezio \n");
        scanf  ("%f", &altura);

    if (baseMA > 0 && baseME > 0) {

        area = ((baseMA + baseME) * altura)/2;

        printf (" Area do trapezio = %.2f \n", area);
    }else {

        printf (" ERRO base maior e menor deve ser maior que zero \n");
    }




    return 0;
}
