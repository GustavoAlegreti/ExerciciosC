
//Armazena 20 valores randômicos em um vetor e os exibe na ordem inversa.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO 20

int main() {
    int vetor[TAMANHO];
    int i;

    srand(time(NULL));

    for (i = 0; i < TAMANHO; i++) {
        vetor[i] = rand() % 100;
    }

    printf("Vetor em ordem inversa: \n");
    for (i = TAMANHO - 1; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}