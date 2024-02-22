// A - Q13: Leia um valor em real (R$), calcule e escreva 70% deste valor.

#include<stdio.h>

int main() {
    float valor;

    printf("Valor(R$): ");
    scanf("%f", &valor);

    float sententa_por_cento = valor * 0.70;

    printf("> 70%% de R$ %.2f = R$ %.2f\n", valor, sententa_por_cento);
}