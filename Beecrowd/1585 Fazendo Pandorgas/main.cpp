#include <iostream>

using namespace std;

int main()
{
    int N, i, x, y, cm;

    cin >> N;

    for (i = 0; i < N; i++)
    {
        cin >> x >> y;
        cm = x * y / 2;

        cout << cm << " cm2" << endl;
    }

    return 0;
}