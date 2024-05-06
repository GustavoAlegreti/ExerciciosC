
//Conta total de numeros digitados e numeros pares, quando 1000 é digitado o programa encerra e mostra a quantidade.

#include <stdio.h>

int main() {
  int numero;
  int total_valores = 0;
  int total_pares = 0;

  printf(
      "Digite uma sequencia de numeros inteiros. Digite 1000 para encerrar.\n");

  //Loop infinito p ler os n ate que 1000 seja digitado
  while (1) {
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero == 1000) {
      break;
    }

    //Incrementa o contador de valores lidos
    total_valores++;

    //Verifica se o numero eh par
    if (numero % 2 == 0) {
      printf("%d eh par.\n", numero);
      total_pares++;
    } else {
      printf("%d nao eh par.\n", numero);
    }
  }

  printf("\nTotal de valores lidos: %d\n", total_valores);
  printf("Total de valores pares: %d\n", total_pares);

  return 0;
}
