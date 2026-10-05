#include <stdio.h>

#include <string.h>
#include <ctype.h>

int main()
{
    char s1[49], s2[49];

    fgets(s1, 49, stdin);
    fgets(s2, 49, stdin);

    s1[strlen(s1) - 1] = s1[strlen(s1)];
    printf("%s%s\n", s1, s2);

    return 0;
}