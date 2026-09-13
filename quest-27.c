#include <stdio.h>
#include <string.h>

int main()
{
    char frutas[8][30];
    char pesquisa[30];
    for (int i = 0; i < 8; i++)
    {
        fgets(frutas[i], 30, stdin);
    }

    fgets(pesquisa, 30, stdin);

    for (int i = 0; i < 8; i++)
    {
        (strcmp(frutas[i], pesquisa) == 0) ? printf("encontrei\n") : printf("não\n");
    }

    return 0;
}