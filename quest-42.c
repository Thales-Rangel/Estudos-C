#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define T 23

void inserir_string(char s1[], char s2[], char s3[], int p)
{
    int i = 0, j = 0, k = 0;

    for (i; i < p && s1[i] != '\0'; i++, j++)
        s3[j] = s1[i];

    for (k; s2[k] != '\0'; k++, j++)
        s3[j] = s2[k];

    for (i; s1[i] != '\0'; i++, j++)
        s3[j] = s1[i];

    s3[j] = '\0';
}

int main()
{
    char s1[T], s2[T], s3[T * 2];
    int p;

    fgets(s1, T, stdin);
    fgets(s2, T, stdin);
    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    scanf("%d", &p);

    inserir_string(s1, s2, s3, p);

    printf("%s\n", s3);

    return 0;
}