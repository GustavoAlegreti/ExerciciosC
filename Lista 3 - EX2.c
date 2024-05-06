
//Faz um vetor de 10 números aleatórios e mostra os primos.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ehPrimo(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int vetor[100];
    srand(time(NULL));

    for (int i = 0; i < 100; i++) {
        vetor[i] = rand() % 1001;
    }

    printf("Números primos no vetor W:\n");
    for (int i = 0; i < 100; i++) {
        if (ehPrimo(vetor[i])) {
            printf("%d ", vetor[i]);
        }
    }
    printf("\n");

    return 0;
}