/*
B-Q44: Sabendo que latão é constituído de 70% de cobre e 30% de zinco, escreva um algoritmo que calcule a
quantidade de cada um desses componentes para se obter certa quantidade de latão (em kg), informada
pelo usuário.
*/ 

#include <stdio.h>

int main() {
    float quantidade_latao_kg;
    float quantidade_cobre_kg, quantidade_zinco_kg;

    printf("> Quantidade de latão (em kg): ");
    scanf("%f", &quantidade_latao_kg);

    quantidade_cobre_kg = quantidade_latao_kg * 0.70;
    quantidade_zinco_kg = quantidade_latao_kg * 0.30;

    printf("> Quantidade de cobre necessária: %.2f kg\n", quantidade_cobre_kg);
    printf("> Quantidade de zinco necessária: %.2f kg\n", quantidade_zinco_kg);

    return 0;
}
