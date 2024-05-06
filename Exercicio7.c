
//Armazena 3 valores e faz a media.

#include <stdio.h>

int main() {
  float n1, n2, n3, mediafinal;

  printf("Primeira nota: ");
  scanf("%f", &n1);
  printf("Segunda nota: ");
  scanf("%f", &n2);
  printf("Terceira nota: ");
  scanf("%f", &n3);

  mediafinal = (n1 * 2 + n2 * 3 + n3 * 5) / 10;

  printf("A media eh: %.2f\n", mediafinal);

  return 0;
}