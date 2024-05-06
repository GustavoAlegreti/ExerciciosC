#include <stdio.h>
#define TAMANHO_VETOR 100

int main() {
    int vetor[TAMANHO_VETOR];
    int i, soma = 0, countPares = 0;
    int menor, maior;

    printf("Digite os elementos do vetor: \n");
    for (i = 0; i < TAMANHO_VETOR; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];

        if (i == 0) {
            menor = maior = vetor[i];
        } else {
            if (vetor[i] < menor) {
                menor = vetor[i];
            }
            if (vetor[i] > maior) {
                maior = vetor[i];
            }
        }

        if (vetor[i] % 2 == 0) {
            countPares++;
        }
    }

    float media = (float)soma / TAMANHO_VETOR;

    printf("\nO maior elemento do vetor e: %d\n", maior);
    printf("O menor elemento do vetor e: %d\n", menor);
    printf("O percentual de numeros pares no vetor e: %.2f%%\n", (float)countPares / TAMANHO_VETOR * 100);
    printf("A media dos elementos do vetor e: %.2f\n", media);

    return 0;
}