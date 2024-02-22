// B-Q43:  F1_q43: Um sistema de equações lineares do tipo ax+by = c, dx + ey = f, pode ser resolvido segundo mostrado abaixo.
// x = ce - bf / ae - bd; y = af - cd / ae - bd. Escreva um algoritmo que leia os coeficientes a, b, c, d, e e f, calcule e escreva os valores de x e y.

#include <stdio.h>

int main() {
    float a, b, c, d, e, f, x, y;

    printf("Valor de A: ");
    scanf("%f", &a);
    printf("Valor de B: ");
    scanf("%f", &b);
    printf("Valor de C: ");
    scanf("%f", &c);
    printf("Valor de D: ");
    scanf("%f", &d);
    printf("Valor de E: ");
    scanf("%f", &e);
    printf("Valor de F: ");
    scanf("%f", &f);

    x = (c * e - b * f) / (a * e - b * d);
    y = (a * f - c * d) / (a * e - b * d);

    printf("> Valor de X = %.2f\n", x);
    printf("> Valor de Y = %.2f\n", y);

    return 0;
}
