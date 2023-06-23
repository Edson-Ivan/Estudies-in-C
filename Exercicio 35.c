#include <stdio.h>
#include <stdlib.h>

int main () {
    int dia, mes, ano, i=0; 
    char barra[1];

        scanf ("%d %c %d %c %d", &dia, &barra[0], &mes, &barra[1], &ano );
    

        printf (" %d %c %d %c %d \n", dia, barra[0], mes, barra[1], ano);

    
    
    
    if (mes <= 12 && mes >= 1 ){

        if (ano%400 == 0 || ano%4 == 0 && ano%100 != 0) {


            if (mes == 2 && dia >=1 && dia <=29){

                printf (" Data valida  Janeira\n");

                }else if (mes%2 != 0  && dia >=1 && dia <= 31 ||
                          mes%2 == 0  && dia >=1 && dia <= 30 ) {

                          printf (" Data valida  Ano bissexto\n");

                    }else if (mes%2 == 0  && dia >=1 && dia <= 31 ||
                              mes%2 != 0  && dia >=1 && dia <= 30 ) {

                              printf (" Data valida  Ano bissexto\n");
                        
                        }else if (dia < 1 || dia > 31) {

                            printf (" Por favor digite um dia valido\n");
                        }
               
            }else {

                if (mes == 2 && dia >=1 && dia <=28){

                printf (" Data valida  Janeira Nao bissexto\n");

                }else if (mes%2 != 0  && dia >=1 && dia <= 31 ||
                          mes%2 == 0  && dia >=1 && dia <= 30 ) {

                          printf (" Data valida  Ano Nao bissexto\n");

                    }else if (mes%2 == 0  && dia >=1 && dia <= 31 ||
                              mes%2 != 0  && dia >=1 && dia <= 30 ) {

                              printf (" Data valida  Ano Nao bissexto\n");
                        
                        }else if (dia < 1 || dia > 31) {

                            printf (" Por favor digite um dia valido\n");
                        }
            }
        
             
    }else {

       printf (" Mes invalido \n");
    }

    return 0;
}