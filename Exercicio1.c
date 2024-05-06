
//Armazena 10 numeros e mostra a soma

#include <stdio.h>
#include <stdlib.h>
int main (){
    int valores[10];
    int soma = 0;
    int i;
    printf("Digite 10 valores\n");
    for(i=0;i<10;i++) {
        printf("Valor %d: ",i+1);
        scanf("%d", &valores[i]);
        //adiciona cada valor a soma
        soma += valores[i];
    }
    printf("A soma dos valores digitados é: %d\n", soma);
return 0;
}