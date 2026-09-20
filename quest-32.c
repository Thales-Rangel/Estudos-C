#include <stdio.h>

int main()
{
    int l, c;
    scanf("%d %d", &l, &c);

    int mA[l][c];
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &mA[i][j]);
        }
    }

    int mB[c][l];
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < l; j++)
        {
            mB[i][j] = mA[j][i];
        }
    }

    printf("Transposta\n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < l; j++)
        {
            printf("%d ", mB[i][j]);
        }
        printf("\n");
    }

    return 0;
}