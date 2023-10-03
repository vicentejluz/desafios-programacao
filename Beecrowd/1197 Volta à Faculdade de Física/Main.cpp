#include <iostream>

using namespace std;

int main()
{
    int v, t, dobro;

    while (cin >> v >> t)
    {
        dobro = (v * t) * 2;

        cout << dobro << endl;
    }
    return 0;
}