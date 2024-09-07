#include "pilha.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

Pilha* criarPilha() {
    Pilha* pilha = (Pilha*) malloc(sizeof(Pilha));
    pilha->topo = 0;
    return pilha;
}

void pilhaPush(Pilha* pilha, float valor) {
    if (estaCheia(pilha)) {
        printf("Capacidade excedida. Nao e possivel adicionar o valor %.2f\n", valor);
        return;
    }

    pilha->vetor[pilha->topo] = valor;
    pilha->topo++;
}

float pilhaPop(Pilha* pilha) {
    float valor;
    if (estaVazia(pilha)) {
        printf("Pilha Vazia!\n");
        return -1;
    }

    return pilha->vetor[--pilha->topo];
}

void mostrarPilha(Pilha* pilha) {
    if (estaVazia(pilha)) {
        printf("Pilha vazia!\n");
        return;
    }

    for (int i = pilha->topo - 1; i >= 0; i--) {
        printf("|%.2f|\n", pilha->vetor[i]);
        printf("+-----+\n");
    }
}

int buscarValor(Pilha* pilha, float valor) {
    if (estaVazia(pilha)) {
        printf("Pilha vazia!\n");
        return -1;
    }

    for (int i = 0; i < pilha->topo; i++) {
        if (pilha->vetor[i] == valor) {
            return i;
        }
    }

    return -1;
}

void mostrarTamanho(Pilha* pilha) {
    printf("Tamanho da Pilha: %d\n", pilha->topo);
}

void liberarPilha(Pilha* pilha) {
    free(pilha);
}

int estaVazia(Pilha* pilha) {
    return pilha->topo == 0;
}

int estaCheia(Pilha* pilha) {
    return pilha->topo == SIZE;
}

int canPop(Pilha* pilha) {
    return !estaVazia(pilha);
}

int canPush(Pilha* pilha) {
    return !estaCheia(pilha);
}
