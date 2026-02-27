#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("Por ");

    printf("hoje ");

    printf("é ");

    printf("só!\n");

    return 0;
}