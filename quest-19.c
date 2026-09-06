#include <stdio.h>

int main()
{
    float n1, n2, n3, media;
    char tipo;

    scanf("%c %f %f %f", &tipo, &n1, &n2, &n3);
    switch (tipo)
    {
    case 'A':
        media = (n1 + n2 + n3) / 3;
        break;

    case 'P':
        media = (n1 * 4 + n2 * 5 + n3 * 6) / 15;
        break;
    default:
        printf("Escolha inválida");
        break;
    }

    printf("Média %.2f", media);
    return 0;
}