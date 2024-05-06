#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 10
#define COLUNAS 10

int main() {
    int matriz[LINHAS][COLUNAS];

    srand(time(NULL));

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            matriz[i][j] = rand() % 1001; 
        }
    }

    printf("Indices das linhas, colunas e valores nao nulos: \n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            if (matriz[i][j] != 0) {
                printf("Linha: %d, Coluna: %d, Valor: %d\n", i, j, matriz[i][j]);
            }
        }
    }

    return 0;
}