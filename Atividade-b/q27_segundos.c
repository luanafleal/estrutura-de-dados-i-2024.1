// B-Q27: Leia um número inteiro de segundos, calcule e escreva quantas horas, quantos minutos e quantos
// segundos ele corresponde.

#include<stdio.h>

int main() {
    int segundos;

    printf("> Segundos: ");
    scanf("%d", &segundos);

    int horas = segundos / 3600;
    int minutos = (segundos % 3600) / 60;
    int segundos_restantes = segundos % 60; ;

    printf("> %ds equivalem a %dh, %dmin e %ds\n", segundos, horas, minutos, segundos_restantes);

    return 0;
}
