#include <stdio.h>

int criarVetor(int t1)
{
    scanf("%d", &t1);
    int vetor[t1];
    for (int i = 0; i < t1; i++)
    {
        scanf("%d", &vetor[i]);
    }

    return vetor;
}

int main()
{
    int t1, t2;

    scanf("%d", &t1);
    int vetor1[t1];
    for (int i = 0; i < t1; i++)
    {
        scanf("%d", &vetor1[i]);
    }

    scanf("%d", &t2);
    int vetor2[t2];
    for (int i = 0; i < t2; i++)
    {
        scanf("%d", &vetor2[i]);
    }

    int vetor[t1 + t2];
    for (int i = 0; i < t1; i++)
    {
        vetor[i] = vetor1[i];
    }
    for (int i = 0; i < t2; i++)
    {
        vetor[i + t1] = vetor2[i];
    }

    for (int i = 0; i < t1 + t2; i++)
    {
        printf("%d ", vetor[i]);
    }
    return 0;
}