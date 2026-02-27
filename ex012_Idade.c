#include <stdio.h>
#include <stdlib.h>

int main() {
    int ano;

    printf("Qual o seu ano de nascimento? " );
    scanf("%d", &ano);

    printf("Sua idade é: %d \n", 2026 - ano);

    return 0;
}