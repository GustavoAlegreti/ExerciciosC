#include <stdio.h>
#define LINHAS 2
#define COLUNAS 3

void somarMatrizes(double matriz1[][COLUNAS], double matriz2[][COLUNAS], double resultado[][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

void imprimirMatriz(double matriz[][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    double matriz1[LINHAS][COLUNAS], matriz2[LINHAS][COLUNAS], resultado[LINHAS][COLUNAS];

    printf("Digite os elementos da primeira matriz: \n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%lf", &matriz1[i][j]);
        }
    }

    printf("Digite os elementos da segunda matriz: \n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%lf", &matriz2[i][j]);
        }
    }

    somarMatrizes(matriz1, matriz2, resultado);

    printf("\nSoma das duas matrizes: \n");
    imprimirMatriz(resultado);

    return 0;
}