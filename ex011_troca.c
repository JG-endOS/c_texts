#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;

    printf("Digite um valor para A: ");
    scanf("%d", &a);

    printf("Digite um valor para B: ");
    scanf("%d", &b);

     printf("\nValores originais: A = %d, B = %d\n", a, b);
    
    c = a; 
    a = b;        
    b = c; 
    
    printf("Valores trocados: A = %d, B = %d\n", a, b);

    return 0;
}