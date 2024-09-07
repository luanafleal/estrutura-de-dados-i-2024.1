#include "pilhaEncadeada.h"
#include <stdio.h>

int main (){
    Stack* myStack = newStack(5);

    if (canPush(myStack)) push(myStack, 10);
    if (canPush(myStack)) push(myStack, 20);
    if (canPush(myStack)) push(myStack, 30);
    showStack(myStack);

    if (canPop(myStack)) pop(myStack);
    showStack(myStack);

    if (canPush(myStack)) push(myStack, 40);
    if (canPush(myStack)) push(myStack, 50);
    if (canPush(myStack)) push(myStack, 60);
    showStack(myStack);

    if (canPush(myStack)) {
        push(myStack, 70);
    } else {
        printf("Pilha Cheia\n\n");
    }

    if (canPop(myStack)) pop(myStack);
    if (canPop(myStack)) pop(myStack);
    showStack(myStack);

    freeStack(myStack);

    return 0;
}