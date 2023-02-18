#include <iostream>

using namespace std;

int main()
{
    int n, x, y, maior, menor, soma;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;

        menor = x;
        maior = y;

        if (x > y)
        {
            menor = y;
            maior = x;
        }

        soma = 0;
        for (int j = menor + 1; j < maior; j++)
        {
            if (j % 2 != 0)
                soma += j;
        }
        cout << soma << endl;
    }

    return 0;
}