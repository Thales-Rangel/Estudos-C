#include <stdio.h>

int main()
{
    int linhas, count = 1;
    scanf("%d", &linhas);

    if (linhas <= 0)
    {
        printf("Você entrou com %d, tente de novo na próxima\n", linhas);
        return 0;
    }

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            (count >= 10) ? printf("%d ", count) : printf(" %d ", count);
            count++;
        }
        printf("\n");
    }

    return 0;
}