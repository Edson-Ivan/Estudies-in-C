#include <stdio.h>
#include <stdlib.h>

int main () {
    int produto, quantidade=0;
    float valor=0;

        printf (" Por favor, digite o codigo do produto escolhido \n");
        scanf ("%d", &produto);

        printf (" Por favor, digite a quantidade \n");
        scanf ("%d", &quantidade);

    switch (produto) {

        case 100: valor = quantidade*1.20;
                  printf (" Voce pediu %d Cachorro Quente o total a ser pago e = %.2f\n", quantidade, valor); 
        break;

        case 101: valor = quantidade*1.30;
                  printf (" Voce pediu %d Bauru Simples o total a ser pago e = %.2f\n", quantidade, valor); 
        break;

        case 102: valor = quantidade*1.50;
                  printf (" Voce pediu %d Bauru com Ovo o total a ser pago e = %.2f\n", quantidade, valor); 
        break;

        case 103: valor = quantidade*1.20;
                  printf (" Voce pediu %d Hamburguer o total a ser pago e = %.2f\n", quantidade, valor); 
        break;

        case 104: valor = quantidade*1.70;
                  printf (" Voce pediu %d Cheeseburguer o total a ser pago e = %.2f\n", quantidade, valor); 
        break;

        case 105: valor = quantidade*2.20;
                  printf (" Voce pediu %d Suco o total a ser pago e = %.2f\n", quantidade, valor); 
        break;

        case 106: valor = quantidade*1.00;
                  printf (" Voce pediu %d Refrigerante o total a ser pago e = %.2f\n", quantidade, valor); 
        break;

        default : printf (" Codigo Invalido \n");
        break;

    }





    return 0;
}