#include <iostream>

using namespace std;

int main()
{

    int Vp[5], Vi[5], P = 0, I = 0, j, i, X;

    for (i = 0; i < 15; i++)
    {
        cin >> X;

        if (X % 2 == 0)
        {
            Vp[P] = X;
            P++;
            if (P == 5)
            {
                for (j = 0; j < 5; j++)
                    cout << "par[" << j << "] = " << Vp[j] << endl;
                P = 0;
            }
        }
        else
        {
            Vi[I] = X;
            I++;
            if (I == 5)
            {
                for (j = 0; j < 5; j++)
                    cout << "impar[" << j << "] = " << Vi[j] << endl;
                I = 0;
            }
        }
    }
    for (j = 0; j < I; j++)
        cout << "impar[" << j << "] = " << Vi[j] << endl;
    I = 0;

    for (j = 0; j < P; j++)
        cout << "par[" << j << "] = " << Vp[j] << endl;
    P = 0;

    return 0;
}