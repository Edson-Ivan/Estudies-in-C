#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main () {
    float venda, comissao=0;

        printf (" Por favor digite o valor da sua venda mensal \n");
        scanf  ("%f", &venda);

        if (venda >= 100000) {


            comissao = ((venda * 16)/100) + 700;
            printf (" O valor da sua comissão e = %f \n", comissao);

        }else if (venda < 100000 && venda >= 80000 ) {


            comissao = ((venda * 14)/100) + 650;
            printf (" O valor da sua comissão e = %f \n", comissao);
        }else if (venda < 80000 && venda >= 60000 ) {


            comissao = ((venda * 14)/100) + 600;
            printf (" O valor da sua comissão e = %f \n", comissao);

        }else if (venda < 60000 && venda >= 40000 ) {


            comissao = ((venda * 14)/100) + 550;
            printf (" O valor da sua comissão e = %f \n", comissao);

        }else if (venda < 40000 && venda >= 20000 ) {


            comissao = ((venda * 14)/100) + 500;
            printf (" O valor da sua comissão e = %f \n", comissao);

        }else if (venda < 20000 ) {


            comissao = ((venda * 14)/100) + 400;
            printf (" O valor da sua comissão e = %f \n", comissao);
        }

    
    return 0;
}
