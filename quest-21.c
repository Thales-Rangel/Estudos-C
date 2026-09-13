#include <stdio.h>

int main()
{
    int vetor1[5], vetor2[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &vetor1[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &vetor2[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", vetor1[i] + vetor2[i]);
    }
    printf("\n");
    return 0;
}