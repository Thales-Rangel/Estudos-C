#include <stdio.h>

int main()
{
    // Variáveis C:
    int numero;     // Inteiro
    float numero2;  // Decimal (4 bytes)
    double numero3; // Decimal (8 bytes)
    char letra;     // Caractere

    // Entrada e saída de dados C:
    // Scan formatado: scanf("formato de dado", &variável)
    scanf("%d", &numero);   // Leitura de número inteiro na base 10
    scanf("%i", &numero);   // Leitura de número inteiro em diferentes bases com base no prefixo digitado (0x - Hexadecimal; 0 - Octal; Não tiver - Decimal)
    scanf("%f", &numero2);  // Leitura de número float
    scanf("%lf", &numero3); // Leitura de número double
    scanf("%c", &letra);    // Leitura de caractere

    // múltiplos valores, associação pela ordem dos específicadores:
    scanf("%d %f", &numero, &numero2);

    // Print formatado: printf("texto formatado", variável)
    printf("Os valores lidos foram %d e %f\n", numero, numero2); // Formações iguais aos de leitura

    printf("Linha 1\n\tLinha 2\n"); // Caracteres especiais de formatação: \n - quebra de linha; \t - tabulação

    printf("%.2f \n", numero2);    // Exibe apenas 2 casas decimais
    printf("%7.2lf \n", numero3);  // Exibe o número com largura máxima de 7 caracteres com 2 casas decimais
    printf("%07.2lf \n", numero3); // Exibo o número com largura de 7 com zeros preenchidos a esquerda até completar

    return 0;
}
