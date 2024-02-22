// A - Q26: Leia um número inteiro de dias, calcule e escreva quantas semanas e quantos dias ele corresponde.

#include<stdio.h>

int main() {
    int dias;

    printf("> Quant. de Dias: ");
    scanf("%d", &dias);

    int semanas = dias / 7;
    int dias_restante = dias % 7;


    printf("> %d dias equivalem a %d semanas e %d dias", dias, semanas, dias_restante);
}
