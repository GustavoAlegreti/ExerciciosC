#include <stdio.h>
#define TAMANHO_CONJUNTO 10

void encontrarElementosComuns(int conjunto1[], int conjunto2[]) {
    printf("Elementos comuns nos conjuntos: \n");

    for (int i = 0; i < TAMANHO_CONJUNTO; i++) {
        for (int j = 0; j < TAMANHO_CONJUNTO; j++) {
            if (conjunto1[i] == conjunto2[j]) {
                printf("%d ", conjunto1[i]);
                break; 
            }
        }
    }
    printf("\n");
}

int main() {
    int conjunto1[TAMANHO_CONJUNTO];
    int conjunto2[TAMANHO_CONJUNTO];

    printf("Digite os elementos do primeiro conjunto:\n");
    for (int i = 0; i < TAMANHO_CONJUNTO; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &conjunto1[i]);
    }

    printf("Digite os elementos do segundo conjunto:\n");
    for (int i = 0; i < TAMANHO_CONJUNTO; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &conjunto2[i]);
    }

    encontrarElementosComuns(conjunto1, conjunto2);

    return 0;
}