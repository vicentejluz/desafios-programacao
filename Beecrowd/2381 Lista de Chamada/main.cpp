#include <iostream>
#include <string>

using namespace std;

void BubbleSort(string nome[], int pTam);

int main()
{
    int k, n;

    cin >> k >> n;

    string nome[k];

    for (int i = 0; i < k; i++)
        cin >> nome[i];

    BubbleSort(nome, k);

    cout << nome[n - 1] << endl;

    return 0;
}

void BubbleSort(string nome[], int pTam)
{
    bool trocou;
    string aux;
    do
    {
        trocou = false;
        for (int i = 0; i < pTam - 1; i++)
        {
            if (nome[i].compare(nome[i + 1]) > 0)
            {
                aux = nome[i];
                nome[i] = nome[i + 1];
                nome[i + 1] = aux;
                trocou = true;
            }
        }
    } while (trocou);
}