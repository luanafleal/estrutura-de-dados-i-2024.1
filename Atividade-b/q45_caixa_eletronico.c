/*
B-Q45: Um algoritmo para gerenciar os saques de um caixa eletrônico deve possuir algum mecanismo para
decidir o numero de notas de cada valor que deve ser disponibilizado para o cliente que realizou o
saque. Um possível critério seria o da "distribuição ótima" no sentido de que as notas de menor valor
disponíveis fossem distribuídas em número mínimo possível. Por exemplo, se a maquina só dispõe de
notas de R$ 50, de R$ 10, de R$ 5 e de R$ 1, para uma quantia solicitada de R$ 87, o algoritmo deveria
indicar uma nota de R$ 50, três notas de R$ 10, uma nota de R$ 5 e duas notas de R$ 1. Escreva um
algoritmo que receba o valor da quantia solicitada e retorne a distribuição das notas de acordo com o
critério da distribuição ótima.
*/ 

#include <stdio.h>

int main() {
    float quantia_solicitada;
    int nota_50, nota_10, nota_5, nota_1;

    printf("> Quantia (R$): ");
    scanf("%f", &quantia_solicitada);

    nota_50 = quantia_solicitada / 50;
    nota_10 = (quantia_solicitada - nota_50 * 50) / 10;
    nota_5 = (quantia_solicitada - nota_50 * 50 - nota_10 * 10) / 5;
    nota_1 = quantia_solicitada - nota_50 * 50 - nota_10 * 10 - nota_5 * 5;

    printf("> Quantia Solicitada: R$ %.2f\n", quantia_solicitada);
    printf("> %d notas de R$ 50.00\n  %d notas de R$ 10.00\n  %d notas de R$ 5.00\n  %d notas de R$ 1.00", nota_50, nota_10, nota_5, nota_1);

    return 0;
}
