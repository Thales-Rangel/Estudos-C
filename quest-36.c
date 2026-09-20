#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int matrizA[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &matrizA[i][j]);

    int x, isInMatriz = 0;
    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrizA[i][j] == x)
            {
                isInMatriz = 1;
                break;
            }
        }
    }

    (isInMatriz) ? printf("Matriz tem elemento %d\n", x) : printf("Matriz não tem elemento %d\n", x);

    return 0;
}