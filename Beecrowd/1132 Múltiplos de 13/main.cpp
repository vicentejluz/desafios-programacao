#include <iostream>

using namespace std;

int main()
{

    int X, Y, aux, i, soma = 0;

    cin >> X >> Y;

    if (X > Y)
    {
        aux = X;
        X = Y;
        Y = aux;
    }

    for (i = X; i <= Y; i++)
    {
        if (i % 13 != 0)
        {
            soma += i;
        }
    }

    cout << soma << endl;

    return 0;
}