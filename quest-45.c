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

    for (int i = 0; i < quant; i++)
    {
        printf("O telefone de %s é %d\n", registro[i].nome, registro[i].numero);
    }

    return 0;
}