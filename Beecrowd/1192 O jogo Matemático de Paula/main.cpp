#include <iostream>

using namespace std;

int main()
{
    int N, i, cal;
    string c;

    cin >> N;

    for (i = 0; i < N; i++)
    {
        cin >> c;

        if (c[0] == c[2])
            cal = atoi(&c[0]) * atoi(&c[2]);
        else if (islower(c[1]))
            cal = atoi(&c[0]) + atoi(&c[2]);
        else
            cal = atoi(&c[2]) - atoi(&c[0]);

        cout << cal << endl;
    }

    return 0;
}