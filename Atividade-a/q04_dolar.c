// A-Q4: Leia o valor do dólar e um valor em dólar, calcule e escreva o equivalente em real (R$).

#include<stdio.h>

int main() {
    float valor_do_dolar;
    float quantia_em_dolares;

    printf("|----------- US$ --> R$ -----------|\n");
    printf("> Valor do Dólar Hoje(R$): ");
    scanf("%f", &valor_do_dolar);
    printf("> Quantia Em Dólares(US$): ");
    scanf("%f", &quantia_em_dolares);

    float valor_em_reais = valor_do_dolar * quantia_em_dolares;

    printf("> US$ %.2f equivalem a R$ %.2f.\n", quantia_em_dolares, valor_em_reais);

    return 0;
}
