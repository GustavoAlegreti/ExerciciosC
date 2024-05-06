#include <stdio.h>

int main() {
  char vetor[10];

  // entrada de dados
  printf("Digite 10 letras:\n");
  for (int i = 0; i < 10; i++) {
    scanf(" %c", &vetor[i]); 
          // o espaço antes de %c é importante para evitar
          // problemas com o buffer do teclado
  }

  // impressao da listagem numerada
  printf("\nListagem numerada:\n");
  for (int i = 0; i < 10; i++) {
    printf("%d. %c\n", i + 1, vetor[i]);
  }

  return 0;
}
