#include <stdio.h>

int main()
{
    int count;
    scanf("%d", &count);

    int vetor[count];
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < count; i++)
    {
        int isRepeat = 0;
        for (int j = 0; j < i; j++)
        {
            if (vetor[i] == vetor[j])
                isRepeat = 1;
        }

        if (!isRepeat)
        {
            printf("%d ", vetor[i]);
        }
    }

    return 0;
}