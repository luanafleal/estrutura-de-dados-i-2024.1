#include "pilhaEncadeada.h"
#include <stdlib.h>
#include <stdio.h>

Stack* newStack(int maxSize) {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->top = NULL;
    stack->actualSize = 0;
    stack->maxSize = maxSize;

    return stack;
}

void push(Stack* stack, float value) {
    if (isFull(stack)) {
        printf("Pilha Cheia!\n");
        return;
    }

    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->value = value;
    newNode->next = stack->top;
    stack->top = newNode;
    stack->actualSize++;
}

float pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Pilha vazia!\n");
        exit(1);
    }

    Node* temp;
    float value;

    temp = stack->top;
    value = temp->value;
    stack->top = temp->next;

    free(temp);
    stack->actualSize--;

    return value;
}

void showStack(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Pilha Vazia!\n");
        return;
    }

    Node* i;
    for (i = stack->top; i != NULL; i = i->next) {
        printf("%.2f\n", i->value);
    }
    printf("\n");
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