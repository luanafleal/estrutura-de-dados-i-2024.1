#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "ponto.h"

Ponto* criarPonto (float x, float y) {
    Ponto* ponto = (Ponto*) malloc(sizeof(Ponto));
    if (ponto == NULL) {
        printf("Memória Insuficiente\n");
        exit(1);
    }
    ponto->x = x;
    ponto->y = y;
    
    return ponto;
}

void liberarPonto (Ponto* ponto) {
    free(ponto);
}

void mostrarPontos(Ponto* p1, Ponto* p2) {
    if (p1 != NULL && p2 != NULL) {
        printf("> Ponto P1: (%.2f, %.2f)\n", p1->x, p1->y);
        printf("> Ponto P2: (%.2f, %.2f)\n", p2->x, p2->y);
    } else if (p1 == NULL && p2 == NULL) {
        printf("> Pontos P1 e P2 nao foram criados\n");
    } else if (p1 == NULL) {
        printf("Ponto P1 nao foi criado!\n");
        printf("> Ponto P2: (%.2f, %.2f)\n", p2->x, p2->y);
    } else {
        printf("> Ponto P1: (%.2f, %.2f)\n", p1->x, p1->y);
        printf("Ponto P2 nao foi criado!\n");
    }
}

float calcularDistancia(Ponto* p1, Ponto* p2) {
    float dx = p2->x - p1->x;
    float dy = p2->y - p1->y;
    
    return sqrt(dx*dx + dy*dy);

}