#include <stdio.h>

int classe(int velocidade)
{
    if (velocidade < 10)
    {
        return 1;
    }
    else if (velocidade < 20)
    {
        return 2;
    }
    else
    {
        return 3;
    }
}

int main()
{
    int n, maiorLevel = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int velocidade;
        scanf("%d", &velocidade);

        if (classe(velocidade) > maiorLevel)
            maiorLevel = classe(velocidade);
    }

    printf("Level %d", maiorLevel);
    return 0;
}