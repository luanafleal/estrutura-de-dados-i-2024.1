// A - Q25: Leia um número inteiro de metros, calcule e escreva quantos Km e quantos metros ele corresponde.

#include<stdio.h>

int main() {
    int metros;

    printf("> Distância(m): ");
    scanf("%d", &metros);

    int quilometros = metros / 1000;
    int centimetros_restante = metros % 1000;


    printf("> %d m equivalem a %d km e %d cm", metros, quilometros, centimetros_restante);
}
