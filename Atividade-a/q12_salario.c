// A - Q12: Leia o salário de um trabalhador e escreva seu novo salário com um aumento de 25%.

#include<stdio.h>

int main() {
    float salario;

    printf("Sálario(R$): ");
    scanf("%f", &salario);

    float aumento = salario + salario * 0.25;

    printf("\nReceber Aumento(25%%)...\n");
    printf("> Novo salário: %.2f\n", aumento);
}