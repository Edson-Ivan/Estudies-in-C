#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {
    float notaT, notaA, notaE, mediaP=0; // T = Trabalho de laboratorio, A Avaliação simestral e E Exame de laboratorio

        printf (" Por favor digite a nota do trabalho de laboratorio \n");
        scanf  ("%f", &notaT);

        printf (" Por favor digite a nota da avaliacão semestral \n");
        scanf  ("%f", &notaA);

        printf (" Por favor digite a nota do exame final \n");
        scanf  ("%f", &notaE);

        mediaP = ((notaT*2) + (notaA*3) + (notaE*5))/(2+3+5);

    if (mediaP >= 0 && mediaP <= 2.9) {

        printf (" Media final = %.2f \n REPROVADO \n", mediaP);
    
    }else if (mediaP >= 3.0 && mediaP <= 4.9) {

        printf (" Media final = %.2f \n RECUPERAÇÃO \n", mediaP);
    }else if (mediaP > 4.9 && mediaP <= 10 ) {

        printf (" Media final = %.2f \n APROVADO \n", mediaP);
    }else {

        printf ("\nERRO\n");
    }


    return 0;
}
