#include <stdio.h>

float calcular_lucro(float precoCompra, float precoVenda) {
    return ((precoVenda - precoCompra) / precoCompra) * 100;
}

int main() {
    int numMercadorias = 100;
    int lucroMenor = 0, lucroEntre = 0, lucroMaior = 0;

    for (int i = 0; i < numMercadorias; i++) {
        float precoCompra, precoVenda;

        printf("Digite o preço de compra da mercadoria %d: ", i + 1);
        scanf("%f", &precoCompra);

        printf("Digite o preço de venda da mercadoria %d: ", i + 1);
        scanf("%f", &precoVenda);

        float lucro = calcularlucro(precoCompra, precoVenda);

        if (lucro < 10) {
            lucroMenor++;
        } else if (lucro <= 20) {
            lucroEntre++;
        } else {
            lucroMaior++;
        }
    }

    printf("\nQuantidade de mercadorias que proporcionam:\n");
    printf("Lucro < 10%%: %d\n", lucroMenor);
    printf("10%% <= Lucro <= 20%%: %d\n", lucroEntre);
    printf("Lucro > 20%%: %d\n", lucroMaior);

    return 0;
}
