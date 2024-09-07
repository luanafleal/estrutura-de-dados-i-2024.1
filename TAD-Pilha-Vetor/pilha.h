#define SIZE 6

typedef struct {
    int topo;
    float vetor[SIZE];
} Pilha;

Pilha* criarPilha();
void pilhaPush(Pilha* pilha, float valor);
float pilhaPop(Pilha* pilha);
int buscarValor(Pilha* pillha, float valor);
void mostrarPilha(Pilha* pilha);
void mostrarTamanho(Pilha* pilha);
void liberarPilha(Pilha* pilha);
int estaVazia(Pilha* pilha);
int estaCheia(Pilha* pilha);
int canPop(Pilha* pilha);
int canPush(Pilha* pilha);