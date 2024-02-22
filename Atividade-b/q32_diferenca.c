// B-Q32: Leia um número inteiro (3 dígitos), calcule e escreva a diferença entre o número e seu inverso.

#include<stdio.h>

int main() {
    int numero;

    printf("> Digite um número inteiro de 3 dígitos: ");
    scanf("%d", &numero);

    int digito_1 = numero / 100;
    int digito_2 = (numero % 100) / 10;
    int digito_3 = numero % 10;
    
    int numero_invertido = digito_3 * 100 + digito_2 * 10 + digito_1;
    int diferenca = numero - numero_invertido;

    printf("> Diferença: %d - %d = %d", numero, numero_invertido, diferenca);

    return 0;
}
