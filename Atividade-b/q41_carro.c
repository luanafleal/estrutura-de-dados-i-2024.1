/*
B-Q41: O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do
distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que a percentagem do distribuidor
seja de 28% e os impostos de 45%, escreva um algoritmo que leia o custo de fábrica de um carro e
escreva o custo ao consumidor.
*/ 

#include <stdio.h>

int main() {
    float custo_de_fabrica_carro, custo_ao_consumidor, valor_do_distribuidor, valor_impostos;

    printf("> Custo de Fábrica do Carro(R$): ");
    scanf("%f", &custo_de_fabrica_carro);

    valor_do_distribuidor = custo_de_fabrica_carro * 0.28;
    valor_impostos = custo_de_fabrica_carro * 0.45;
    custo_ao_consumidor = custo_de_fabrica_carro + valor_do_distribuidor + valor_impostos;

    printf("> Custo ao Consumidor: R$ %.2f\n", custo_ao_consumidor);

    return 0;
}
