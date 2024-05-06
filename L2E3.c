#include <stdio.h>

int main() {
    int vetor[15];

    //entrada de dados
    printf("Digite 15 numeros inteiros:\n");
    for (int i = 0; i < 15; i++) {
        scanf("%d", &vetor[i]);
    }

    //listagem numerada indicando se cada número eh par ou impar
    printf("\nListagem numerada (numero: par/impár):\n");
    for (int i = 0; i < 15; i++) {
        if (vetor[i] % 2 == 0) {
            printf("%d. %d: par\n", i + 1, vetor[i]);
        } else {
            printf("%d. %d: ímpar\n", i + 1, vetor[i]);
        }
    }

    return 0;
}
