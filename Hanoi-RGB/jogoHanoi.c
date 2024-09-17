#include "hanoi.h"
#include <stdio.h>
#include <math.h>

int main() {
    initializeRandom(); 
    int quantMovimento = 0;
    int quantTorres = 3;
    int level;
    char to, from;

    Stack* torreR = newStack(10, 'R');
    Stack* torreG = newStack(10, 'G');
    Stack* torreB= newStack(10, 'B');
    printf("------------------ HANOI RGB -------------------\n");
    printf("Objetivo: organizar as torres\n");
    printf("Torre R: Somente 'R'\nTorre G: Somente 'G'\nTorre B: Somente 'B'\n");
    printf("Realize movimentos entre as torres digitando a operacao: (Ex: RG para mover de R para G).\n");
    printf("--------------------------------------------------\n");

    printf("# Escolha o Nivel\n 1 - Basico\n 2 - Intermediario\n 3 - Avancado\n > ");
    scanf("%d", &level);

    if(level == 1) {
        printf("\n### Nivel Basico ###\n");
        fillStackRandomly(torreR, torreR->maxSize);
        showTowers(torreR, torreG, torreB);
        printf(">>> Iniciar movimentacao...");
        
        while (!isGameComplete(torreR, torreG, torreB)) {
            printf("\nOperacao\n> De: ");
            scanf(" %c", &to);
            printf("> Para: ");
            scanf(" %c", &from);
            moveNodes(torreR, torreG, torreB, to, from);
            showTowers(torreR, torreG, torreB);
            printf(">>> Movimentacao realizada!\n");
            quantMovimento++;
        }

        printf("## Parabens! Jogo Completo!##\nQuant. Movimentacoes: %d\n", quantMovimento);
        printf("\n");

    } else if(level == 2) {
        printf("\n### Nivel Intermediario ###\n");
        int tamanhoFull = (torreR->maxSize) / quantTorres;
        fillStackRandomly(torreR, tamanhoFull);
        fillStackRandomly(torreG, tamanhoFull);
        fillStackRandomly(torreB, tamanhoFull);
        showTowers(torreR, torreG, torreB);
        printf(">>> Iniciar movimentacao...");
        
        while (!isGameComplete(torreR, torreG, torreB)) {
            printf("\nOperacao\n> De: ");
            scanf(" %c", &to);
            printf("> Para: ");
            scanf(" %c", &from);
            moveNodes(torreR, torreG, torreB, to, from);
            showTowers(torreR, torreG, torreB);
            printf(">>> Movimentacao realizada!\n");
            quantMovimento++;
        }
        printf("## Parabens! Jogo Completo!##\nQuant. Movimentacoes: %d\n", quantMovimento);
        printf("\n");

    } else if(level == 3) {
        printf("\n### Nivel Avançado ###\n");
        int tamanhoFull = floor(torreR->maxSize / 2 + 1);
        fillStackRandomly(torreR, tamanhoFull);
        fillStackRandomly(torreG, tamanhoFull);
        fillStackRandomly(torreB, tamanhoFull);
        showTowers(torreR, torreG, torreB);
        printf(">>> Iniciar movimentacao...");
        
        while (!isGameComplete(torreR, torreG, torreB)) {
            printf("\nOperacao\n> De: ");
            scanf(" %c", &to);
            printf("> Para: ");
            scanf(" %c", &from);
            moveNodes(torreR, torreG, torreB, to, from);
            showTowers(torreR, torreG, torreB);
            printf(">>> Movimentacao realizada!\n");
            quantMovimento++;
        }

        printf("## Parabens! Jogo Completo!##\nQuant. Movimentacoes: %d\n", quantMovimento);
        printf("\n");
        
    } else {
        printf("> Valor Inválido\n> Escolha 1, 2 ou 3\n");
    }

    if(isGameComplete(torreR, torreG, torreB)) {
        
    }
    
    freeStack(torreR);
    freeStack(torreG);
    freeStack(torreB);


    return 0;
}
