#include <iostream>

using namespace std;

int main()
{
    int N, L, i, cont0, cont1;

    do
    {
        cin >> N;

        if (N != 0)
        {
            cont0 = 0;
            cont1 = 0;

            for (i = 0; i < N; i++)
            {
                cin >> L;

                if (L == 0)
                    cont0++;
                if (L == 1)
                    cont1++;
            }
            cout << "Mary won " << cont0 << " times and John won " << cont1 << " times" << endl;
        }
    } while (N != 0);

    return 0;
}