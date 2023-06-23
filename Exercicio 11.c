#include <stdio.h>
#include <math.h>


int main () {
    int numero=0, somadiv=0, resto=0, i=0;

        printf (" Por favor, digite um numero inteiro maior que zero \n");
        scanf  ("%d", &numero);

        
        if (numero > 0) {    
            for (i=1000; i>=0; i=i/10) {
                    
                somadiv += numero/i; 
                resto = numero%i;
                numero=resto;
                printf (" TESTE SOMADIV = %d e RESTO = %d \n", somadiv, resto);

                    
            }

        }else {

            printf (" Numero invalido");
        }

            printf (" A somatoria dos algarismos digitados e = %d \n", somadiv);  
    
    
    return 0;
}
