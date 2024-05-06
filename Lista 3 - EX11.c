
//Armazena o salário de 20 pessoas e calcula e armazena um novo salário com reajuste. No final é impresso todas as informações.

#include <stdio.h>
#define TAMANHO 20

int main() {
    float salario_antigo[TAMANHO];
    float novo_salario[TAMANHO];
    float diferenca[TAMANHO];
    float total_salario_antigo = 0, total_novo_salario = 0, total_diferenca = 0;
    int i;

    printf("Digite os salarios antigos das 20 pessoas: \n");
    for (i = 0; i < TAMANHO; i++) {
        scanf("%f", &salario_antigo[i]);
    }

    for (i = 0; i < TAMANHO; i++) {
        novo_salario[i] = salario_antigo[i] * 1.08;
        diferenca[i] = novo_salario[i] - salario_antigo[i];
        total_salario_antigo += salario_antigo[i];
        total_novo_salario += novo_salario[i];
        total_diferenca += diferenca[i];
    }

    printf("Listagem numerada de salario antigo, novo salario e diferenca:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("%d - Salario antigo: %.2f, Novo salario: %.2f, Diferenca: %.2f\n",
               i + 1, salario_antigo[i], novo_salario[i], diferenca[i]);
    }

    printf("Total de cada coluna:\n");
    printf("Total Salario Antigo: %.2f\n", total_salario_antigo);
    printf("Total Novo Salario: %.2f\n", total_novo_salario);
    printf("Total Diferenca: %.2f\n", total_diferenca);

    return 0;
}