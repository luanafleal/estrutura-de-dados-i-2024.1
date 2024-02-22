// B-Q40: Calcule a quantidade de dinheiro gasta por um fumante. Dados de entrada: o número de anos que ele
// fuma, o no de cigarros fumados por dia e o preço de uma carteira (1 carteira tem 20 cigarros).

#include <stdio.h>

int main() {
    int anos_de_vicio, numero_cigarros_por_dia, valor_por_carteira;

    printf("> Anos de Vício no Cigarro: ");
    scanf("%d", &anos_de_vicio);
    printf("> Quant. de Cigarros Fumados por Dia: ");
    scanf("%d", &numero_cigarros_por_dia);
    printf("> Valor da Carteira de Cigarro(R$): ");
    scanf("%d", &valor_por_carteira);

    int duracao_em_dias_da_carteira = 20 / numero_cigarros_por_dia;
    int quant_carteiras_por_ano = 365 / duracao_em_dias_da_carteira;
    int valor_gasto_no_vicio = quant_carteiras_por_ano * valor_por_carteira * anos_de_vicio;


    printf("> Em %d anos de vício, você gastou aproximadamente: R$ %d\n", anos_de_vicio, valor_gasto_no_vicio);

    return 0;
}
