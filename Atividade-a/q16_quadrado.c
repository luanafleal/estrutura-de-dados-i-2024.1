// A - Q16: Leia o valor do lado de um quadrado, calcule e escreva sua área. (área = lado2)

#include<stdio.h>
#include<math.h>

int main() {
    float lado;

    printf("Lado Do Quadrado: ");
    scanf("%f", &lado);

    float area_quadrado = pow(lado, 2);

    printf("Área do Quadrado: %.2f", area_quadrado);
}
