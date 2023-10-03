#include <iostream>
#include <cmath>

using namespace std;

bool EPrimo(int pX);

int main()
{
    int n, x;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;

        if (EPrimo(x))
            cout << "Prime" << endl;
        else
            cout << "Not Prime" << endl;
    }

    return 0;
}

bool EPrimo(int pX)
{
    int i;
    double raiz;
    if (pX == 2)
        return true;
    else if (pX % 2 == 0)
        return false;
    else
    {
        i = 3;
        raiz = sqrt(pX);
        while (i <= raiz)
        {
            if (pX % i == 0)
                return false;
            i = i + 2;
        }
    }
    return true;
}