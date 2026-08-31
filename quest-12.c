#include <stdio.h>

int main()
{
    int anos, anosValidos = 0;
    double media = 0.0;

    scanf("%d", &anos);
    for (int i = 0; i < anos; i++)
    {
        double distancia;
        scanf("%lf", &distancia);
        if (distancia > -1)
        {
            media = media + distancia;
            anosValidos++;
        }
    }
    media = media / anosValidos;

    (anosValidos == 0) ? printf("A competicao nao possui dados historicos!") : printf("%.2lf", media);

    return 0;
}