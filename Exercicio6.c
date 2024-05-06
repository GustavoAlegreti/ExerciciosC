
//Calcula o custo de fabricação de um carro.

#include <assert.h>
#include <stdio.h>

int main() {
  float custoDeFabrica, porcentImpostos, porcentDistribuidor;
  float valorTotal, valorImpostos, valorDistribuidor;

  // solicita que o usuário insira o custo de fabrica, a porcentagem de impostos
  // e a porcentagem do distribuidor
  printf("Digite o custo de fábrica do carro: ");
  scanf("%f", &custoDeFabrica);
  printf("Digite a porcentagem de impostos sobre o custo de fábrica: ");
  scanf("%f", &porcentImpostos);
  printf("Digite a porcentagem do distribuidor sobre o custo de fábrica: ");
  scanf("%f", &porcentDistribuidor);
  // calcula o valor dos impostos
  valorImpostos = custoDeFabrica * (porcentImpostos / 100);
  // calcula o valor do distribuidor
  valorDistribuidor = custoDeFabrica * (porcentDistribuidor / 100);
  // calcula o valor total do carro
  valorTotal = custoDeFabrica + valorImpostos + valorDistribuidor;
  // exibicao dos valores
  printf("\nValor total do carro: R$%.2f\n", valorTotal);
  printf("Valor do distribuidor (%.2f%%): R$%.2f\n", porcentDistribuidor,
         valorDistribuidor);
  printf("Valor dos impostos (%.2f%%): R$%.2f\n", porcentImpostos,
         valorImpostos);

  return 0;
}
