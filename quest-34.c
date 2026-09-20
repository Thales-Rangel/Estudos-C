#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int mA[m][n], mB[m][n];

    for (int i = 0; i < m * 2; i++)
    {
        if (i < m)
            for (int j = 0; j < n; j++)
                scanf("%d", &mA[i][j]);
        else
            for (int j = 0; j < n; j++)
                scanf("%d", &mB[i - m][j]);
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", mA[i][j] + mB[i][j]);

        printf("\n");
    }

    return 0;
}