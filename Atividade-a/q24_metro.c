// A - Q24: Leia um valor em m, calcule e escreva o equivalente em cm.

#include<stdio.h>

int main() {
    float metros;

    printf("### m para cm ###\n");
    printf("> Distância(m): ");
    scanf("%f", &metros);

    float centimetros = metros * 100;

    printf("> %.2f m equivalem a %.2f cm", metros, centimetros);
}
