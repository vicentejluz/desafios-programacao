#include <iostream>

using namespace std;

int obtemPosMenor(int a, int b, int c, int d, int e);

int main()
{
    int n, a, b, c, d, e;
    int cont, posMenor;

    while (true)
    {
        cin >> n;

        if (n == 0)
            break;

        for (int i = 0; i < n; i++)
        {
            cont = 0;
            cin >> a >> b >> c >> d >> e;
            if (a > 127 and b > 127 and c > 127 and d > 127 and e > 127)
                cont = 2;
            if (a <= 127)
                cont++;
            if (b <= 127)
                cont++;
            if (c <= 127)
                cont++;
            if (d <= 127)
                cont++;
            if (e <= 127)
                cont++;

            if (cont > 1)
                cout << "*" << endl;
            else
            {
                posMenor = obtemPosMenor(a, b, c, d, e);
                if (posMenor == 0)
                    cout << "A" << endl;
                else if (posMenor == 1)
                    cout << "B" << endl;
                else if (posMenor == 2)
                    cout << "C" << endl;
                else if (posMenor == 3)
                    cout << "D" << endl;
                else if (posMenor == 4)
                    cout << "E" << endl;
            }
        }
    }
    return 0;
}

int obtemPosMenor(int a, int b, int c, int d, int e)
{
    int v[] = {a, b, c, d, e};

    int menor = v[0], pos = 0;

    for (int i = 0; i < 5; i++)
    {
        if (v[i] < menor)
        {
            menor = v[i];
            pos = i;
        }
    }
    return pos;
}
