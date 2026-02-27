#include <stdio.h>
#include <stdlib.h>

int main() {
    float km, l;

    printf("Digite a distância percorrida em Km: ");
    scanf("%f", &km);

    printf("Digite o gasto em gasol em L: ");
    scanf("%f", &l);
    
    printf("O gasto médio é de %.2f Km/L", km/l);

    return 0;
}