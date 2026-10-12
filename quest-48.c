#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define T 52

typedef enum
{
    BRANCO,
    AMARGO,
    AO_LEITE,
    COM_CASTANHAS
} TipoChocolates;

typedef struct
{
    char nome[T];
    float peso;
    float preco;
    TipoChocolates tipo;
} Chocolate;

TipoChocolates conversaoTipoChocolate(char tipo[])
{
    if (!strcmp(tipo, "BRANCO"))
        return BRANCO;
    else if (!strcmp(tipo, "AMARGO"))
        return AMARGO;
    else if (!strcmp(tipo, "AO_LEITE"))
        return AO_LEITE;
    else if (!strcmp(tipo, "COM_CASTANHAS"))
        return COM_CASTANHAS;
}

Chocolate maiorPreco(Chocolate chocolates[], int count)
{
    Chocolate maisCaro = chocolates[0];
    for (int i = 0; i < count; i++)
    {
        if (chocolates[i].preco > maisCaro.preco)
            maisCaro = chocolates[i];
    }
    return maisCaro;
}

Chocolate menorPreco(Chocolate chocolates[], int count)
{
    Chocolate maisBarato = chocolates[0];
    for (int i = 0; i < count; i++)
    {
        if (chocolates[i].preco < maisBarato.preco)
            maisBarato = chocolates[i];
    }
    return maisBarato;
}

int main()
{
    int quant, chB = 0, chA = 0, chL = 0, chC = 0;

    char nomeMaiorPreco[T], nomeMenorPreco[T];

    scanf("%d%*c", &quant);
    Chocolate chocolates[quant];

    for (int i = 0; i < quant; i++)
    {
        char tipo[T];
        fgets(chocolates[i].nome, T, stdin);
        chocolates[i].nome[strcspn(chocolates[i].nome, "\n")] = '\0';

        scanf("%f%*c", &chocolates[i].peso);
        scanf("%f%*c", &chocolates[i].preco);

        fgets(tipo, T, stdin);
        tipo[strcspn(tipo, "\n")] = '\0';

        chocolates[i].tipo = conversaoTipoChocolate(tipo);

        switch (chocolates[i].tipo)
        {
        case BRANCO:
            chB++;
            break;
        case AMARGO:
            chA++;
            break;
        case AO_LEITE:
            chL++;
            break;
        case COM_CASTANHAS:
            chC++;
            break;
        }
    }

    Chocolate maisCaro = maiorPreco(chocolates, quant);
    Chocolate maisBarato = menorPreco(chocolates, quant);

    printf("Total de chocolates BRANCO: %d\n", chB);
    printf("Total de chocolates AMARGO: %d\n", chA);
    printf("Total de chocolates AO_LEITE: %d\n", chL);
    printf("Total de chocolates COM_CASTANHAS: %d\n", chC);
    printf("Chocolate mais caro: %s - R$%.2f\n", maisCaro.nome, maisCaro.preco);
    printf("Chocolate mais barato: %s - R$%.2f\n", maisBarato.nome, maisBarato.preco);

    return 0;
}
