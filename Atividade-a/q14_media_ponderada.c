// A - Q14: Leia 3 notas de um aluno e o peso de cada nota, calcule e escreva a média ponderada.

#include<stdio.h>

int main() {
    float nota1;
    float nota2;
    float nota3;
    float peso1;
    float peso2;
    float peso3;

    printf("> Primeira Nota: ");
    scanf("%f", &nota1);
    printf("Peso: ");
    scanf("%f", &peso1);
    printf("----------\n");
    printf("> Segunda Nota: ");
    scanf("%f", &nota2);
    printf("Peso: ");
    scanf("%f", &peso2);
    printf("----------\n");
    printf("> Terceira Nota: ");
    scanf("%f", &nota3);
    printf("Peso: ");
    scanf("%f", &peso3);

    float media_ponderada = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

    printf("> Media: %.2f", media_ponderada);
}
