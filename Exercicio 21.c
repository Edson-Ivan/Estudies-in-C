#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {
    float numero1, numero2, resultado=0;
    int menu=0;

          printf (" \nEscolha uma das opcao: \n1- Soma de 2 numeros. \n2- Difereņca entre 2 numeros (maior pelo menor). \n3- Produto entre 2 numeros. \n4- Divisao entre 2 numeros (o denominador nao pode ser zero). \n");
          scanf  ("%d", &menu);


         
        if (menu>=1 && menu<=4) {
            
           printf (" Digite o primeiro valor \n");
            scanf  ("%f", &numero1);

            printf (" Digite o segundo valor \n");
            scanf  ("%f", &numero2);


        switch (menu) {

            case 1 : resultado = numero1+numero2;
                     printf (" O resultado da soma e = %.2f \n", resultado);
            break;

            case 2 : if (numero1>numero2) {

                        resultado = numero1-numero2;
                        printf (" O resultado da diferenca e = %.2f \n", resultado);
                    }else {

                        resultado = numero2-numero1;
                        printf (" O resultado do diferenca e = %.2f \n", resultado);
                    }
            break;

            case 3 :    resultado = numero1*numero2;
                        printf (" O resultado do Produto e = %.2f \n", resultado);
            break;


            case 4 : if (numero2>0 || numero2<0) {

                        resultado = numero1/numero2;
                        printf (" O resultado da divisao e = %.2f \n", resultado);
            break;

                     }

            default : printf (" ERRO !! operação invalida \n");
            break;
        }

         }else {
             
             printf (" ERRO !! operação invalida \n");
         }

  

        
    

    return 0;
}
