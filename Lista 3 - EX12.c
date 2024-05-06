
//O programa faz vetores para times de futebol e são mostrados dados.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n = 21;
    double dados[21] = {8, 2, 4, 3, 6, 4, 10, 5, 9, 6, 7, 7, 8, 8, 12, 9, 5, 10, 8, 11, 3};
    double soma = 0, somaQuadrado = 0, M, x;

    for (i = 0; i < n; i++) {
        soma += dados[i];
    }

    M = soma / n;

    for (i = 0; i < n; i++) {
        x = dados[i] - M;
          somaQuadrado += x * x;
    }

    double variancia = somaQuadrado / (n-1);

    printf("Jogador\tAcertos (X)\tDiscrepancias (x)\n");
    for (i = 0; i < n; i++) {
        x = dados[i] - M;
        printf("%d\t%f\t\t%f\n", i + 1, dados[i], x);
    }

    printf("\nVariancia: %.4f", variancia);

    return 0;
}