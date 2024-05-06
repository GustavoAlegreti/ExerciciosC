
//Faz uma lista de pedidos, recebendo o codigo do item, o valor unitario e a quantidade. Exibindo no final o valor total.

#include <stdio.h>

#define MAX_PRODUTOS 10

typedef struct {
    int codigo;
    float valor_unitario;
    int quantidade_vendida;
} Produto;

int main() {
    Produto produtos[MAX_PRODUTOS];
    int i, codigo_consulta;

    printf("Digite as informacoes dos produtos:\n");
    for (i = 0; i < MAX_PRODUTOS; i++) {
        printf("Produto %d:\n", i + 1);
        printf("Codigo: ");
        scanf("%d", &produtos[i].codigo);
        printf("Valor unitario: ");
        scanf("%f", &produtos[i].valor_unitario);
        printf("Quantidade vendida: ");
        scanf("%d", &produtos[i].quantidade_vendida);
    }

    printf("Listagem de produtos:\n");
    for (i = 0; i < MAX_PRODUTOS; i++) {
        printf("CODIGO: %d ; V.UNIT: %.2f ; TOTALITEM: %.2f\n",
               produtos[i].codigo, produtos[i].valor_unitario,
               produtos[i].valor_unitario * produtos[i].quantidade_vendida);
    }

    int quantidade_total = 0;
    float valor_total = 0;
    for (i = 0; i < MAX_PRODUTOS; i++) {
        quantidade_total += produtos[i].quantidade_vendida;
        valor_total += produtos[i].valor_unitario * produtos[i].quantidade_vendida;
    }
    float media_quantidade = (float)quantidade_total / MAX_PRODUTOS;
    float media_valor_unitario = valor_total / quantidade_total;
    float media_valor_total_por_item = valor_total / quantidade_total;

    printf("\nQuantidade total de itens vendidos: %d\n", quantidade_total);
    printf("Valor total Vendido: %.2f\n", valor_total);
    printf("Quantidade media de itens por venda: %.2f\n", media_quantidade);
    printf("Valor unitario medio: %.2f\n", media_valor_unitario);
    printf("Media do valor total por item: %.2f\n", media_valor_total_por_item);

    printf("\nDigite um codigo para consulta de item vendido: ");
    scanf("%d", &codigo_consulta);
    int encontrado = 0;
    for (i = 0; i < MAX_PRODUTOS; i++) {
        if (produtos[i].codigo == codigo_consulta) {
            printf("Informacoes do produto:\n");
            printf("Codigo: %d\n", produtos[i].codigo);
            printf("Valor unitario: %.2f\n", produtos[i].valor_unitario);
            printf("Quantidade: %d\n", produtos[i].quantidade_vendida);
            printf("Total item: %.2f\n", produtos[i].valor_unitario * produtos[i].quantidade_vendida);
            encontrado = 1;
            break;
        }
    }
    if (!encontrado) {
        printf("Codigo nao encontrado.\n");
    }

    return 0;
}