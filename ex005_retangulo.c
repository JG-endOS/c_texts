#include <stdio.h>

int main() {

    float largura, altura;

    printf("Digite a largura do retângulo: ");
    scanf("%f", &largura);

    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);

    printf("A área do retângulo é %.2f", altura * largura);
    return 0;
}