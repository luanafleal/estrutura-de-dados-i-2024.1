// A - Q18: Leia o valor do raio de uma circunferência, calcule e escreva seu comprimento.(c = 2 * p * r)

#include<stdio.h>

int main() {
    float raio;
    float pi = 3.14;

    printf("### Comprimento da Circunferência ###\n");
    printf("> Raio: ");
    scanf("%f", &raio);

    float comprimento = 2 * pi * raio;

    printf("> Comprimento: %.2f", comprimento);
}
