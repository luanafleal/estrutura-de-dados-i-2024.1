#include "pilha.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    Pilha* minhaPilha = criarPilha();
    printf("Pilha Inicializada!\n");

    // Prencher toda a pilha
    for (int i = 0; i < SIZE; i++) {
        if (canPush(minhaPilha)) {
            pilhaPush(minhaPilha, i);
        }
    }

    mostrarTamanho(minhaPilha);
    mostrarPilha(minhaPilha);

    // Tentando adicionar mais um elemento
    if (canPush(minhaPilha)) {
        pilhaPush(minhaPilha, 10);   
    } else {
        printf("\nNao e possivel adicionar o elemento, pilha esta cheia.\n\n");
    }

    // Removendo valor do topo
    if (canPop(minhaPilha)) {
        pilhaPop(minhaPilha);
        
    } else {
        printf("Pilha Vazia, nao e possivel remover valores.\n");
    }

    mostrarTamanho(minhaPilha);
    mostrarPilha(minhaPilha);

    // Buscar valor na pilha
    int valorBuscado = 3;
    int posicao = buscarValor(minhaPilha, valorBuscado);
    if (posicao != -1) {
        printf("O valor %d foi encontrado na posicao %d.\n", valorBuscado, posicao+1);
    } else {
        printf("O valor %d nao foi encontrado na pilha.\n", valorBuscado);
    }
    
    liberarPilha(minhaPilha);

    return 0;
}
