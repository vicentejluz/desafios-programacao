#include <iostream>

using namespace std;

bool ePrimo(int pX);

int main()
{
    int x, n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (ePrimo(x))
            cout << x << " eh primo" << endl;
        else
            cout << x << " nao eh primo" << endl;
    }

    return 0;
}

bool ePrimo(int pX)
{
    for (int i = 2; i < pX; i++)
    {
        if (pX % i == 0)
            return false;
    }
    return true;
}
