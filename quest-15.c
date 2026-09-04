#include <stdio.h>

int score(int p1, int p2, int p3)
{
    if ((p1 >= p2 && p1 <= p3) || (p1 >= p3 && p1 <= p2))
    {
        return p1;
    }
    else if ((p2 >= p1 && p2 <= p3) || (p2 >= p3 && p2 <= p1))
    {
        return p2;
    }
    else
    {
        return p3;
    }
}

int main()
{
    int a1, a2, a3, a4, a5, a6, a7, a8, a9;
    int b1, b2, b3, b4, b5, b6, b7, b8, b9;
    int dia1A, dia2A, dia3A, dia1B, dia2B, dia3B;

    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &b1, &b2, &b3, &b4, &b5, &b6, &b7, &b8, &b9);

    // Scores do atleta A
    dia1A = score(a1, a2, a3);
    dia2A = score(a4, a5, a6);
    dia3A = score(a7, a8, a9);

    // Scores do atleta B
    dia1B = score(b1, b2, b3);
    dia2B = score(b4, b5, b6);
    dia3B = score(b7, b8, b9);

    if (score(dia1A, dia2A, dia3A) == score(dia1B, dia2B, dia3B))
    {
        printf("empate");
        return 0;
    }

    (score(dia1A, dia2A, dia3A) > score(dia1B, dia2B, dia3B)) ? printf("A") : printf("B");

    return 0;
}