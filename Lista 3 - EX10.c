
//Recebe e armazena 15 números e os exibe dizendo se são par ou ímpar.

#include <stdio.h>
#define TAMANHO 15

int main() {
    int numeros[TAMANHO];
    int i;

    printf("Digite 15 numeros: \n");
    for (i = 0; i < TAMANHO; i++) {
        scanf("%d", &numeros[i]);
    }

    printf("Listagem numerada de numeros e se sao pares ou impares:\n");
    for (i = 0; i < TAMANHO; i++) {
        if (numeros[i] % 2 == 0) {
            printf("%d - Par\n", numeros[i]);
        } else {
            printf("%d - Ímpar\n", numeros[i]);
        }
    }

    return 0;
}