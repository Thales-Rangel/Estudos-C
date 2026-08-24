#include <stdio.h>

int main()
{

    float valor, celsios, kelvin, farenheit;
    char medida;

    scanf("%f %c", &valor, &medida);

    switch (medida)
    {
    case 'C':
        celsios = valor;
        farenheit = celsios * 1.8 + 32;
        kelvin = celsios + 273.15;
        break;

    case 'F':
        celsios = (valor - 32) / 1.8;
        farenheit = valor;
        kelvin = celsios + 273.15;
        break;

    case 'K':
        celsios = valor - 273.15;
        farenheit = celsios * 1.8 + 32;
        kelvin = valor;
        break;
    default:
        printf("Medida inválida");
        break;
    }

    printf("Celsius: %.2f\n", celsios);
    printf("Farenheit: %.2f\n", farenheit);
    printf("Kelvin: %.2f\n", kelvin);

    return 0;
}