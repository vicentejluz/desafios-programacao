#include <stdio.h>

int main()
{
    int c[3];
    int f[3];
    int pTotalC;
    int pTotalF;
    int sgC;
    int sgF;
    char camp;

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &c[i]);
        if (i == 0)
            c[i] *= 3;
        if (i == 1)
            pTotalC = c[0] + c[i];
    }
    sgC = c[2];

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &f[i]);
        if (i == 0)
            f[i] *= 3;
        if (i == 1)
            pTotalF = f[0] + f[i];
    }
    sgF = f[2];

    if (pTotalC > pTotalF)
        camp = 'C';
    else if (pTotalF > pTotalC)
        camp = 'F';
    else if (sgC > sgF)
        camp = 'C';
    else if (sgF > sgC)
        camp = 'F';
    else
        camp = '=';

    printf("%c\n", camp);

    return 0;
}