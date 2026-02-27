#include <stdio.h>
#include <stdlib.h>

int main() {
    float c;
    
    printf("Digite uma temperatura em Celsius: ");
    scanf("%f", &c);

    printf("O valor em Fahrenheit é %.2f", (c*9/5) + 32);
    
    return 0;
}