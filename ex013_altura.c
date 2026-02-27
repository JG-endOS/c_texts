#include <stdio.h>
#include <stdlib.h>

int main() {
    float alt1, alt2, media;

    printf("Digite a altura da pessoa 1: ");
    scanf("%f", &alt1);

    printf("Digite a altura da pessoa 2: ");
    scanf("%f", &alt2);

    media = (alt1+alt2) / 2;

    printf("A media entre as duas alturas eh: %.2f\n", media);
    return 0;
}