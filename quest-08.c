#include <stdio.h>

int main()
{
    int quant = 0, quantTotal = 0;
    double valor = 0, valorTotal = 0;

    do
    {
        quantTotal = quantTotal + quant;
        valorTotal = valorTotal + valor * quant;

        scanf("%d %lf", &quant, &valor);
    } while (quant > -1);

    printf("%d %.2lf", quantTotal, valorTotal);

    return 0;
}