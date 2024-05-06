#include <stdio.h>
#define MAX_PRODUTOS 30

typedef struct {
    int codigo;
    int quantidade;
    float valorCompra;
    float valorVenda;
} Produto;

int main() {
    Produto produtos[MAX_PRODUTOS];
    int numProdutos = 0;

    while (1) {
        int opcao;

        printf("\nSelecione uma opção:\n");
        printf("1 - Adicionar produto\n");
        printf("2 - Listar todos os produtos\n");
        printf("3 - Listar produto por código\n");
        printf("0 - Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Encerrando o programa...\n");
            break;
        }

        switch (opcao) {
            case 1:
                if (numProdutos < MAX_PRODUTOS) {
                    printf("Digite o código do produto: ");
                    scanf("%d", &produtos[numProdutos].codigo);
                    printf("Digite a quantidade: ");
                    scanf("%d", &produtos[numProdutos].quantidade);
                    printf("Digite o valor de compra: ");
                    scanf("%f", &produtos[numProdutos].valorCompra);
                    printf("Digite o valor de venda: ");
                    scanf("%f", &produtos[numProdutos].valorVenda);
                      numProdutos++;
                    printf("Produto adicionado com sucesso.\n");
                } else {
                    printf("Limite de produtos atingido.\n");
                }
                break;
            case 2:
                printf("Lista de todos os produtos:\n");
                for (int i = 0; i < numProdutos; i++) {
                    printf("Código: %d | Quantidade: %d | Valor de compra: %.2f | Valor de venda: %.2f\n",
                           produtos[i].codigo, produtos[i].quantidade, produtos[i].valorCompra, produtos[i].valorVenda);
                }
                break;
            case 3:
                if (numProdutos > 0) {
                    int codigo;
                    printf("Digite o código do produto que deseja visualizar: ");
                    scanf("%d", &codigo);
                    int encontrado = 0;
                    for (int i = 0; i < numProdutos; i++) {
                        if (produtos[i].codigo == codigo) {
                            printf("Produto encontrado:\n");
                            printf("Código: %d | Quantidade: %d | Valor de compra: %.2f | Valor de venda: %.2f\n",
                                   produtos[i].codigo, produtos[i].quantidade, produtos[i].valorCompra, produtos[i].valorVenda);
                            encontrado = 1;
                            break;
                        }
                    }
                    if (!encontrado) {
                        printf("Produto não encontrado.\n");
                    }
                } else {
                    printf("Não há produtos cadastrados.\n");
                }
                break;
            default:
                printf("Opção inválida.\n");
        }
    }
    return 0;
}