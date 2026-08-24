#include <stdio.h>

int main()
{

    float altura_pes, altura_metros;
    float peso_libras, peso_kilogramas;

    printf("Digite a altura em pés: ");
    scanf("%f", &altura_pes);

    altura_metros = altura_pes * 0.3048;

    printf("Digite o peso em libras: ");
    scanf("%f", &peso_libras);

    peso_kilogramas = peso_libras * 0.453592;

    printf("Altura em metros: %.2f\n", altura_metros);
    printf("Peso em quilos: %.2f\n", peso_kilogramas);

    return 0;
}