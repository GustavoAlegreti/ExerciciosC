#include <stdio.h>

int main() {
    int matriz[10][10] = {0};
    int linha, coluna, valor;

    do {
        printf("Digite o indice da linha (-1 para terminar): ");
        scanf("%d", &linha);
        if (linha == -1) break;

        printf("Digite o indice da coluna (-1 para terminar): ");
        scanf("%d", &coluna);
        if (coluna == -1) break;

        printf("Digite o valor: ");
        scanf("%d", &valor);

        matriz[linha][coluna] = valor;
    } while (linha >= 0 && coluna >= 0);

    printf("\nMatriz:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}