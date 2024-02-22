//A-Q7: Leia 3 números, calcule e escreva a soma dos 2 primeiros e a diferença entre os 2 últimos.

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

    int soma = numero_1 + numero_2;
    int diferenca = numero_2 - numero_3;

    printf("> Soma Dois Primeiros: %d + %d = %d\n", numero_1, numero_2, soma);
    printf("> Diferença Dois Últimos: %d - %d = %d\n", numero_2, numero_3, diferenca);

    return 0;
}
