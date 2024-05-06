#include <stdio.h>
#include <stdlib.h>

#define MAX_TAMANHO 100

double calculaMedia(double v[], int n) {
  double media = 0;

  for (int i = 0; i < n; i++) {
    media += v[i];
  }

  return media / n;
}

double calculaDesvioPadrao(double v[], int n) {
  double media = calculaMedia(v, n);
  double desvioPadraoQuadrado = 0;

  for (int i = 0; i < n; i++) {
    desvioPadraoQuadrado += pow((v[i] - media), 2);
  }

  return sqrt(desvioPadraoQuadrado / (n - 1));
}

int main() {
  double v[MAX_TAMANHO];
  int n;

  printf("Digite o tamanho do vetor (ate %d): ", MAX_TAMANHO);
  scanf("%d", &n);

  printf("Digite os %d elementos do vetor:\n", n);
  for (int i = 0; i < n; i++) {
    scanf("%lf", &v[i]);
  }

  double desvioPadraoResult = calculaDesvioPadrao(v, n);

  printf("O desvio padrao do vetor e: %f\n", desvioPadraoResult);

  return 0;
}