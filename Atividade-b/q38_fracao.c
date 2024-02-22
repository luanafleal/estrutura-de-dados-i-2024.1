// B-Q38: Leia 2 (duas) frações (numerador e denominador), calcule e escreva a soma destas frações, escrevendo o
// resultado em forma de fração.

#include <stdio.h>

int main() {
    int num1;
    int den1;
    int num2;
    int den2;

    printf("> Digite o numerador e o denominador da primeira fração separados por espaço: ");
    scanf("%d %d", &num1, &den1);

    printf("> Digite o numerador e o denominador da segunda fração separados por espaço: ");
    scanf("%d %d", &num2, &den2);

    int den_comum = den1 * den2;

    int novo_num1 = num1 * den2;
    int novo_num2 = num2 * den1;

    int soma_numeradores = novo_num1 + novo_num2;

    printf("> A soma das frações é: %d/%d\n", soma_numeradores, den_comum);

    return 0;
}
