#include <stdio.h>

int tempo(int x, int v1, int v2)
{
    int t = 0;
    while (x != 0)
    {
        x = x + v2 - v1;
        t++;
    }

    return t;
}

int main()
{
    int x, v1, v2;

    scanf("%d %d %d", &x, &v1, &v2);

    (v2 >= v1) ? printf("impossivel") : printf("%ds", tempo(x, v1, v2));

    return 0;
}