#include <stdio.h>
#include <stdlib.h>

int D(int num)
{
    int sum = 0;
    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }

    return sum;
}

char colegas(int a, int b)
{
    return (abs(D(a) - b) <= 2 && abs(D(b) - a) <= 2) ? 'S' : 'N';
}

int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    printf("%c", colegas(n1, n2));
    return 0;
}