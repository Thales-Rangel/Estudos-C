#include <stdio.h>

void calculadora(int valor_cobrado, int valor_pago)
{
    if (valor_pago > valor_cobrado)
    {
        printf("Troco = %d reais\n", valor_pago - valor_cobrado);
    }
    else if (valor_pago < valor_cobrado)
    {
        printf("Saldo insuficiente! Falta %d reais\n", valor_cobrado - valor_pago);
    }
    else
    {
        printf("Deu certim!\n");
    }
}

int main()
{
    int codigo, valor;

    scanf("%d %d", &codigo, &valor);

    switch (codigo)
    {
    case 1:
        calculadora(12, valor);
        break;

    case 2:
        calculadora(23, valor);
        break;

    case 3:
        calculadora(31, valor);
        break;

    case 4:
        calculadora(28, valor);
        break;

    case 5:
        calculadora(15, valor);
        break;

    default:
        printf("Código não encontrado!\n");
        break;
    }

    return 0;
}