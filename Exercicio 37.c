#include <stdio.h>
#include <stdlib.h>

int main () {
    int hora_Entrada, minutos_saida, minutos_entrada, hora_saida, hora_parado, minutos_Parado=0;
    float valor=0;
    char barra=0;


        printf (" Digite a hora e minutos de entrada \n");
        scanf  ("%d %c %d", &hora_Entrada, &barra, &minutos_entrada);

        printf (" Digite a hora e minutos de saida \n");
        scanf  ("%d %c %d", &hora_saida, &barra, &minutos_saida );

        printf (" AAAAAA %d , %d", minutos_entrada, minutos_saida);

        // Recebendo os dados 


        
        minutos_Parado = minutos_saida + minutos_entrada;
        hora_Entrada = 24 - hora_Entrada;



    if (hora_saida <= hora_Entrada) {

        hora_parado = hora_Entrada + hora_saida;
    
        }else if (hora_saida > hora_Entrada) {

                  hora_parado = hora_Entrada - hora_saida;
        }

        printf (" HORA PARADA = %d\n", hora_parado);




    if (minutos_Parado > 0 && minutos_Parado <= 60) {
        printf (" !! ERRO 444444!!\n");
        hora_parado ++;

        }else if (minutos_Parado > 60) {
            printf (" !! ERRO 55555 !!\n");
                 hora_parado +=2;

            }else {

                    printf (" !!! MINUTOS INVALIDADO \n");
            }




    if (hora_parado >= 1 && hora_parado<=2){
        printf (" !! ERRO 111111111!!\n");
        valor = hora_parado*1.00;

        }else if (hora_parado >= 3 && hora_parado <= 4){
            printf (" !! ERRO 2222222 !!\n");
            valor = hora_parado * 1.40;
           
            }else if (hora_parado >= 5){
                printf (" !! ERRO 33333333 !!\n");
                valor = hora_parado * 2.00;
                
                }else if (hora_parado <= 0){

                    valor = (hora_parado - 24) * (-1);
                    printf (" ERRRO !!! 24\n");
                }

        printf (" O valor a ser pago e = %.2f \n", valor);

    return 0;
} 