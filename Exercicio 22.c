#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {
    float idade, tempoS=0;

        printf (" Por favor digite sua idade \n");
        scanf  ("%f", &idade);

        printf (" Por favor informe sem tempo de servico \n");
        scanf  ("%f", &tempoS);

    if (idade >=65 || tempoS >= 30 || idade>=60 && tempoS>=25) {

        printf (" Pode-se aposentar \n");
    }else {

        printf (" nao pode se aposentar \n");
    }

    return 0;
}
