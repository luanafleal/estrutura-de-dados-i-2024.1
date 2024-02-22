// B-Q37: Leia a idade de uma pessoa expressa em anos, meses e dias e escreva-a expressa apenas em dias.

#include<stdio.h>

int main() {
    int dias;

    printf("> Digite sua idade em número de Dias: ");
    scanf("%d", &dias);

    int anos = dias / 365;
    int meses = (dias % 365) / 30;
    int dias_restantes = dias - anos * 365 - meses * 30;

    printf("> Sua Idade: %d anos, %d meses e %d dias\n", anos, meses, dias_restantes);

    return 0;
}