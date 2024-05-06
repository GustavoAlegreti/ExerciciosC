#include <stdio.h>
#define LINHAS 10
#define COLUNAS 10

int main() {
    int matriz[LINHAS][COLUNAS] = {0};
    int linha, coluna, valor;

    printf("Digite os indices da linha, da coluna e o valor da posição (ou indices negativos para encerrar):\n");

    while (1) {
        printf("Indice da linha: ");
        scanf("%d", &linha);
        if (linha < 0) break;

        printf("Indice da coluna: ");
        scanf("%d", &coluna);
        if (coluna < 0) break;

        printf("Valor: ");
        scanf("%d", &valor);

        if (linha >= 0 && linha < LINHAS && coluna >= 0 && coluna < COLUNAS) {
            matriz[linha][coluna] = valor;
        } else {
            printf("Indices inválidos.\n");
        }
    }

    printf("\nMatriz resultante: \n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}