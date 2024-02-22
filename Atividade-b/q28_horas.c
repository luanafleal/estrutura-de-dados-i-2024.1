// B-Q28: Leia um número inteiro de horas, calcule e escreva quantas semanas, quantos dias e quantas horas ele corresponde.

#include<stdio.h>

int main() {
    int horas;

    printf("> Quant. de Horas: ");
    scanf("%d", &horas);

    int semanas = horas / 168;
    int dias = (horas % 168) / 24;
    int horas_restantes = horas % 24; 

    printf("> %dh equivalem a %d semanas, %d dias e %d horas\n", horas, semanas, dias, horas_restantes);

    return 0;
}
