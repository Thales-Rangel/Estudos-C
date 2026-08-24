#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, maior;

    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    maior = n1;

    if (maior < n2)
    {
        maior = n2;
    }
    if (maior < n3)
    {
        maior = n3;
    }
    if (maior < n4)
    {
        maior = n4;
    }

    printf("Maior: %d\n", maior);

    return 0;
}