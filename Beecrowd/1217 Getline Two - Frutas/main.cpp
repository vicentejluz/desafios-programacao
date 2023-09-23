#include <iostream>

using namespace std;

int main()
{
    int n;
    double preco, contPreco = 0, mediaPreco, mediaKiloDia;

    cin >> n;

    string fruta[n];
    int contKilo[n], cont = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> preco;
        cin >> ws; // limpa buffer
        getline(cin, fruta[i]);
        contPreco += preco;

        contKilo[i] = 1;

        // for (char f : fruta[i])
        // {
        //     if (f == ' ')
        //     {
        //         contKilo[i]++;
        //     }
        // }

        for (int j = 0; j < fruta[i].size(); j++)
        {
            if (fruta[i][j] == ' ')
            {
                contKilo[i]++;
            }
        }

        cont += contKilo[i];
        cout << "day " << i + 1 << ": " << contKilo[i] << " kg" << endl;
    }

    mediaPreco = contPreco / n;

    mediaKiloDia = (double)cont / n;

    cout << fixed;
    cout.precision(2);
    cout << mediaKiloDia << " kg by day" << endl;
    cout << "R$ " << mediaPreco << " by day" << endl;

    return 0;
}