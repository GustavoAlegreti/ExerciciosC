#include <stdio.h>

struct Pessoa {
    char nome[50];
    int idade;
    char endereco[100];
};

int main() {
    struct Pessoa pessoa;

    printf("Digite o nome da pessoa: ");
    scanf("%s", pessoa.nome);
    printf("Digite a idade da pessoa: ");
    scanf("%d", &pessoa.idade);
    printf("Digite o endereço da pessoa: ");
    scanf("%s", pessoa.endereco);
  
    printf("\nDados da pessoa:\n");
    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Endereço: %s\n", pessoa.endereco);

    return 0;
}