#include <stdio.h>

int main()
{
    int numero = 5;

    printf("%d\n", numero++); // Primeiro retorna o valor e depois incrementa
    printf("%d\n", numero);

    printf("%d\n", ++numero); // Primeiro incrementa e depois retorna o valor
    printf("%d\n", numero);

    return 0;
}