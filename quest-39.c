#include <stdio.h>

#include <string.h>
#include <ctype.h>

#define T 49

int main()
{
    char s1[T], s2[T];

    fgets(s1, T, stdin);
    fgets(s2, T, stdin);

    s2[strlen(s2) - 1] = s2[strlen(s2)];

    char *resultado = strstr(s1, s2);

    (resultado != NULL) ? printf("É substring\n") : printf("Não é substring\n");

    return 0;
}