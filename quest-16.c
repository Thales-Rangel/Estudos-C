#include <stdio.h>

int MDC(int x, int y)
{
    int aux;
    while (y != 0)
    {
        aux = x;
        x = y;
        y = aux % y;
    }
    return x;
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("MDC(%d , %d) = %d", x, y, MDC(x, y));
    return 0;
}