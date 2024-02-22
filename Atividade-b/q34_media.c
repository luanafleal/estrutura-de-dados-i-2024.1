// B-Q34: Leia 3 números, calcule e escreva a média dos números.

#include<stdio.h>

int main() {
    int numero_1;
    int numero_2;
    int numero_3;

    printf("> Primeiro Número: ");
    scanf("%d", &numero_1);
    printf("> Segundo Número: ");
    scanf("%d", &numero_2);
    printf("> Terceiro Número: ");
    scanf("%d", &numero_3);

    float media = (numero_1 + numero_2 + numero_3) / 3;

    printf("> Média: %.2f", media);

    return 0;
}
