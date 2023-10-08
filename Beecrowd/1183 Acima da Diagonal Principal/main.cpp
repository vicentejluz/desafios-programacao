#include <iostream>

using namespace std;

int main()
{
    const int TAM = 12;
    double M[TAM][TAM], soma = 0, media = 0;
    int i, j, cont = 0;
    char O;

    do
    {
        cin >> O;
    } while (O != 'S' && O != 'M');

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
            cin >> M[i][j];
    }
    for (i = 0; i < TAM; i++)
    {
        for (j = i + 1; j < TAM; j++)
        {
            soma += M[i][j];
            cont++;
        }
    }

    if (O == 'S')
        cout << soma << endl;
    else
    {
        media = soma / cont;
        cout << media << endl;
    }

    return 0;
}