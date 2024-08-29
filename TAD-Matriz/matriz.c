#include "matriz.h"
#include <stdio.h>
#include <stdlib.h>

Matriz* criarMatriz(int m, int n) {
    Matriz* matriz = (Matriz*) malloc(sizeof(Matriz)); 
    if (matriz == NULL) {
        printf("Memória Insufiente!\n");
        exit(1);
    }

    matriz->linha = m;
    matriz->coluna = n;
    matriz->vetor = (float**) malloc(m*sizeof(float*));
    
    for (int i = 0; i < m; i++) {
        matriz->vetor[i] = (float*) malloc(n*sizeof(float));
    }

    return matriz;
}

void preencherMatriz(Matriz *matriz) {
    float valor;
    printf("Preencha a matriz com valores:\n");
    for (int i = 0; i < matriz->linha; i++) {
        for (int j = 0; j < matriz->coluna; j++) {
            printf("Digite o valor para a posição [%d][%d]: ", i, j);
            scanf("%f", &valor);
            
            if (i < 0 || i >= matriz->linha || j < 0 || j >= matriz->coluna) {
                printf("Atribuicao Invalida\n");
                exit(1);
            }
            matriz->vetor[i][j] = valor;
        }
    }
}

void exibirMatriz(Matriz* matriz) {
    for (int i = 0; i < matriz->linha; i++) {
        for (int j = 0; j < matriz->coluna; j++) {
            printf("%.2f ", matriz->vetor[i][j]);
        }
        printf("\n");
    }
}

float acessarElemento(Matriz *matriz, int i, int j) {
    if (i < 0 || i >= matriz->linha || j < 0 || j >= matriz->coluna) {
        printf("Acesso Invalido!\n");
        exit(1);
    }

    return matriz->vetor[i][j];
}

void liberarMatriz(Matriz *matriz) {
    for (int i = 0; i < matriz->linha; i++) {
        free(matriz->vetor[i]);
    }
    free(matriz->vetor);
    free(matriz);
}

int linhas(Matriz* matriz) {
    return matriz->linha;
}

int colunas(Matriz* matriz) {
    return matriz->coluna;
}
