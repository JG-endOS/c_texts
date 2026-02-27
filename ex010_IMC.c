#include <stdio.h>
#include <stdlib.h>

int main() {
    float peso, altura;

    printf("Qual seu peso em Kg? ");
    scanf("%f", &peso);
    
    printf("Qual sua altura em metros? ");
    scanf("%f", &altura);

    printf("Seu IMC é %.2f\n", peso / (altura*altura));
    return 0;
}
