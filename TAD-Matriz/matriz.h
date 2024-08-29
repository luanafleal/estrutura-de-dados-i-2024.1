struct matriz {
    int linha;
    int coluna;
    float ** vetor;
};

typedef struct matriz Matriz;

Matriz* criarMatriz(int m, int n);
void preencherMatriz(Matriz *matriz);
void exibirMatriz(Matriz* matriz);
float acessarElemento(Matriz *matriz, int i, int j);
void liberarMatriz(Matriz *matriz);
int linhas(Matriz* matriz);
int colunas(Matriz* matriz);