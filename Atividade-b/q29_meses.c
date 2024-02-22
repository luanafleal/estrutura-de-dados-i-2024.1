// B-Q29: Leia um número inteiro de meses, calcule e escreva quantos anos e quantos meses ele corresponde.

#include<stdio.h>

int main() {
    int meses;

    printf("> Quantidade de Meses: ");
    scanf("%d", &meses);

    int anos = meses / 12;
    int meses_restantes = meses % 12;

    printf("> %d meses correspondem a %d anos e %d meses\n", meses, anos, meses_restantes);

    return 0;
}
