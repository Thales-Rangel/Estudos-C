#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define T 40

typedef struct
{
    char nome[T];
    int quant;
    double preco;
} Item;

int main()
{
    double valor = 0;
    int funcao = 1, pessoas;

    while (funcao == 1)
    {
        Item item;

        fgets(item.nome, T, stdin);
        item.nome[strcspn(item.nome, "\n")] = '\0';

        scanf("%lf", &item.preco);
        scanf("%d", &item.quant);

        valor = valor + item.preco * item.quant;

        scanf("%d%*c", &funcao);
    }

    scanf("%d", &pessoas);

    printf("Valor: R$ %.2lf\n", valor);
    printf("Divisão R$ %.2lf para cada participante.\n", valor / pessoas);

    return 0;
}