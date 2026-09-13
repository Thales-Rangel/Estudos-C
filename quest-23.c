#include <stdio.h>

void printVetor(int vetor[], int tamanho, char nome)
{
    printf("%c = [", nome);
    for (int i = 0; i < tamanho; i++)
    {
        (i != tamanho - 1) ? printf("%d, ", vetor[i]) : printf("%d]\n", vetor[i]);
    }
}

int main()
{
    int A[15], B[15], C[15], D[15], countB = 0, countC = 0, countD = 0;

    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ",
          &A[0], &A[1], &A[2], &A[3], &A[4], &A[5], &A[6], &A[7], &A[8], &A[9], &A[10], &A[11], &A[12], &A[13], &A[14]);

    for (int i = 0; i < 15; i++)
    {
        if (A[i] % 2 == 0)
        {
            B[countB] = A[i];
            countB++;
        }
        if (A[i] % 3 == 0)
        {
            C[countC] = A[i];
            countC++;
        }
        if (A[i] % 2 != 0 && A[i] % 3 != 0)
        {
            D[countD] = A[i];
            countD++;
        }
    }

    printVetor(B, countB, 'B');
    printVetor(C, countC, 'C');
    printVetor(D, countD, 'D');

    return 0;
}