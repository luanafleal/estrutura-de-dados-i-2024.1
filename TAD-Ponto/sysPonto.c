#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"

void menu();

int main() {
    int opcao;
    Ponto* p1 = NULL;
    Ponto* p2 = NULL;
    menu();
    scanf("%d", &opcao);
    
    while (opcao != 0) {
        if (opcao == 1) {
            float x, y;
            printf("Digite as coordenadas de P1 (x y): ");
            scanf("%f %f", &x, &y);
            p1 = criarPonto(x, y);
            printf("Ponto P1 criado: (%.2f, %.2f)\n", p1->x, p1->y);
        } else if (opcao == 2) {
            float x, y;
            printf("Digite as coordenadas de P2 (x y): ");
            scanf("%f %f", &x, &y);
            p2 = criarPonto(x, y);
            printf("Ponto P2 criado: (%.2f, %.2f)\n", p2->x, p2->y);
        } else if (opcao == 3) {
            mostrarPontos(p1, p2);
        } else if (opcao = 4) {
            if (p1 == NULL || p2 == NULL) {
                printf("Os pontos não foram criados corretamente!\n");
            } else {
                float distancia = calcularDistancia(p1, p2);
                printf("Distancia entre p1(%.2f, %.2f) e p2(%.2f, %.2f): %.2f\n", p1->x, p1->y, p2->x, p2->y, distancia);
            }

        }

        printf("Enter to continue...");
        scanf("%*c"); // Consumir a nova linha pendente
        scanf("%*c"); // Esperar por Enter
        system("cls");
        menu();
        scanf("%d", &opcao);
    }

    if (p1 != NULL) {
        liberarPonto(p1);
        liberarPonto(p2);
    }

    return 0;

}

void menu() {
    char menu[] = ">>> Escolha uma Opcao\n \
    1 - Adicionar Ponto P1\n \
    2 - Adicionar Ponto P2\n \
    3 - Mostrar Pontos\n \
    4 - Calcular Distancia entre os Pontos\n \
    0 - Sair\n \
    >>> ";
    printf("%s", menu);
}