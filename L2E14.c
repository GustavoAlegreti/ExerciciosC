#include <stdio.h>
#define TAMANHO_VETOR 5

void soma(int x[], int y[], int resultado[]) {
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        resultado[i] = x[i] + y[i];
    }
}

void produto(int x[], int y[], int resultado[]) {
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        resultado[i] = x[i] * y[i];
    }
}

void diferenca(int x[], int y[], int resultado[]) {
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        int encontrado = 0;
        for (int j = 0; j < TAMANHO_VETOR; j++) {
            if (x[i] == y[j]) {
                encontrado = 1;
                break;
            }
        }
        if (!encontrado) {
            resultado[i] = x[i];
        }
    }
}

void interseccao(int x[], int y[], int resultado[]) {
    int count = 0;
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        for (int j = 0; j < TAMANHO_VETOR; j++) {
            if (x[i] == y[j]) {
                resultado[count++] = x[i];
                break;
            }
        }
    }
}

void uniao(int x[], int y[], int resultado[]) {
    int count = 0;
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        resultado[count++] = x[i];
    }
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        int encontrado = 0;
        for (int j = 0; j < TAMANHO_VETOR; j++) {
            if (x[i] == y[j]) {
                encontrado = 1;
                break;
            }
        }
        if (!encontrado) {
            resultado[count++] = y[i];
        }
    }
}

void imprimirVetor(int vetor[]) {
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int x[TAMANHO_VETOR], y[TAMANHO_VETOR];
    int resultado[TAMANHO_VETOR];

    printf("Digite os elementos do vetor x: \n");
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &x[i]);
    }

    printf("Digite os elementos do vetor y: \n");
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &y[i]);
    }

    printf("\nSoma entre x e y: ");
    soma(x, y, resultado);
    imprimirVetor(resultado);

    printf("Produto entre x e y: ");
    produto(x, y, resultado);
    imprimirVetor(resultado);

    printf("Diferenca entre x e y: ");
    diferenca(x, y, resultado);
    imprimirVetor(resultado);

    printf("Interseccao entre x e y: ");
    interseccao(x, y, resultado);
    imprimirVetor(resultado);

    printf("Uniao entre x e y: ");
    uniao(x, y, resultado);
    imprimirVetor(resultado);

    return 0;
}