// B-Q30: Leia um número inteiro de minutos, calcule e escreva quantos dias, quantas horas e quantos minutos ele
// corresponde.

#include<stdio.h>

int main() {
    int minutos;

    printf("> Quantidade de Minutos: ");
    scanf("%d", &minutos);

    int dias = minutos / (24 * 60);
    int horas = (minutos % (24 * 60)) / 60;
    int minutos_restantes = minutos % 60;

    printf("> %d minutos correspondem a %d dias, %d horas e %d minutos\n", minutos, dias, horas, minutos_restantes);

    return 0;
}
