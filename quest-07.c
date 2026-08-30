#include <stdio.h>
#include <math.h>

int main()
{
    double num, mediaA = 0.0, mediaG = 1.0, mediaH = 0.0, erro_harmonica, erro_geometrica, erro_medio;

    for (int i = 0; i < 10; i++)
    {
        scanf("%lf", &num);

        mediaA = mediaA + num;
        mediaG = mediaG * num;
        mediaH = mediaH + pow(num, -1);
    }

    mediaA = mediaA / 10;
    mediaG = pow(mediaG, 1.0 / 10.0);
    mediaH = 10 / mediaH;

    erro_harmonica = (mediaH - mediaA) / mediaA;
    erro_geometrica = (mediaG - mediaA) / mediaA;
    erro_medio = (erro_harmonica + erro_geometrica) / 2;

    printf("Média aritmética é %.2lf\n", mediaA);
    printf("Média harmônica é %.2lf\n", mediaH);
    printf("Média geométrica é %.2lf\n", mediaG);
    printf("Erro médio é %.2lf %\n", erro_medio * 100);

    return 0;
}