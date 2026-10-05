#include <stdio.h>

#include <string.h>
#include <ctype.h>

#define TAMANHO 40

void toLowerString(char string[])
{
    for (int i = 0; string[i] != '\0'; i++)
    {
        string[i] = tolower(string[i]);
    }
}

void printVetor(int vetor[], int elementos)
{
    for (int i = 0; i < elementos; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main()
{
    char sA[TAMANHO], sB[TAMANHO];

    fgets(sA, TAMANHO, stdin);
    fgets(sB, TAMANHO, stdin);

    toLowerString(sA);
    toLowerString(sB);

    sA[strlen(sA) - 1] = sA[strlen(sA)];

    int count = 0, posicoes[TAMANHO];

    for (int i = 0; i <= strlen(sB) - strlen(sA); i++)
    {
        int encontrou = 1;

        for (int j = 0; j < strlen(sA); j++)
        {
            if (sA[j] != sB[i + j])
            {
                encontrou = 0;
                break;
            }
        }

        if (encontrou)
        {
            posicoes[count] = i;
            count++;
        }
    }

    printf("Repetições: %d\n", count);
    if (count > 0)
    {
        printf("Posições: ");
        printVetor(posicoes, count);
    }

    return 0;
}