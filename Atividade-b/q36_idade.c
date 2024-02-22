// B-Q36: Leia a idade de uma pessoa expressa em anos, meses e dias e escreva-a expressa apenas em dias.

#include<stdio.h>

int main() {
    int anos;
    int meses;
    int dias;

    printf("*** SUA IDADE EM ANOS, MESES E DIAS ***\n");
    printf("> Anos: ");
    scanf("%d", &anos);
    printf("> Meses: ");
    scanf("%d", &meses);
    printf("> Dias: ");
    scanf("%d", &dias);

    int quant_dias = anos * 365 + meses * 30 + dias;

    printf("> Sua Idade = %d dias", quant_dias);

    return 0;
}
