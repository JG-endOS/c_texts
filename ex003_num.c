#include <stdio.h>

int main() {
    float x;

    printf("Digite um número qualquer: ");
    scanf("%f", &x);

    printf("Antecessor: %.2f\n", x-1);

    printf("Sucessor: %.2f\n", x+1);

    printf("Dobro: %.2f\n", x*2);

    printf("Triplo: %.2f\n", x*3);

    printf("Metade: %.2f\n", x/2);
    return 0;
}