#include <stdio.h>
#define TAMANHO_CONJUNTO 5

int main() {
    float conjunto1[TAMANHO_CONJUNTO], conjunto2[TAMANHO_CONJUNTO];
    float produtoEscalar = 0;

    printf("Digite os elementos do primeiro conjunto: \n");
    for (int i = 0; i < TAMANHO_CONJUNTO; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%f", &conjunto1[i]);
    }

    printf("\nDigite os elementos do segundo conjunto: \n");
    for (int i = 0; i < TAMANHO_CONJUNTO; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%f", &conjunto2[i]);
    }

    for (int i = 0; i < TAMANHO_CONJUNTO; i++) {
        produtoEscalar += conjunto1[i] * conjunto2[i];
    }

    printf("\nPrimeiro conjunto: \n");
    for (int i = 0; i < TAMANHO_CONJUNTO; i++) {
        printf("%.2f ", conjunto1[i]);
    }

    printf("\nSegundo conjunto: \n");
    for (int i = 0; i < TAMANHO_CONJUNTO; i++) {
        printf("%.2f ", conjunto2[i]);
    }

    printf("\n\nO produto escalar dos dois conjuntos e: %.2f\n", produtoEscalar);

    return 0;
}