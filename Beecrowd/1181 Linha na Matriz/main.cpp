#include <iostream>

using namespace std;

int main()
{
    const int TAM = 12;
    double M[TAM][TAM], soma = 0, media = 0;
    int i, j, L;
    char T;

    cin >> L;
    do
    {
        cin >> T;
    } while (T != 'S' && T != 'M');

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
            cin >> M[i][j];
    }

    for (j = 0; j < TAM; j++)
        soma += M[L][j];

    media = soma / TAM;

    cout << fixed;
    cout.precision(1);
    if (T == 'S')
        cout << soma << endl;
    else
        cout << media << endl;

    return 0;
}