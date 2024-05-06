#include <stdio.h>
#define NUM_PESSOAS 20

int main() {
    float salarios[NUM_PESSOAS];
    float novos_salarios[NUM_PESSOAS];

    printf("Digite os salários das 20 pessoas:\n");
  
    for (int i = 0; i < NUM_PESSOAS; i++) {
        printf("Pessoa %d: ", i + 1);
        scanf("%f", &salarios[i]);
    }

    for (int i = 0; i < NUM_PESSOAS; i++) {
        novos_salarios[i] = salarios[i] * 1.08;
      
    }

    printf("\nListagem de Salários:\n");
    printf("Pessoa\tSalário\tNovo Salário\n");
    for (int i = 0; i < NUM_PESSOAS; i++) {
        printf("%d\t%.2f\t%.2f\n", i + 1, salarios[i], novos_salarios[i]);
    }

    return 0;
}