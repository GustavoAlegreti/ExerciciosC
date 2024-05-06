
//Armazena dois numeros, soma os pares no intervalo entre eles e multiplica os impares no intervalo entre eles.

#include <stdio.h>

int main() {
    int num1, num2;
    int soma_pares = 0;
    int multiplicacao_impares = 1;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    //verificacao de qual numero e menor e qual e o maior
    int menor, maior;
    if (num1 < num2) {
        menor = num1;
        maior = num2;
    } else {
        menor = num2;
        maior = num1;
    }

    //iteracao do menor ate o maior número para ver se e p ou imp
    for (int i = menor; i <= maior; i++) {
        if (i % 2 == 0) { //se par
            soma_pares += i;
        } else { //se imp
            multiplicacao_impares *= i;
        }
    }

    printf("A soma dos números pares no intervalo é: %d\n", soma_pares);
    printf("A multiplicação dos números ímpares no intervalo é: %d\n", multiplicacao_impares);

    return 0;
}