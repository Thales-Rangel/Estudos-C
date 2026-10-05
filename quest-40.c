#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define T 49

int main()
{
    int comand;
    char string[T];

    scanf("%d%*c", &comand);

    while (comand != -1)
    {
        char nwStr[T];
        if (fgets(nwStr, sizeof(nwStr), stdin) != NULL)
            nwStr[strcspn(nwStr, "\n")] = '\0';

        if (comand == 0)
        {
            strcat(nwStr, string);
            strcpy(string, nwStr);
        }
        else if (comand == 1)
        {
            strcat(string, nwStr);
        }

        scanf("%d%*c", &comand);
    }

    printf("%s\n", string);

    return 0;
}