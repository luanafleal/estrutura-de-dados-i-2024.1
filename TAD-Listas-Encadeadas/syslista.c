#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void menu();
void liberarLista(Lista* lista);

int main() {
    Lista* minhaLista = novaLista();
    menu();
    int opcao;
    scanf("%d", &opcao);

    while (opcao != 0) {
        if (opcao == 1) {
            int numero;
            printf("Digite o valor: ");
            scanf("%d", &numero);
            minhaLista = inserirInicio(minhaLista, numero);
            printf("Inserido com Sucesso!\n");
            mostrarLista(minhaLista);
        }else if (opcao == 2) {
            int numero;
            printf("Digite o valor: ");
            scanf("%d", &numero);
            minhaLista = inserirFinal(minhaLista, numero);
            printf("Inserido com Sucesso!\n");
            mostrarLista(minhaLista);
        } else if (opcao == 3) {
            Lista* resultado = buscarValor(minhaLista);
            if (resultado != NULL) {
                printf("Valor encontrado: %d\n", resultado->valor);
            } else {
                printf("Valor nao encontrado.\n");
            }
        } else if (opcao == 4) {
            mostrarLista(minhaLista);
        }

        menu();
        scanf("%d", &opcao);
    }

    liberarLista(minhaLista);

    printf("Vazia = %d\n", estaVazia(minhaLista));

    return 0;
}

void menu() {
    char menu[] =
    ">>> Escolha uma Opcao\n \
    1 - Inserir Valor no Inicio\n \
    2 - Inserir Valor no Final\n \
    3 - Buscar Valor\n \
    4 - Mostrar Lista\n \
    0 - Sair\n \
    >>> ";
    printf("%s", menu);
}

void liberarLista(Lista* lista) {
    Lista* atual = lista;
    Lista* proximo;

    while (atual != NULL) {
        proximo = atual->proximo; // Salvar o próximo nó
        free(atual);              // Liberar o nó atual
        atual = proximo;         // Avançar para o próximo nó
    }
}