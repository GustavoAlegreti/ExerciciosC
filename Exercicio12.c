
//Recebe dois numeros e faz calculos.

#include <stdio.h>

int main() {
  float n1, n2;
  float soma, produtoQuadrado, quadradoN1, somaCubos;

  printf("Digite o primeiro número: ");
  scanf("%f", &n1);
  printf("Digite o segundo número: ");
  scanf("%f", &n2);

  // calculo
  soma = n1 + n2;
  produtoQuadrado = n1 * (n2 * n2);
  quadradoN1 = n1 * n1;
  somaCubos = (n1 * n1 * n1) + (n2 * n2 * n2);

  printf("\nSoma dos números: %.2f\n", soma);
  printf("Produto do primeiro número pelo quadrado do segundo: %.2f\n",
         produtoQuadrado);
  printf("Quadrado do primeiro número: %.2f\n", quadradoN1);
  printf("Soma dos cubos de ambos os números: %.2f\n", somaCubos);

  return 0;
}