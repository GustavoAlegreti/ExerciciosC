#include <stdio.h>
#define TAMANHO_VETOR 10

int main() {
    int vetor[TAMANHO_VETOR];
    int valorReferencia;
    int i, countMaiores = 0, countMenores = 0, countIguais = 0;

    printf("Digite os 10 numeros inteiros para preencher o vetor:\n");
    for (i = 0; i < TAMANHO_VETOR; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nDigite um valor de referencia inteiro: ");
    scanf("%d", &valorReferencia);

    for (i = 0; i < TAMANHO_VETOR; i++) {
        if (vetor[i] > valorReferencia) {
            printf("%d e maior que o valor de referencia.\n", vetor[i]);
            countMaiores++;
        } else if (vetor[i] < valorReferencia) {
            countMenores++;
        } else {
            countIguais++;
        }
    }

    // Imprimindo resultados
    printf("\nQuantidade de numeros menores que o valor de referencia: %d\n", countMenores);
    printf("Quantidade de vezes que o valor de referencia aparece no vetor: %d\n", countIguais);

    return 0;
}
