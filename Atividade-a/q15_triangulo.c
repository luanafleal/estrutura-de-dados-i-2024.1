// A - Q15: Leia o valor da base e altura de um triângulo, calcule e escreva sua área. (área=(base * altura)/2)

#include<stdio.h>

int main() {
    int base;
    int altura;

    printf("Base: ");
    scanf("%d", &base);

    printf("Lado: ");
    scanf("%d", &altura);

    float area_triangulo = (base * altura) / 2;

    printf("Área do Triângulo: %.2f", area_triangulo);
}
