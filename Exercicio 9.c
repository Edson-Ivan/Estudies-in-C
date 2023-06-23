#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {
    float salario, prestação, porcentagem=0;

        printf (" Infome o seu salario \n");
        scanf  ("%f", &salario);

        printf (" Infome o valor da prestação do emprestimo desejado\n");
        scanf  ("%f", &prestação);

        porcentagem = (salario * 20)/100;

    if (prestação > porcentagem) {

        printf (" Emprestimo não concedido \n");

    }else {

        printf (" Emprestimo concedido \n");
    }

    return 0;
}
