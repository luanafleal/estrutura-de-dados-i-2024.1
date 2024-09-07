typedef struct Node {
    float value;
    struct Node* next;
} Node;

typedef struct Stack {
    Node* top;
    int actualSize;
    int maxSize;
} Stack;

Stack* newStack(int maxSize);
void push(Stack* stack, float value);
float pop(Stack* stack);
void showStack(Stack* stack);
void freeStack(Stack* stack);
int isFull(Stack* stack);
int isEmpty(Stack* stack);
int canPop(Stack* stack);
int canPush(Stack* stack);