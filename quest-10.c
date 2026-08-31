#include <stdio.h>

int main()
{
    int cont = 0, series;
    double tempo, limite;

    scanf("%lf", &limite);
    do
    {
        scanf("%lf", &tempo);
        if (tempo <= limite && tempo > -1)
            cont++;
    } while (tempo > -1);

    series = (cont % 8 == 0) ? (cont / 8) : (cont / 8 + 1);
    printf("%d %d\n", cont, series);
    return 0;
}