
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {
    float a, b, c, delta=0, result[1];

        printf (" Digite o valor de A \n");
        scanf  ("%f", &a);

        printf (" Digite o valor de B \n");
        scanf  ("%f", &b);


        printf (" Digite o valor de C \n");
        scanf  ("%f", &c);

    
    
     if (a<0 || a>0) { 
       
        delta =(pow (b, 2))- (4 * (a * c));
        printf ("  %.2f", delta);

         if (delta <= 0.0) {
            
            printf (" Nao existe raiz real \n");

            } if (delta == 0.0) {
              
                result[0] = (-b + (sqrt (delta))) / (2*a);
                printf (" Possui apenas uma raiz X = %.2f \n", result[0]);

                } if (delta >= 0.0) {
                    
                    result[0] = (-b + (sqrt (delta))) / (2*a);
                    result[1] = (-b - (sqrt (delta))) / (2*a);

                    printf (" Possui duas raizes reais\n X  = %.2f\n X' = %.2f \n", result[0], result[1]);
                }
                
     }else {
         
         printf (" Nao e uma equacao de segundo grau \n\n");
     }

    return 0;
}