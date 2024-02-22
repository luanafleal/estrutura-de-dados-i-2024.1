// A - Q22: Leia um valor em km, calcule e escreva o equivalente em m.

#include<stdio.h>

int main() {
    float quilometros;

    printf("### KM para M ###\n");
    printf("> Distância(KM): ");
    scanf("%f", &quilometros);

    float metros = quilometros * 1000;

    printf("> %.2f km equivalem a %.2f m", quilometros, metros);
}
