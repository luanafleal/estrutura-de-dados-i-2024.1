typedef struct {
    float x;
    float y;
} Ponto;

Ponto* criarPonto(float x, float y);
void liberarPonto (Ponto* ponto);
void mostrarPontos(Ponto* p1, Ponto* p2);
float calcularDistancia(Ponto* p1, Ponto* p2);