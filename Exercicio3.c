
//Digita N primeiros numeros impares.

#include <stdio.h>

int main() {
    int N;

    printf("Digite um número inteiro N: ");
    scanf("%d", &N);

    if (N > 0) {
        int contador = 1;
        int numero = 1;

        printf("Os %d primeiros números naturais ímpares são:\n", N);
        while (contador <= N) {
            printf("%d ", numero);
            numero += 2; //Proximo numero impar
            contador++;
        }
        printf("\n");
    } else {
        printf("O número precisa ser positivo.\n");
    }

    return 0;
}
