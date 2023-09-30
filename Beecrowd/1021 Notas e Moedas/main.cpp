#include <iostream>

using namespace std;

int main()
{

    int aux;
    double notas;

    cin >> notas;
    int n = notas;
    int moedas = (notas - n) * 100;

    if ((moedas * 1000) % 10 == 9)
    {
        moedas++;
    }

    cout << "NOTAS:" << endl;
    cout << n / 100 << " nota(s) de R$ 100.00" << endl;
    aux = (n % 100);

    cout << aux / 50 << " nota(s) de R$ 50.00" << endl;
    aux = (aux % 50);

    cout << aux / 20 << " nota(s) de R$ 20.00" << endl;
    aux = (aux % 20);

    cout << aux / 10 << " nota(s) de R$ 10.00" << endl;
    aux = (aux % 10);

    cout << aux / 5 << " nota(s) de R$ 5.00" << endl;
    aux = (aux % 5);

    cout << aux / 2 << " nota(s) de R$ 2.00" << endl;
    aux = (aux % 2);

    cout << "MOEDAS:" << endl;
    cout << aux << " moeda(s) de R$ 1.00" << endl;
    moedas = (moedas % 100);

    cout << moedas / 50 << " moeda(s) de R$ 0.50" << endl;
    moedas = (moedas % 50);

    cout << moedas / 25 << " moeda(s) de R$ 0.25" << endl;
    moedas = (moedas % 25);

    cout << moedas / 10 << " moeda(s) de R$ 0.10" << endl;
    moedas = (moedas % 10);

    cout << moedas / 5 << " moeda(s) de R$ 0.05" << endl;
    moedas = (moedas % 5);

    cout << moedas << " moeda(s) de R$ 0.01" << endl;

    return 0;
}