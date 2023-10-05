#include <iostream>

using namespace std;

int main()
{
    int L, R, soma;

    do
    {
        cin >> L >> R;

        if (L != 0 || R != 0)
        {
            soma = L + R;

            cout << soma << endl;
        }
    } while (L != 0 || R != 0);

    return 0;
}