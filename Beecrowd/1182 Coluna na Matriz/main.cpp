#include <iostream>

using namespace std;

int main()
{
    const int TAM = 12;
    double M[TAM][TAM], soma = 0, media = 0;
    int i, j, C;
    char T;

    cin >> C;
    do
    {
        cin >> T;
    } while (T != 'S' && T != 'M');

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
            cin >> M[i][j];
    }

    for (i = 0; i < TAM; i++)
        soma += M[i][C];

    cout << fixed;
    cout.precision(1);
    if (T == 'S')
        cout << soma << endl;
    else
    {
        media = soma / TAM;
        cout << media << endl;
    }
    return 0;
}