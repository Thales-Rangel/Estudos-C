#include <stdio.h>

void printVetor(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        (i == tamanho - 1) ? printf("%d", vetor[i]) : printf("%d,", vetor[i]);
    }
    printf("\n");
}

int main()
{
    int vetor[20], pares[20], impares[20], countPares = 0, countImpares = 0;

    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0)
        {
            pares[countPares] = vetor[i];
            countPares++;
        }
        else
        {
            impares[countImpares] = vetor[i];
            countImpares++;
        }
    }

    printf("Pares: ");
    printVetor(pares, countPares);

    printf("Impares: ");
    printVetor(impares, countImpares);

    return 0;
}