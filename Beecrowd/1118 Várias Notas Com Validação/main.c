#include <stdio.h>

int main()
{
    double x, y, media;
    int opc;

    while (1)
    {

        do
        {
            scanf("%lf", &x);
            if (x < 0.0 || x > 10.0)
                printf("nota invalida\n");
        } while (x < 0.0 || x > 10.0);

        do
        {
            scanf("%lf", &y);
            if (y < 0 || y > 10)
                printf("nota invalida\n");
        } while (y < 0 || y > 10);

        media = (x + y) / 2;

        printf("media = %.2lf\n", media);

        do
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &opc);
        } while (opc != 1 && opc != 2);

        if (opc == 2)
            break;
    }

    return 0;
}