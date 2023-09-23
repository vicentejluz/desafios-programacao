#include <iostream>
#include <iomanip>

using namespace std;

void BubbleSort(int *PV, int PTam);

int main()
{
    int n;

    while (cin >> n)
    {
        int cod[n];
        for (int i = 0; i < n; i++)
            cin >> cod[i];

        BubbleSort(cod, n);

        for (int i = 0; i < n; i++)
            cout << setfill('0') << setw(4) << cod[i] << endl;
    }

    return 0;
}

void BubbleSort(int *PV, int PTam)
{
    int i, Trocou, aux;
    do
    {
        Trocou = 0;
        for (i = 0; i < PTam - 1; i++)
            if (PV[i] > PV[i + 1])
            {
                aux = PV[i];
                PV[i] = PV[i + 1];
                PV[i + 1] = aux;
                Trocou = 1;
            }
    } while (Trocou);
}