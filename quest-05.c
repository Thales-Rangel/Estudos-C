#include <stdio.h>

int distancia(int carro1, int carro2)
{
    if (carro1 > carro2)
    {
        return carro1 - carro2;
    }
    else
    {
        return carro2 - carro1;
    }
}

int main()
{
    int c, c1, c2;
    char acao;

    scanf("%d %d %d", &c, &c1, &c2);

    if ((c1 > c && c2 > c) || (c1 < c && c2 < c) || (distancia(c, c1) == distancia(c, c2)))
    {
        acao = 'C';
    }
    else
    {
        if (distancia(c, c1) < distancia(c, c2))
        {
            acao = (c < c1) ? 'F' : 'A';
        }
        else
        {
            acao = (c < c2) ? 'F' : 'A';
        }
    }

    printf("%c", acao);

    return 0;
}