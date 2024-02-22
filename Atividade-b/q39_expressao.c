// B-Q39: Leia três números inteiros e positivos (A, B, C) e calcule a seguinte expressão: D = (R + S)/2,
// onde R = (A + B)^2 e S = (B + C)^2

#include <stdio.h>
#include <math.h>

int main() {
    int num1, num2, num3;

    printf("> Primeiro Número: ");
    scanf("%d", &num1);
    printf("> Segundo Número: ");
    scanf("%d", &num2);
    printf("> Terceiro Número: ");
    scanf("%d", &num3);

    int valor_d = ((pow(num1 + num2, 2)) + (pow(num2 + num3, 2))) / 2;

    printf("> Resultado: %d\n", valor_d);

    return 0;
}
