// A - Q11: Leia um número inteiro (3 dígitos) e escreva o inverso do número. (Ex.: número = 532 ; inverso = 235)

#include<stdio.h>

int main() {
    int numero;

    printf("Número(3 dígitos): ");
    scanf("%d", &numero);

    int centena = numero / 100;
    int dezena = (numero - centena * 100) / 10;
    int unidade = (numero % 100) - dezena * 10;

    printf("Numero Digitado: %d\nInverso: %d%d%d\n", numero, unidade, dezena, centena);
}