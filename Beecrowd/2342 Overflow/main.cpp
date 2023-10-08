#include <iostream>

using namespace std;

int main()
{
    int n, p, q, res;
    char c;

    cin >> n;

    cin >> p >> c >> q;

    res = (c == '+') ? p + q : p * q;

    if (res > n)
        cout << "OVERFLOW" << endl;
    else
        cout << "OK" << endl;

    return 0;
}