#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[10][10];
    int valorProcurado;
    srand(time(NULL));

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matriz[i][j] = rand() % 1001;
        }
    }

    printf("Matriz:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nDigite um valor para procurar na matriz: ");
    scanf("%d", &valorProcurado);

    int encontrado = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (matriz[i][j] == valorProcurado) {
                printf("O valor %d foi encontrado na posicao [%d][%d]\n", valorProcurado, i, j);
                encontrado = 1;
            }
        }
    }

    if (!encontrado)
        printf("O valor %d nao foi encontrado na matriz.\n", valorProcurado);

    return 0;
}