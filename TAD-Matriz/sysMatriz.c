#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

void menu();

int main() {
    Matriz* matriz = NULL;
    int m, n;
    int opcao;

    menu();
    scanf("%d", &opcao);

    while (opcao != 0) {
        if (opcao == 1) {
            printf("Digite o numero de linhas: ");
            scanf("%d", &m);
            printf("Digite o numero de colunas: ");
            scanf("%d", &n);
            matriz = criarMatriz(m, n);
            printf("Matriz criada com sucesso!\n");
        } else if (opcao == 2) {
            if (matriz == NULL) {
                printf("Matriz não criada ainda!\n");
            } else {
                preencherMatriz(matriz);
                printf("Matriz Preenchida!\n");
            }
        } else if (opcao == 3) {
            if (matriz == NULL) {
                printf("Matriz não criada ainda!\n");
            } else {
                int i, j;
                printf("Digite o indice da linha (0 a %d): ", matriz->linha - 1);
                scanf("%d", &i);
                printf("Digite o indice da coluna (0 a %d): ", matriz->coluna - 1);
                scanf("%d", &j);
                float valor = acessarElemento(matriz, i, j);
                printf("Valor no índice (%d, %d) é: %.2f\n", i, j, valor);
            }
        } else if (opcao == 4) {
            if (matriz == NULL) {
                printf("Matriz não criada ainda!\n");
            } else {
                exibirMatriz(matriz);
            }
        } else if (opcao == 5) {
            if (matriz == NULL) {
                printf("Matriz não criada ainda!\n");
            } else {
                liberarMatriz(matriz);
                matriz = NULL;
                printf("Matriz liberada com sucesso!\n");
            }
        }

        menu();
        scanf("%d", &opcao);
    }

    if (matriz != NULL) {
        liberarMatriz(matriz);
    }

    printf("Programa encerrado.\n");

    return 0;
}

void menu() {
    char menu[] =
    ">>> Escolha uma Opcao\n \
    1 - Criar Matriz\n \
    2 - Preencher Elemento\n \
    3 - Acessar Elemento\n \
    4 - Exibir Matriz\n \
    5 - Liberar Matriz\n \
    0 - Sair\n \
    >>> ";
    printf("%s", menu);
}
