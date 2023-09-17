#include <iostream>

using namespace std;

int main()
{
    int n, m, p;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> m;

        string produtos[m];
        double precos[m], total = 0;
        for (int j = 0; j < m; j++)
        {
            cin >> produtos[j] >> precos[j];
        }
        cin >> p;
        string produtosComprados[p];
        int quantidades[p];
        for (int j = 0; j < p; j++)
        {
            cin >> produtosComprados[j] >> quantidades[j];

            for (int k = 0; k < m; k++)
            {
                if (produtosComprados[j] == produtos[k])
                {
                    total += precos[k] * quantidades[j];
                }
            }
        }
        cout << fixed;
        cout.precision(2);
        cout << "R$ " << total << endl;
    }

    return 0;
}