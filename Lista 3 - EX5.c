
//Armazena 10 números em 2 vetores e exibe a soma de ambos.

#include <stdio.h>
#include <stdlib.h>

int main() {
  double w[10], k[10];
  double sum = 0;
  int i;

  printf("Digite 10 valores para o vetor w: \n");
  for (i = 0; i < 10; i++) {
    scanf("%lf", &w[i]);
  };

  printf("Digite 10 valores para o vetor k: \n");
  for (i = 0; i < 10; i++) {
    scanf("%lf", &k[i]);
  };

  for (i = 0; i < 9; i++) {
    sum += (w[i] + k[9 - i]);
  };

  printf("A soma calculada eh: %lf\n", sum);
  return 0;
}