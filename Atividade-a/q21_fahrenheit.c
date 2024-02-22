// A - Q21: Leia uma temperatura em °F, calcule e escreva a equivalente em °C. (t°C = (5 * t°F - 160) / 9).

#include<stdio.h>

int main() {
    float temperatura_fahrenheit;

    printf("### Fahrenheit para Celsius ###\n");
    printf("> Temperatura(°F): ");
    scanf("%f", &temperatura_fahrenheit);

    float temperatura_celsius = (5 * temperatura_fahrenheit - 160) / 9;

    printf("> %.2f °F equivalem a %.2f °C", temperatura_fahrenheit, temperatura_celsius);
}
