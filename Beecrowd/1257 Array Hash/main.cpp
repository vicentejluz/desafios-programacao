#include <iostream>

using namespace std;

int main()
{

    int n, l, soma, pA, elem, pE;
    string str;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> l;
        pA = 0;
        elem = 0;
        pE = 0;
        for (int i = 0; i < l; i++)
        {
            cin >> str;

            for (int j = 0; j < str.size(); j++)
            {
                str[j] = toupper(str[j]);
                pA += str[j] - 65;
                elem += i;
                pE += j;
            }

            soma = pA + elem + pE;
        }
        cout << soma << endl;
    }

    return 0;
}