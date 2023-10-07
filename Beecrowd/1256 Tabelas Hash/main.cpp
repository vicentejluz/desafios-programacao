#include <iostream>
#include <list>

using namespace std;

class HashTable
{
private:
    list<int> *tab;
    int tam;
    int pos;

public:
    HashTable(int tam)
    {
        this->tam = tam;
        tab = new list<int>[tam];
    }

    void inserirValor(int valor)
    {
        this->pos = funcaoHash(valor);
        tab[pos].push_back(valor);
    }

    void imprimirHash()
    {
        list<int>::iterator it;
        for (int i = 0; i < tam; i++)
        {
            cout << i << " -> ";
            list<int> hash = tab[i];

            if (!hash.empty())
            {
                for (it = hash.begin(); it != hash.end(); it++)
                {
                    if (next(it) != hash.end())
                        cout << *it << " -> ";
                    else
                        cout << *it << " -> \\";
                }
                cout << endl;
            }
            else
                cout << "\\" << endl;
        }
    }

private:
    int funcaoHash(int valor)
    {
        return valor % this->tam;
    }
};

int main()
{
    int n, m, c, valor;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> m >> c;
        HashTable tab = HashTable(m);

        for (int j = 0; j < c; j++)
        {
            cin >> valor;
            tab.inserirValor(valor);
        }

        tab.imprimirHash();
        if (i < n - 1)
            cout << endl;
    }

    return 0;
}