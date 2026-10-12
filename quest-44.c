#include <stdio.h>
#include <ctype.h>
#include <string.h>

typedef struct
{
    float x;
    float y;
} tCoordenada;

float dist(tCoordenada p1, tCoordenada p2)
{
    float d;

    d = sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
    return d;
}

int main()
{
    tCoordenada x, y;

    scanf("%f", &x.x);
    scanf("%f", &x.y);

    scanf("%f", &y.x);
    scanf("%f", &y.y);

    printf("Distância: %.2f", dist(x, y));

    return 0;
}