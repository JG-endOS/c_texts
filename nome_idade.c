#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("Nome\tIdade\nJoão\t18\nGabriel\t20\n");

    return 0;
}