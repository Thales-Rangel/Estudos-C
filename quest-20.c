#include <stdio.h>

int isPrimo(int numero)
{
    int cont = 0;
    for (int i = 1; i <= numero; i++)
    {
        if (numero % i == 0)
        {
            cont++;
        }
    }

    return (cont == 2) ? 1 : 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    (isPrimo(n) && isPrimo(n + 2)) ? printf("Numero forma par de gemeos") : printf("Numero nao forma par de gemeos");
    return 0;
}