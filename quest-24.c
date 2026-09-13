#include <stdio.h>

int isGrowing(int vetor[], int tamanho)
{
    int isGrowing = 1;

    for (int i = 0; i < tamanho - 1; i++)
    {
        if (vetor[i] > vetor[i + 1])
        {
            isGrowing = 0;
        }
    }
    return isGrowing;
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

    (isGrowing(vetor, n)) ? printf("Vetor esta ordenado") : printf("Vetor nao esta ordenado");

    return 0;
}