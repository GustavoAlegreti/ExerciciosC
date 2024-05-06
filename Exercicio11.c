
//Recebe um valor de anos e o mostra em meses dias horas e minutos.

#include <stdio.h>

int main() {
    int anos;
    int meses, dias, horas, minutos;

    printf("Digite a quantidade de anos: ");
    scanf("%d", &anos);

    meses = anos * 12;
    dias = anos * 365;
    horas = dias * 24;
    minutos = horas * 60;

    printf("\n%d anos equivalem a:\n", anos);
    printf("%d meses\n", meses);
    printf("%d dias\n", dias);
    printf("%d horas\n", horas);
    printf("%d minutos\n", minutos);

    return 0;
}