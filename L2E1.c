#include <stdio.h>

int main() {
    int vetor[15];
    int i, numero, encontrado = 0;

    //entrada de dados
    printf("Digite os 15 numeros inteiros:\n");
    for (i = 0; i < 15; i++) {
        scanf("%d", &vetor[i]);
    }

    //entrada do numero a ser buscado
    printf("Digite o numero inteiro a ser buscado: ");
    scanf("%d", &numero);

    //busca no vetor
    for (i = 0; i < 15; i++) {
        if (vetor[i] == numero) {
            printf("O numero %d foi encontrado na posicao %d do vetor.\n", numero, i);
            encontrado = 1;
            break;
        }
    }

    //se nao foi encontrado
    if (!encontrado) {
        printf("Nao encontrado.\n");
    }

    return 0;
}
