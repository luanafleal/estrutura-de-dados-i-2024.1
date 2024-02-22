// A - Q23: Leia um valor em kg (quilograma), calcule e escreva o equivalente em g (grama).

#include<stdio.h>

int main() {
    float quilograma;

    printf("### Kg para g ###\n");
    printf("> Peso(Kg): ");
    scanf("%f", &quilograma);

    float gramas = quilograma * 1000;

    printf("> %.2f kg equivalem a %.2f g", quilograma, gramas);
}
