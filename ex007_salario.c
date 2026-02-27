#include <stdio.h>

int main() {
    
    float horas, valor;

    printf("Quantas horas foram trabalhadas? ");
    scanf("%f", &horas);

    printf("Qual o valor da hora? ");
    scanf("%f", &valor);

    printf("O salário é %.2fR$\n", horas*valor);
    return 0;
}