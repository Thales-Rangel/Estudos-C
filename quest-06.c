#include <stdio.h>

int main()
{
    int trilha, saude;
    scanf("%d", &trilha);

    if (0 <= trilha && trilha < 5)
    {
        printf("Iniciante\n");
    }
    else
    {
        scanf("%d", &saude);

        switch (saude)
        {
        case 1:
            trilha < 20 ? printf("Intermediário") : printf("Avançado");
            break;
        case 0:
            trilha < 20 ? printf("Iniciante") : printf("Intermediário");
            break;
        default:
            printf("saúde inválida");
            break;
        }
    }

    return 0;
}