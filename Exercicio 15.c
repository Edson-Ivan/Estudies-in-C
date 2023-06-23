#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {
    int numero=0;

        printf (" Digite um numero inteiro entre 1 e 7 \n");
        scanf ("%d", &numero);
    

        switch (numero) {
            case 1: printf ("Domingo \n");
            break;

            case 2: printf ("Segunda \n");
            break;

            case 3: printf ("Terça \n");
            break;

            case 4: printf ("Quarta \n");
            break;

            case 5: printf ("Quinta \n");
            break;

            case 6: printf ("Sexta \n");
            break;

            case 7: printf ("Sabado \n");
            break;

            default:
                printf (" ERRO \n");
                break;
            
        }

 
}
