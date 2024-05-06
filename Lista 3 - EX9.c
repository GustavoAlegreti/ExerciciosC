
//Armazena 10 valores em um vetor e exibe o desvio padrão.

#include <math.h>
#include <stdio.h>

int main() {
  double valores[10];
  double media = 0, somaDiferenca = 0;
  int i;

  printf("Digite 10 valores: \n");
  for (i = 0; i < 10; i++) {
    scanf("%lf", &valores[i]);
    media += valores[i];
  }

  media /= 10;

  for (i = 0; i < 10; i++) {
    somaDiferenca += pow(valores[i] - media, 2);
  }

  double desvioPadrao = sqrt(somaDiferenca / 10);

  printf("O desvio padrao eh: %lf\n", desvioPadrao);
  return 0;
}