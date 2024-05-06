
//Armazena 10 valores e diz o menor e o maior

#include <stdio.h>
int main() {
  int numeros[10];
  int menor, maior;
  int i;

  printf("Digite 10 números:\n");
  for (i = 0; i < 10; i++) {
    printf("Número %d: ", i + 1);
    scanf("%d", &numeros[i]);
  }

  menor = numeros[0];
  maior = numeros[0];

  for (i = 1; i < 10; i++) {
    if (numeros[i] < menor) {
      menor = numeros[i];
    }
    if (numeros[i] > maior) {
      maior = numeros[i];
    }
  }

  printf("O menor valor digitado é: %d\n", menor);
  printf("O maior valor digitado é: %d\n", maior);

  return 0;
}