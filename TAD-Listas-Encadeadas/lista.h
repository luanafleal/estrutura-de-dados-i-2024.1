struct lista {
    int valor;
    struct lista* proximo;
};

typedef struct lista Lista;

Lista* novaLista();
Lista* inserirInicio(Lista* lista, int valor);
Lista* inserirFinal(Lista* lista, int valor);
Lista* buscarValor(Lista* lista);
void mostrarLista(Lista* lista);
int estaVazia(Lista *lista);


