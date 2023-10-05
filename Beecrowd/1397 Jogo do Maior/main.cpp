#include <iostream>

using namespace std;

int main()
{
    int N, i, A, B, contA, contB;

    do
    {
        cin >> N;
        if (N != 0)
        {
            contA = 0;
            contB = 0;
            for (i = 0; i < N; i++)
            {
                cin >> A >> B;
                if (A > B)
                    contA++;
                else if (A < B)
                    contB++;
            }
            cout << contA << " " << contB << endl;
        }
    } while (N != 0);
    return 0;
}