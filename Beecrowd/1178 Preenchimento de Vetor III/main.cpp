#include <iostream>

using namespace std;

int main()
{

    double N[100], X, Y;
    int i;

    cin >> X;

    N[0] = X;
    for (i = 1; i < 100; i++)
    {
        N[i] = N[i - 1] / 2;
    }
    for (i = 0; i < 100; i++)
    {
        cout << fixed;
        cout.precision(4);
        cout << "N[" << i << "] = " << N[i] << endl;
    }

    return 0;
}