#include <stdio.h>

int main() {
    float metros;

    printf("Digite um número em metros: ");
    scanf("%f", &metros);

    printf("O número em centímetros é: %.2f\n", metros*100);
    return 0;
}