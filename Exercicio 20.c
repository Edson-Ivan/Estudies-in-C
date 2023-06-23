#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {
    float ladosABC[3];
    int i=1;

        for (i=1; i<=3; i++) {

            printf (" Digite o valor %d lado do triangulo \n", i);
            scanf  ("%f", &ladosABC[i]);

        }
        

    if (ladosABC[1]< ladosABC[2]+ladosABC[3] && ladosABC[3]< ladosABC[2]+ladosABC[1] && ladosABC[2]< ladosABC[1]+ladosABC[3]) {
   
        
         if (ladosABC[1] == ladosABC[2] && ladosABC[2] == ladosABC[3]) {

            printf (" TRIANGULO EQUILATERO \n");
            

            }else if (ladosABC[1] == ladosABC[2] || ladosABC[2] == ladosABC[3] || ladosABC[1] == ladosABC[3] ) {

                printf (" TRIANGULO ISOSCELE \n");
                

                }else if (ladosABC[1] != ladosABC[2] && ladosABC[2] != ladosABC[3] && ladosABC[1] != ladosABC[3] ) {
    
                            printf (" TRIANGULO ESCALENO \n");
                    }
                    
    }else {
        
        printf ("ERRO - NAO E UM TRIANGULO \n");
        
    }


    return 0;
}