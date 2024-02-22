//A-Q6: Leia uma velocidade em km/h, calcule e escreva esta velocidade em m/s. (Vm/s = Vkm/h / 3.6).

#include<stdio.h>

int main() {
    float velocidade_km;

    printf("|----------- km/h --> m/s -----------|\n");
    printf("> Velocidade(km/h): ");
    scanf("%f", &velocidade_km);

    float velocidade_ms = velocidade_km / 3.6;

    printf("> %.2f km/h corresponde a %.2f m/s", velocidade_km, velocidade_ms);

    return 0;
}