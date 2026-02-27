#include <stdio.h>
#include <stdlib.h>

int main() {

    float x, y;
    
    printf("Digite um número flutuante: ");
    scanf("%f", &x);

    printf("Digite outro número flutuante: ");
    scanf("%f", &y);

    //int soma = x + y;
    printf("Soma = %.2f\n", x + y);

    // int sub = x - y;
    printf("Subtração = %.2f\n", x - y);

    // int mult = x * y;
    printf("Multiplicação = %.2f\n", x * y);
 
    // int divi = x / y;
    printf("Divisão = %.2f\n", x / y);
    return 0;
}