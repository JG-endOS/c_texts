#include <stdio.h>
#include <stdlib.h>

int main(){
    float raio;

    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    printf("A área do círculo é %.2f", raio*raio*3.14159);
    
    return 0;
}