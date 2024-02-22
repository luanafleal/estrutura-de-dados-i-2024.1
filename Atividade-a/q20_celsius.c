// A - Q20: Leia uma temperatura em °C, calcule e escreva a equivalente em °F. (t°F = (9 * t°C + 160) / 5)

#include<stdio.h>

int main() {
    float temperatura_celsius;

    printf("### Celsius para Fahrenheit ###\n");
    printf("> Temperatura(°C): ");
    scanf("%f", &temperatura_celsius);

    float temperatura_fahrenheit = (9 * temperatura_celsius + 160) / 5;

    printf("> %.2f °C equivalem a %.2f °F", temperatura_celsius, temperatura_fahrenheit);
}
