
//Recebe um valor em real e a cotação do dolar e euro e os converte.

#include <stdio.h>

int main() {
  float valor_em_reais, cotacao_dolar, cotacao_euro;
  float valor_em_dolares, valor_em_euros;

  printf("Digite o valor em reais a ser convertido: R$ ");
  scanf("%f", &valor_em_reais);
  printf("Digite a cotação do dólar em relação ao real: ");
  scanf("%f", &cotacao_dolar);
  printf("Digite a cotação do euro em relação ao real: ");
  scanf("%f", &cotacao_euro);

  // converte r para d / e
  valor_em_dolares = valor_em_reais / cotacao_dolar;
  valor_em_euros = valor_em_reais / cotacao_euro;

  printf("\n%.2f reais equivalem a %.2f dólares\n", valor_em_reais,
         valor_em_dolares);
  printf("%.2f reais equivalem a %.2f euros\n", valor_em_reais, valor_em_euros);

  return 0;
}