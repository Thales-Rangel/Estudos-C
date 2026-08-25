#include <stdio.h>

int main()
{
    int n, maior = 0;
    do
    {
        scanf("%d", &n);
        if (n > maior)
            maior = n;
    } while (n > 0);

    printf("Maior número digitado: %d\n", maior);

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", i);
    }

    /* while (1) loop infinito (1 = verdadeiro em C)
    {
        printf("Loop infinito!!!");
    } */

    return 0;
}