#include <stdio.h>
#include <stdlib.h>

int main() {
    int dias;

    printf("Digite um número de dias: ");
    scanf("%d", &dias);

    printf("O número de horas total é %d", dias*24);

    return 0;
}