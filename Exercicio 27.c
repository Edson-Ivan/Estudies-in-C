#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {
    int idade=0;

        printf (" Por favor, digite a idade do nadador \n");
        scanf  ("%d", &idade);

        if (idade >= 5 && idade <= 7) {

            printf (" Infatil A \n");

        }else if (idade >= 8 && idade <= 10) {

            printf (" Infatil B \n");
            
        }else if (idade >= 11 && idade <= 13) {

            printf (" Juvenil A \n");
            
        }else if (idade >= 14 && idade <= 17) {

            printf (" Juvenil B \n");
            
        }else if (idade >= 18) {

            printf (" Senior \n");
        }else {
            printf (" Idade nao categorizada \n");
        }

    return 0;
}
