#include <iostream>

using namespace std;

int main()
{

    int B, N, D, C, V, i, j;

    do
    {

        cin >> B;
        cin >> N;

        if (B != 0 && N != 0)
        {
            j = 0;

            int Vx[B];

            for (i = 1; i <= B; i++)
                cin >> Vx[i];

            for (i = 1; i <= N; i++)
            {
                cin >> D;
                cin >> C;
                cin >> V;

                Vx[D] -= V;
                Vx[C] += V;
            }

            for (i = 1; i <= B; i++)
            {
                if (Vx[i] < 0)
                    j = 1;
            }

            if (j == 1)
                cout << "N" << endl;
            else
                cout << "S" << endl;
        }
    } while (B != 0 && N != 0);

    return 0;
}