
//Armazena 10 números + 1 número de referência para mostrar dados sobre o número de referência em comparação aos outros números da tabela.

#include <stdio.h>

int main() {
    int vetor[10];
    int referencia, i, count_menores = 0, count_referencia = 0;
    int segundo_vetor[50] = {0};

    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite um valor de referência inteiro: ");
    scanf("%d", &referencia);

    printf("Números maiores que o valor de referência:\n");
    for (i = 0; i < 10; i++) {
        if (vetor[i] > referencia) {
            printf("%d ", vetor[i]);
        }
    }
    printf("\n");

    for (i = 0; i < 10; i++) {
        if (vetor[i] < referencia) {
            count_menores++;
        }
    }
    printf("Quantidade de números menores que o valor de referência: %d\n", count_menores);

    for (i = 0; i < 10; i++) {
        if (vetor[i] == referencia) {
            count_referencia++;
        }
    }
    printf("Quantidade de vezes que o valor de referência aparece no vetor: %d\n", count_referencia);

    for (i = 0; i < 10; i++) {
        segundo_vetor[vetor[i]]++;
    }

    printf("Quantidade de vezes que cada número aparece no segundo vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("%d: %d\n", vetor[i], segundo_vetor[vetor[i]]);
    }

    int count_primeiro_vetor = 0;
    for (i = 0; i < 10; i++) {
        if (segundo_vetor[vetor[i]] > 0) {
            count_primeiro_vetor++;
        }
    }
    float percentual = (float)count_primeiro_vetor / 10 * 100;
    printf("Percentual de números do vetor de 50 posições que constam no primeiro: %.2f%%\n", percentual);

    return 0;
}