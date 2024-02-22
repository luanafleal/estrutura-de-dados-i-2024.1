//A - Q1: Leia uma velocidade em m/s, calcule e escreva esta velocidade em km/h.(Vkm/h = Vm/s * 3.6)

#include<stdio.h>

int main() {
    float velocidade_ms;

    printf("|----------- m/s --> km/h -----------|\n");
    printf("> Velocidade(m/s): ");
    scanf("%f", &velocidade_ms);

    float velocidade_km = velocidade_ms * 3.6;

    printf("> %.2f m/s equivalem a %.2f km/h", velocidade_ms, velocidade_km);

    return 0;
}