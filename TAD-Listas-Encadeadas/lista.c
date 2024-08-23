#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

Lista* novaLista() {
    return NULL;
}

Lista* inserirInicio(Lista* lista, int valor) {
    Lista* novo = (Lista*)malloc(sizeof(Lista));
    novo->valor = valor;
    novo->proximo = lista;

    return novo;
}

Lista* inserirFinal(Lista* lista, int valor) {
    if (estaVazia(lista)) {
        return inserirInicio(lista, valor);
    }

    Lista* novo = (Lista*)malloc(sizeof(Lista));
    novo->valor = valor;
    novo->proximo = NULL;
    
    Lista* ultimo = lista;
    while (ultimo->proximo != NULL) {
    ultimo = ultimo->proximo;
    }
    
    ultimo->proximo = novo;
    return lista;
}

Lista* buscarValor(Lista* lista) {
    int valorProcurado;
    printf("> Digite o valor: ");
    scanf("%d", &valorProcurado);

    for (Lista* p = lista; p != NULL; p = p->proximo) {
        if (p->valor == valorProcurado) {
            return p;
        }
    }
    return NULL;
}

void mostrarLista(Lista* lista) {
    if (estaVazia(lista)) {
        printf("Lista Vazia!\n");
    } else {
        printf("Lista = (");
        for(Lista* p = lista; p != NULL; p = p->proximo) {
            printf("%d", p->valor);
            if (p->proximo != NULL) {
                printf(", ");
            }    
        }
        printf(")\n");
    }
}

int estaVazia(Lista *lista) {
    return lista == NULL;
}
