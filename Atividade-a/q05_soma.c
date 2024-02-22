//A-Q5: Leia um número inteiro (3 dígitos), calcule e escreva a soma de seus elementos (C + D + U).

#include<stdio.h>

int main() {
    int numero;

    printf("> Número: ");
    scanf("%d", &numero);

    int centena = numero / 100;
    int dezena = (numero - centena * 100) / 10;
    int unidade = numero - centena * 100 - dezena * 10;

    int soma_elementos = centena + dezena + unidade;


    printf("> Soma dos elementos: %d + %d + %d = %d", centena, dezena, unidade, soma_elementos);

    return 0;
}