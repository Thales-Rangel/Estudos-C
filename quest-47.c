#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define T 52

typedef struct
{
    char nome[T];
    int idade;
    char sexo;
} Pessoa;

Pessoa criar()
{
    Pessoa novo;

    fgets(novo.nome, T, stdin);
    novo.nome[strcspn(novo.nome, "\n")] = '\0';

    scanf("%d%*c", &novo.idade);
    scanf("%c%*c", &novo.sexo);

    return novo;
}

void inserir(Pessoa registros[], Pessoa novoRegistro, int count)
{
    registros[count] = novoRegistro;
}

int deletar(Pessoa pessoa, Pessoa registros[], int count)
{
    int deletou = 0;
    for (int i = 0; i < count; i++)
    {
        if (strcmp(registros[i].nome, pessoa.nome) == 0 &&
            registros[i].idade == pessoa.idade &&
            registros[i].sexo == pessoa.sexo)
        {
            for (int j = i; j < count - 1; j++)
            {
                registros[j] = registros[j + 1];
            }
            deletou = 1;
            break;
        }
    }

    return deletou;
}

void imprimir(Pessoa registros[], int count)
{
    for (int i = 0; i < count; i++)
        printf("%s,%d,%c\n",
               registros[i].nome,
               registros[i].idade,
               registros[i].sexo);
}

int main()
{
    Pessoa registro[100];
    int count = 0;

    char opcao = ' ';
    while (opcao != 'p')
    {
        scanf("%c%*c", &opcao);

        switch (opcao)
        {
        case 'i':
            inserir(registro, criar(), count);
            count++;
            break;
        case 'd':
            if (deletar(criar(), registro, count))
                count--;
            break;
        case 'p':
            imprimir(registro, count);
            break;
        }
    }

    return 0;
}