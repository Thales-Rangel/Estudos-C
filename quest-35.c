#include <stdio.h>

int isSimetrica(int matriz[10][10], int dimensao)
{
    int transposta[10][10];
    for (int i = 0; i < dimensao; i++)
    {
        for (int j = 0; j < dimensao; j++)
            transposta[j][i] = matriz[i][j];
    }

    int isSimetrica = 1;
    for (int i = 0; i < dimensao; i++)
    {
        for (int j = 0; j < dimensao; j++)
        {
            if (matriz[i][j] != transposta[i][j])
                isSimetrica = 0;
        }
    }

    return isSimetrica;
}

int main()
{

    int d;
    scanf("%d", &d);

    int matriz[10][10];
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < d; j++)
            scanf("%d", &matriz[i][j]);
    }

    (isSimetrica(matriz, d)) ? printf("A matriz e simetrica") : printf("A matriz nao e simetrica");

    return 0;
}