#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define T 49
int main()
{
    char str[T];

    fgets(str, T, stdin);
    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ' ')
        {
            for (int j = i; j < strlen(str); j++)
            {
                str[j] = str[j + 1];
                i = 0;
            }
        }
    }

    int isEqual = 1;

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] != str[strlen(str) - 1 - i])
        {
            isEqual = 0;
            break;
        }
    }

    (isEqual) ? printf("É palíndromo\n") : printf("Não é palíndromo\n");

    return 0;
}