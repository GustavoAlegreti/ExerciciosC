#include <stdio.h>
#include <math.h>

#define N 10

double calcularMedia(int vetor[N]) {
    double soma = 0.0;

    for (int i = 0; i < N; i++) {
        soma += vetor[i];
    }

    return soma / N;
}

double calcularDesvioPadrao(int vetor[N]) {
    double media = calcularMedia(vetor);
    double somaQuadrados = 0.0;

    for (int i = 0; i < N; i++) {
        somaQuadrados += pow(vetor[i] - media, 2);
    }

    double variancia = somaQuadrados / N;
    return sqrt(variancia);
}

int main() {
    int vetor[N];

    printf("Digite os %d números:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    double desvioPadrao = calcularDesvioPadrao(vetor);

    printf("O desvio padrão é: %.2f\n", desvioPadrao);

    return 0;
}