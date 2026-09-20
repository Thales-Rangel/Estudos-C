#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);

    int m1[m][n], m2[m][n];
    for (int i = 0; i < m * 2; i++)
    {
        if (i < m)
            for (int j = 0; j < n; j++)
                scanf("%d", &m1[i][j]);
        else
            for (int j = 0; j < n; j++)
                scanf("%d", &m2[i - m][j]);
    }

    int matrizResult[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrizResult[i][j] = m1[i][j] - m2[i][j];
        }
    }

    printf("Resultado: \n");
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrizResult[i][j]);

            if (i > j && matrizResult[i][j] != 0)
                count++;
        }
        printf("\n");
    }

    printf("Elementos não-nulos na região: %d\n", count);

    return 0;
}