// B-Q35: Leia um número inteiro (4 dígitos), calcule e escreva a soma dos elementos que o compõem. Ex.:
// número = 9534 ; soma = 9+5+3+4 = 21.
#include<stdio.h>

int main() {
    int numero;

    printf("> Digite um número de 4 dígitos: ");
    scanf("%d", &numero);

    int digito_1 = numero / 1000;
    int digito_2 = (numero % 1000) / 100;
    int digito_3 = ((numero % 1000) % 100) / 10;
    int digito_4 = numero % 10;

    int soma_digitos = digito_1 + digito_2 + digito_3 + digito_4;

    printf("> Soma = %d + %d + %d  + %d = %d", digito_1, digito_2, digito_3, digito_4, soma_digitos);

    return 0;
}
