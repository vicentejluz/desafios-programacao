#include <iostream>

using namespace std;

long long fatorial(int n);

int main()
{
    long long soma;
    int m, n;

    while (cin >> m >> n)
    {

        soma = fatorial(m) + fatorial(n);

        cout << soma << endl;
    }

    return 0;
}

long long fatorial(int n)
{
    long long f = 1;

    for (int i = n; i >= 1; i--)
        f *= i;

    return f;
}