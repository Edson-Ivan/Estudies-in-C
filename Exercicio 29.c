#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int a[4], b[4], resultado[4], i, j, cont=0;
        srand (time(NULL));
    
    for (i=0; i<=4; i++){
    
     a[i] = rand ()%101;
     b[i] = rand ()%101;
    

            printf (" Digite o resulta da some de %d + %d \n", a[i], b[i]);
            scanf  ("%d", &resultado[i]);
        
        if (resultado[i] == a[i]+b[i]) {
             cont++;
        }
    

    
    }
    
        for (i=0; i<=4; i++)
    {        
        resultado[i] = a[i] + b[i];
        printf (" O resultado da soma %d + %d = %d \n", a[i], b[i], resultado[i]);
        
    }
    
    if (cont>=3){
        printf ("\n Voce teve %d acertos parabens. \n", cont);
    
    }else {
        
        printf ("\n Voce teve %d acertos, estude mais. \n", cont);
    }
    
    return 0;
}
