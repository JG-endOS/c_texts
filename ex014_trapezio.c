#include <stdio.h>
#include <stdlib.h>

int main() {
    float b, B, h, r;

    printf("Diga o valor da base menor: ");
    scanf("%f", &b);

    printf("Diga o valor da base maior: ");
    scanf("%f", &B);

    printf("Diga o valor da altura: ");
    scanf("%f", &h);

    r = (B+b)*h;
    printf("A área do trapézio é: %.2f", r/2);

    return 0;
}