#include "hanoi.h"
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include<time.h>

Stack* newStack(int maxSize, char name) {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->top = NULL;
    stack->actualSize = 0;
    stack->maxSize = maxSize;
    stack->name - name;

    return stack;
}

void push(Stack* stack, char value) {
    if (isFull(stack)) {
        printf("Erro: Pilha %c cheia. NAO e possivel adicionar mais elementos.\n", stack->name);
        return;
    }

    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->value = value;
    newNode->next = stack->top;
    stack->top = newNode;
    stack->actualSize++;
}

char pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Erro: Pilha %c vazia. Não é possível remover nós.\n", stack->name);
        return '\0';
    }

    Node* temp;
    char value;

    temp = stack->top;
    value = temp->value;
    stack->top = temp->next;

    free(temp);
    stack->actualSize--;

    return value;
}

void fillStackRandomly(Stack* stack) {
    if (isFull(stack)) {
        printf("Pilha já está cheia!\n");
        return;
    }

    srand(time(NULL));

    char letters[] = {'R', 'G', 'B'};
    int numLetters = sizeof(letters) / sizeof(letters[0]);

    while (!isFull(stack)) {
        char randomLetter = letters[rand() % numLetters];
        push(stack, randomLetter);
    }


}

void moveNodes(Stack* stack1, Stack* stack2, Stack* stack3, char origin, char destination) {
    char valueNode;
    if (origin == 'R' && destination == 'G') {
        valueNode = pop(stack1);
        push(stack2, valueNode);
    } else if (origin == 'R' && destination == 'B') {
        valueNode = pop(stack1);
        push(stack3, valueNode);
    } else if (origin == 'G' && destination == 'R') {
        valueNode = pop(stack2);
        push(stack1, valueNode);
    } else if (origin == 'G' && destination == 'B') {
        valueNode = pop(stack2);
        push(stack3, valueNode);
    } else if (origin == 'B' && destination == 'R') {
        valueNode = pop(stack3);
        push(stack1, valueNode);
    } else if (origin == 'B' && destination == 'G') {
        valueNode = pop(stack3);
        push(stack2, valueNode);
    } else {
        printf("!!! Destino invalido !!!\n");
    }
}

int isGameComplete(Stack* stack1, Stack* stack2, Stack* stack3) {
    return containsOnlyValue(stack1, 'R') && containsOnlyValue(stack2, 'G') && containsOnlyValue(stack3, 'B');
}

bool containsOnlyValue(Stack* stack, char value) {
    if (isEmpty(stack)) {
        return true;
    }

    Node* actual = stack->top;

    while (actual != NULL) {
        if (actual->value != value) {
            return false;
        }
        actual = actual->next;
    }
    
    return true; 
}

void showTowers(Stack* stack1, Stack* stack2, Stack* stack3) {
    Node* actual1 = stack1->top;
    Node* actual2 = stack2->top;
    Node* actual3 = stack3->top;
    printf("-----------\n|R - G - B|\n-----------\n");
    for (int i = stack1->maxSize - 1; i >= 0; i--) {
            if (i < stack1->actualSize) {
            printf("[%c] ", actual1->value);
            actual1 = actual1->next;
        } else {
            printf("[ ] ");
        }

        if (i < stack2->actualSize) {
            printf("[%c] ", actual2->value);
            actual2 = actual2->next;
        } else {
            printf("[ ] ");
        }

        if (i < stack3->actualSize) {
            printf("[%c] ", actual3->value);
            actual3 = actual3->next;
        } else {
            printf("[ ] ");
        }

        printf("\n");
    }
}

void freeStack(Stack* stack) {
    Node* i = stack->top;
    while (i != NULL) {
        Node* temp = i->next;
        free(i);
        i = temp;
    }

    free(stack);
}

int isFull(Stack* stack) {
    return stack->actualSize >= stack->maxSize;
}

int isEmpty(Stack* stack) {
    return stack->actualSize == 0;
}

int canPop(Stack* stack) {
    return !isEmpty(stack);
}

int canPush(Stack* stack) {
    return !isFull(stack);
}