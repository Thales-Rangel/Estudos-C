#include <stdio.h>

int main()
{
    int quant, classe, ameaca;

    scanf("%d %d %d", &quant, &classe, &ameaca);

    if (quant == 0)
    {
        printf("Melhor chamar Saitama!");
        return 0;
    }
    if (classe == 5)
    {
        printf("Heróis vencerão!");
        return 0;
    }

    if (ameaca == classe)
    {
        (quant >= 3) ? printf("Heróis vencerão!") : printf("Melhor chamar Saitama!");
    }
    else if (ameaca > classe)
    {
        printf("Melhor chamar Saitama!");
    }
    else
    {
        printf("Heróis vencerão!");
    }

    return 0;
}