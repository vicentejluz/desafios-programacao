#include <stdio.h>

int main()
{

    int aux;
    double notas;

    scanf("%lf", &notas);
    int n = notas;
    int moedas = (notas - n) * 100;

    if ((moedas * 1000) % 10 == 9)
    {
        moedas++;
    }

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n / 100);
    aux = (n % 100);

    printf("%d nota(s) de R$ 50.00\n", aux / 50);
    aux = (aux % 50);

    printf("%d nota(s) de R$ 20.00\n", aux / 20);
    aux = (aux % 20);

    printf("%d nota(s) de R$ 10.00\n", aux / 10);
    aux = (aux % 10);

    printf("%d nota(s) de R$ 5.00\n", aux / 5);
    aux = (aux % 5);

    printf("%d nota(s) de R$ 2.00\n", aux / 2);
    aux = (aux % 2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", aux);
    moedas = (moedas % 100);

    printf("%d moeda(s) de R$ 0.50\n", moedas / 50);
    moedas = (moedas % 50);

    printf("%d moeda(s) de R$ 0.25\n", moedas / 25);
    moedas = (moedas % 25);

    printf("%d moeda(s) de R$ 0.10\n", moedas / 10);
    moedas = (moedas % 10);

    printf("%d moeda(s) de R$ 0.05\n", moedas / 5);
    moedas = (moedas % 5);

    printf("%d moeda(s) de R$ 0.01\n", moedas / 1);

    return 0;
}