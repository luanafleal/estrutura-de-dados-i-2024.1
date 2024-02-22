// A-Q3: Leia um valor em minutos, calcule e escreva o equivalente em horas e minutos.

#include<stdio.h>

int main() {
    int minutos;

    printf("> Minutos: ");
    scanf("%d", &minutos);

    int horas = minutos / 60;
    int minutos_restantes = minutos - horas * 60;

    printf("> %d minutos correspondem a %d horas e %d minutos.\n", minutos, horas, minutos_restantes);

    return 0;
}
