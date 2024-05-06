
//Requisita um número e mostra a sua tabuada.

#include <stdio.h>

int main() {
    int numero, i;

    printf("Digite um numero para geracao da tabuada: ");
    scanf("%d", &numero);

    printf("Tabuada do %d (Soma): \n", numero);
    for (i = 0; i <= 10; i++) {
        printf("%d + %d = %d\n", numero, i, numero + i);
    }

    printf("Tabuada do %d (Multiplicacao): \n", numero);
    for (i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}