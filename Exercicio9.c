
//Conversor de Temperatura de Celsius para Kelvin e Farenheit.

#include <stdio.h>

int main() {
    float temperatura_celsius, temperatura_kelvin, temperatura_fahrenheit;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temperatura_celsius);

    //converte c em k
    temperatura_kelvin = temperatura_celsius + 273.15;

    //converte c em f
    temperatura_fahrenheit = (temperatura_celsius * 9 / 5) + 32;

    printf("\nTemperatura em Kelvin: %.2f K\n", temperatura_kelvin);
    printf("Temperatura em Fahrenheit: %.2f °F\n", temperatura_fahrenheit);

    return 0;
}