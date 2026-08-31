#include <stdio.h>

int main()
{
    int num, aux, reverso = 0;

    scanf("%d", &num);

    aux = num;

    while (aux > 0)
    {
        reverso = reverso * 10 + (aux % 10);
        aux = aux / 10;
    }

    (reverso == num) ? printf("%d é Palíndromo e ", num) : printf("%d não é Palíndromo e ", num);

    (num % 2 == 0) ? printf("par.\n") : printf("impar.\n");

    return 0;
}