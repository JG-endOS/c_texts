#include <stdio.h>
#include <stdlib.h>

int main() {
    float x, y, r;

    printf("Digite um número para ser calculado a porcentagem: ");
    scanf("%f", &y);

    printf("Digite uma porcentagem para ser calculada: ");
    scanf("%f", &x);

    r=(y/100)*x;

    printf("O resultado é %.2f", r);

    return 0;
}