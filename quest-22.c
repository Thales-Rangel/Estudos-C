#include <stdio.h>

int maior(int vetor[], int tamanho)
{
    int maior = vetor[0];
    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] > maior)
            maior = vetor[i];
    }
    return maior;
}

int main()
{
    int n;
    scanf("%d", &n);
    int vetor[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }

    printf("O maior é: %d\n", maior(vetor, n));
    return 0;
}