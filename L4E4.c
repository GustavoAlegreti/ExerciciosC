#include <stdio.h>

#define LINHAS 10
#define COLUNAS 5

void preencherMatriz(int matriz[LINHAS][COLUNAS]) {
    printf("Preencha a matriz %dx%d:\n", LINHAS, COLUNAS);
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("Digite o valor para a posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void mostrarMatriz(int matriz[LINHAS][COLUNAS]) {
    printf("Matriz %dx%d:\n", LINHAS, COLUNAS);
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int somaMatriz(int matriz[LINHAS][COLUNAS]) {
    int soma = 0;
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            soma += matriz[i][j];
        }
    }
    return soma;
}

float valorMedioMatriz(int matriz[LINHAS][COLUNAS]) {
    int soma = somaMatriz(matriz);
    return (float)soma / (LINHAS * COLUNAS);
}

int procurarValorMatriz(int matriz[LINHAS][COLUNAS], int valorProcurado) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            if (matriz[i][j] == valorProcurado) {
                return valorProcurado;
            }
        }
    }
    return -1; 
}

int main() {
    int matriz[LINHAS][COLUNAS];
    int valorProcurado;

    preencherMatriz(matriz);

    mostrarMatriz(matriz);

    printf("A soma dos elementos da matriz e: %d\n", somaMatriz(matriz));

    printf("O valor medio da matriz e: %.2f\n", valorMedioMatriz(matriz));

    printf("Digite um valor para procurar na matriz: ");
    scanf("%d", &valorProcurado);

    int resultado = procurarValorMatriz(matriz, valorProcurado);
    if (resultado != -1) {
        printf("O valor %d foi encontrado na matriz.\n", resultado);
    } else {
        printf("O valor %d nao foi encontrado na matriz.\n", valorProcurado);
    }

    return 0;
}