//A - Q2: Leia um valor em horas e um valor em minutos, calcule e escreva o equivalente em minutos.

#include<stdio.h>

int main() {
    int horas;
    int minutos;

    printf("> Horas: ");
    scanf("%d", &horas);
    printf("> Minutos: ");
    scanf("%d", &minutos);

    int minutos_totais = horas * 60 + minutos;

    printf("> %dh e %dmin equivalem a %dmin\n", horas, minutos, minutos_totais);

    return 0;
}