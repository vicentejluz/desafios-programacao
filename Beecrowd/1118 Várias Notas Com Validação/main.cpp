#include <iostream>

using namespace std;

double entradaValidacao();

int main()
{
    double x, y, media;
    int opc;

    while (true)
    {

        x = entradaValidacao();
        y = entradaValidacao();

        media = (x + y) / 2;

        printf("media = %.2lf\n", media);

        do
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &opc);
        } while (opc != 1 and opc != 2);

        if (opc == 2)
            break;
    }

    return 0;
}

double entradaValidacao()
{
    double val;
    do
    {
        cin >> val;
        if (val < 0.0 or val > 10.0)
            cout << "nota invalida" << endl;
    } while (val < 0.0 or val > 10.0);

    return val;
}