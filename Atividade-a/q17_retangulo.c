// A - Q17: Leia o valor da base e altura de um retângulo, calcule e escreva sua área. (área = base * altura)

#include<stdio.h>

int main() {
    float base;
    float altura;

    printf("### ÁREA DO RETÂNGULO ###\n");
    printf("Base: ");
    scanf("%f", &base);
    printf("Altura: ");
    scanf("%f", &altura);

    float area_retangulo = base * altura;

    printf("Área do Retângulo: %.2f", area_retangulo);
}
