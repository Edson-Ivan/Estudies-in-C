#include <stdio.h>
#include <stdlib.h>

int main () {
    int dia, mes, ano=0;
    char barra = '/';

        printf (" por favor digite sia data de nascimento \n");
        scanf  ("%d %c %d %c %d", &dia, &barra, &mes, &barra, &ano);

        printf (" Sua data e = %d %c %d %c %d \n", dia, barra, mes, barra, ano);

/*
1 -  31
2 -  28 / bi 29
3 -  31
4 -  30
5 -  31
6 -  30
7 -  31
8 -  31
9 -  30
10 - 31
11 - 30
12 - 31

mes > 0 && mes < 13;
ano > 0 && ano < ano utal;

*/

    if (ano%4 == 0 || ano%400 == 0 && ano%100 != 0) {

        if (mes > 0 && mes <13) {

            if (mes == 2 && dia > 0 && dia <= 29) {

                printf (" Data valida e ano bissexto (FEVEREIRO) \n");
            
            }else if (mes <= 7 && mes%2 == 0 && dia > 0 && dia <= 30  ||
                      dia > 0 && dia <= 31 && mes%2 != 0 ) {

                        printf (" Data valida ano bissexto \n");
            }
            // CONFERIR OS FI/ELSE (FOCO == ELSE IF); 
        }else {

            printf (" Mes invalido \n");
        }


    }else if (mes > 0 && mes <13) {

            if (mes == 2 && dia > 0 && dia <= 28) {

                printf (" Data valida (FEVEREIRO) \n");
            
            }else if (mes >= 8 && mes%2 != 0 && dia > 0 && dia <= 30  ||
                      dia > 0 && dia <= 31 && mes%2 == 0 ) {

                        printf (" Data valida \n");
                }else {

                    printf (" Dia invalido \n");
                }
            
        }else {

            printf (" Mes invalido \n");

        }

    
    
    


    return 0;
}