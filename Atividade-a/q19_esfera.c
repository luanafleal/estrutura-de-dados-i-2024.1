// A - Q19: Leia o valor do raio de uma esfera, calcule e escreva seu volume. (v = (4 * p * r3) / 3) (p = 3,14)

#include<stdio.h>
#include<math.h>

int main() {
    float raio;
    float pi = 3.14;

    printf("### Volume da Esfera ###\n");
    printf("> Raio: ");
    scanf("%f", &raio);

    float volume = (4 * pi * pow(raio, 3)) / 3;

    printf("> Volume: %.2f", volume);
}
