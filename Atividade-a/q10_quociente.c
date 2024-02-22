//A-Q10: Leia 2 números inteiros, calcule e escreva o quociente e o resto da divisão do 1o pelo 2o.

#include<stdio.h>

int main() {
    int numero_1;
    int numero_2;

    printf("> Primeiro Número: ");
    scanf("%d", &numero_1);
    printf("> Segundo Número: ");
    scanf("%d", &numero_2);

    float quociente = numero_1 / numero_2;
    float resto = numero_1 % numero_2;

    printf("\n> Divisão: %d / %d\n> Quociente: %.2f\n> Resto: %.2f\n", numero_1, numero_2, quociente, resto);

    return 0;
}
