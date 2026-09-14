#include <stdio.h>

#define N 8
int main()
{
    int n[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &n[i]);
    }

    for (int i = N - 1; i >= 0; i--)
    {
        (i != 0) ? printf("%d,", n[i]) : printf("%d\n", n[i]);
    }

    return 0;
}