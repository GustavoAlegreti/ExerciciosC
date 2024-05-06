#include <stdio.h>
#include <stdlib.h>

unsigned long long int fatorialQuadruplo(int n) {
  unsigned long long int resultado = 1;

  if (n < 0) {
    return 0;
  }

  for (int i = 2; i <= 4 * n; i++) {
    resultado *= i;
  }

  return resultado;
}

int main() {
  int n;

  printf("Digite um numero inteiro positivo: ");
  scanf("%d", &n);

  unsigned long long int fatorialQuadruploResult = fatorialQuadruplo(n);

  printf("O fatorial quadruplo de %d e: %llu\n", n, fatorialQuadruploResult);

  return 0;
}