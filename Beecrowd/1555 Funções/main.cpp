#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int N, i, x, y, r, b, c, maior;

    cin >> N;

    for (i = 0; i < N; i++)
    {
        cin >> x >> y;
        r = pow(3 * x, 2) + pow(y, 2);
        b = (2 * pow(x, 2)) + pow(5 * y, 2);
        c = (-100 * x) + pow(y, 3);
        if (r > b && r > c)
            maior = r;
        else if (b > r && b > c)
            maior = b;
        else
            maior = c;

        if (maior == r)
            cout << "Rafael ganhou" << endl;
        else if (maior == b)
            cout << "Beto ganhou" << endl;
        else
            cout << "Carlos ganhou" << endl;
    }

    return 0;
}