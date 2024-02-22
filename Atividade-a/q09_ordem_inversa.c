//A-Q9: Leia 2 números (A, B) e escreva-os em ordem inversa (B, A).

#include<stdio.h>

int main() {
    float numero_1;
    float numero_2;

    printf("> Primeiro Número: ");
    scanf("%f", &numero_1);
    printf("> Segundo Número: ");
    scanf("%f", &numero_2);

    printf("> Ordem Inversa: (%.2f, %.2f)\n", numero_2, numero_1);

    return 0;
}
