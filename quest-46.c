#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define T 60

typedef struct
{
    char nome[T];
    int numero;
} tPessoa;

int main()
{
    int quant;
    scanf("%d%*c", &quant);

    tPessoa registro[quant];
    for (int i = 0; i < quant; i++)
    {
        fgets(registro[i].nome, T, stdin);
        registro[i].nome[strcspn(registro[i].nome, "\n")] = '\0';
        scanf("%d%*c", &registro[i].numero);
    }

    char busca[T];
    fgets(busca, T, stdin);
    busca[strcspn(busca, "\n")] = '\0';

    int encontrado = 0;

    for (int i = 0; i < quant; i++)
    {
        if (strcmp(registro[i].nome, busca) == 0)
        {
            printf("O telefone de %s é %d\n", registro[i].nome, registro[i].numero);
            encontrado = 1;
        }
    }
    if (!encontrado)
        printf("Nome %s não encontrado.\n", busca);

    return 0;
}