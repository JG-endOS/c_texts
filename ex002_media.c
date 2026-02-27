#include <stdio.h>
#include <stdlib.h>

int main() {

    float x, y, z, media;

    printf("Digite um valor para x: ");
    scanf("%f", &x);

    printf("Digite um valor para y: ");
    scanf("%f", &y);

    printf("Digite um valor para z: ");
    scanf("%f", &z);

    media = (x + y + z) / 3;

    printf("M. A = %.2f", media);
    return 0;
}