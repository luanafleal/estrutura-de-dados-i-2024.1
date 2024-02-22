// B-Q31: Leia um número inteiro (4 dígitos binários), calcule e escreva o equivalente na base decimal.

#include<stdio.h>

int main() {
    int numero_binario;

    printf("> Digite um número binário de 4 dígitos: ");
    scanf("%d", &numero_binario);

    int digito_1 = numero_binario / 1000;
    int digito_2 = (numero_binario % 1000) / 100;
    int digito_3 = ((numero_binario % 1000) % 100) / 10;
    int digito_4 = numero_binario % 10;

    int decimal = digito_1 * 8 + digito_2 * 4 + digito_3 * 2 + digito_4 * 1;

    printf("> O número binário %d em decimal é %d", numero_binario, decimal);

    return 0;
}
