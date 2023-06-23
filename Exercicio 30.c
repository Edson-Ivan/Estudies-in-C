#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main () {
    float num123[3];
    int i=0, j=0;
    int aux=0;

        for (i=0; i<3; i++) {
            setbuf (stdin, NULL);
        
        printf (" Digite o %d numero \n", i);
        scanf ("%f", &num123[i]);
        
        }setbuf (stdout, NULL);
      
        for (i=0; i<3; i++) {

                for (j=i+1; j<3;j++) {

                    
                    if (num123[i]>num123[j]){
                        aux = num123[i];
                        num123[i] = num123[j];
                        num123[j] = aux;

                    }
                }
            
        
        
        }

       
          printf ("%.0f,  %.0f,   %.0f\n", num123[0], num123[1], num123[2]);

    return 0;
}