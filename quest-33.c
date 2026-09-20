#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int matriz[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                count = count + matriz[i][j];

            if (i + j == n - 1)
                count = count + matriz[i][j];
        }
    }

    printf("%d", count);

    return 0;
}