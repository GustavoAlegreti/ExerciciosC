#include <stdio.h>

int main() {
    int vetor[8];
    int total_multiplos_de_seis = 0;

    // Entrada de dados
    printf("Digite 8 numeros inteiros:\n");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &vetor[i]);
    }

    // Impressão de todos os números
    printf("\nNúmeros digitados:\n");
    for (int i = 0; i < 8; i++) {
        printf("%d ", vetor[i]);
        if (vetor[i] % 6 == 0) {
            total_multiplos_de_seis++;
        }
    }

    // Impressão do total de números múltiplos de seis
    printf("\n\nTotal de números múltiplos de seis: %d\n", total_multiplos_de_seis);

    return 0;
}
