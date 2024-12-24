#include <stdio.h>
#include "somma_incrementale.h"

    int main(void){
        int n, ris;
                   
                while (1)
                {
                    printf("Inserisci un numero finche' non viene inserito 0\n");
                    scanf("%d", &n);
                    if (n == 0)
                    
                        break;
                    
                    ris = somma(n);
                }
                    
                    printf("La somma di tutti i numeri e': %d\n", ris);
                
                       
    }