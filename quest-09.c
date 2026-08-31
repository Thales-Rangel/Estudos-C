#include <stdio.h>
#include <math.h>

void print_espaco(int limite)
{
    for (int i = 0; i < limite; i++)
    {
        printf(" ");
    }
}

int main()
{
    int n;
    char c;

    scanf("%d %c", &n, &c);

    for (int i = 0; i < n - 1; i++)
    {
        if (i < (n - 1) / 2)
        {
            print_espaco(i);
            printf("%c", c);
            print_espaco(n - 3 - 2 * i);
            printf("%c\n", c);
        }
        else if (i == (n - 1) / 2 && (n - 1) % 2 != 0)
        {
            print_espaco(i);
            printf("%c\n", c);
        }
        else
        {
            print_espaco(n - i - 2);
            printf("%c", c);
            print_espaco(2 * i - n + 1);
            printf("%c\n", c);
        }
    }

    return 0;
}