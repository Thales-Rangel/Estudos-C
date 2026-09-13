#include <stdio.h>

int main()
{
    int n[8];
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &n[i]);
    }

    for (int i = 7; i >= 0; i--)
    {
        (i != 0) ? printf("%d,", n[i]) : printf("%d\n", n[i]);
    }

    return 0;
}