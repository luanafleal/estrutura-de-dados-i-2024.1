//A-Q8: Leia 2 números, calcule e escreva a divisão da soma pela subtração dos números lidos.

#include<stdio.h>

int main() {
    float numero_1;
    float numero_2;

    printf("> Primeiro Número: ");
    scanf("%f", &numero_1);
    printf("> Segundo Número: ");
    scanf("%f", &numero_2);

    float divisao = (numero_1 + numero_2) / (numero_1 - numero_2);

    printf("> Resultado: (%.2f + %.2f) / (%.2f - %.2f) = %.2f\n", numero_1, numero_2, numero_1, numero_2, divisao);

    return 0;
}
