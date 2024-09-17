#include <stdbool.h>

typedef struct Node {
    char value; // r, g, b
    struct Node* next;
} Node;

typedef struct Stack {
    Node* top;
    int actualSize;
    int maxSize;
    char name; //Nome da Torre
} Stack;

Stack* newStack(int maxSize, char name);
void push(Stack* stack, char value);
char pop(Stack* stack);
void initializeRandom(); 
void fillStackRandomly(Stack* stack, int tamanhoFull);
void moveNodes(Stack* stack1, Stack* stack2, Stack* stack3, char origin, char destination);
int isGameComplete(Stack* stack1, Stack* stack2, Stack* stack3);
bool containsOnlyValue(Stack* stack, char value);
void showTowers(Stack* stack1, Stack* stack2, Stack* stack3);
void freeStack(Stack* stack);
int isFull(Stack* stack);
int isEmpty(Stack* stack);
int canPop(Stack* stack);
int canPush(Stack* stack);
int isFullDiferente(Stack* stack, int tamanhoFull);