#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {
    float  notas[2], mediaP=0;
    int i=0;


        for (i=0; i<=2; i++){
            
            printf (" Digite a %d nota do aluno \n", i);
            scanf  ("%f", &notas[i]);


        }
    printf (" notas = %.2f - %.2f - %.2f \n", notas[0], notas[1], notas[2]);

            mediaP = ((notas[0]*1) + (notas[1]*1) + (notas[2]*2))/4;

        if (mediaP>=60) {

            printf (" Aluno aprovado !!! \n media das notas e = %.2f \n", mediaP);

        }else {

            printf (" Aluno Reprovado !!! \n media das notas e = %.2f \n", mediaP);
 
        }

    return 0;
}
