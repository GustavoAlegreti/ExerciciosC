
//Gera dois vetores de 20 posições com números aleatórios e gera mais um vetor com os elementos únicos dos dois vetores e os ordena de forma crescente.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO 20

int exVetor(int numero, int *vetor, int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++) {
        if (vetor[i] == numero) {
            return 1; 
        }
    }
    return 0; 
}

void elementoUnico(int numero, int *vetor, int *tamanho) {
    if (!exVetor(numero, vetor, *tamanho)) {
        vetor[*tamanho] = numero;
        (*tamanho)++;
    }
}

int comparar(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int vetorA[TAMANHO];
    int vetorB[TAMANHO];
    int vetorC[TAMANHO * 2];
    int tamanhoC = 0;
    int i;

    srand(time(NULL));

    for (i = 0; i < TAMANHO; i++) {
        vetorA[i] = rand() % 51;
        vetorB[i] = rand() % 51; 
    }

    for (i = 0; i < TAMANHO; i++) {
          elementoUnico(vetorA[i], vetorC, &tamanhoC);
          elementoUnico(vetorB[i], vetorC, &tamanhoC);
    }

    qsort(vetorC, tamanhoC, sizeof(int), comparar);

    printf("Vetor C (elementos unicos ordenados): \n");
    for (i = 0; i < tamanhoC; i++) {
        printf("%d ", vetorC[i]);
    }
    printf("\n");

    return 0;
}