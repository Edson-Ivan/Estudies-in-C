#include <stdio.h>
#include <stdlib.h>

int main () {
    float salario_Atual, tempo_Servico, novo_Salario, bonus=0;

        printf (" Informe seu salario atual \n");
        scanf  ("%f", &salario_Atual);

        printf (" Informe seu tempo de servico \n");
        scanf  ("%f", &tempo_Servico);

    if (salario_Atual <= 500 && tempo_Servico <1){

        novo_Salario = (salario_Atual) + (salario_Atual * 25)/100;
        printf (" Seu novo salario com reajuste e = %.2f \n", novo_Salario);
    
        }else if (salario_Atual <= 1000 && tempo_Servico >= 1 && tempo_Servico <3){

            novo_Salario = (salario_Atual) + ((salario_Atual * 20)/100) + 100;
            printf (" Seu novo salario com reajuste e = %.2f \n", novo_Salario);
        
            }else if (salario_Atual <= 1500 && tempo_Servico >= 4 && tempo_Servico <= 6){

                novo_Salario = (salario_Atual) +((salario_Atual * 15)/100) + 200;
                printf (" Seu novo salario com reajuste e = %.2f \n", novo_Salario);
        
        }else if (salario_Atual <= 2000 && tempo_Servico >= 7 && tempo_Servico <= 10){

            novo_Salario = (salario_Atual) +((salario_Atual * 10)/100) + 300;
            printf (" Seu novo salario com reajuste e = %.2f \n", novo_Salario);
        
    }else if (salario_Atual > 2000 && tempo_Servico > 10){

            novo_Salario += 500;
            printf (" Seu novo salario com reajuste e = %.2f \n", novo_Salario);
        
            }else {

                printf ("NAO POSSUI REAJUSTE \n");
            }

    return 0;
}