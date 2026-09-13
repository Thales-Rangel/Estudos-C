#include <stdio.h>

void printMedias(float medias[], float todos[], int count, int countT)
{
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < countT; j++)
        {
            if (todos[j] == medias[i])
            {
                (i != count - 1) ? printf("%d (%.1f), ", j + 1, medias[i]) : printf("%d (%.1f)\n", j + 1, medias[i]);
                todos[j] = -1.0;
                break;
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    float medias[n];

    for (int i = 0; i < n; i++)
    {
        int posicao;
        scanf("%d - ", &posicao);
        scanf("%f", &medias[posicao - 1]);
    }

    float aprovados[n], recuperacao[n], reprovados[n];
    int countAprov = 0, countRecu = 0, countRepro = 0;

    for (int i = 0; i < n; i++)
    {
        if (medias[i] >= 7.0)
        {
            aprovados[countAprov] = medias[i];
            countAprov++;
        }
        else if (medias[i] < 5.0)
        {
            reprovados[countRepro] = medias[i];
            countRepro++;
        }
        else
        {
            recuperacao[countRecu] = medias[i];
            countRecu++;
        }
    }

    printf("Aprovados: ");
    printMedias(aprovados, medias, countAprov, n);

    printf("Recuperação: ");
    printMedias(recuperacao, medias, countRecu, n);

    printf("Reprovados: ");
    printMedias(reprovados, medias, countRepro, n);

    return 0;
}