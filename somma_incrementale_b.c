#include <stdio.h>

int somma(int n){
    static int n_stampa = 0;
    n_stampa++;
    printf("Chiamate somma: %d\n", n_stampa);
    static int somma_temp = 0;
	somma_temp += n;
	printf("Somma temporanea = %d\n", somma_temp);
    return somma_temp;
}