#include <iostream>

using namespace std;

int main()
{
    int N, K, num, i, j;

    cin >> N;

    for (i = 0; i < N; i++)
    {
        cin >> K;
        for (j = 0; j < K; j++)
        {
            cin >> num;
            if (num == 1)
                cout << "Rolien" << endl;
            else if (num == 2)
                cout << "Naej" << endl;
            else if (num == 3)
                cout << "Elehcim" << endl;
            else
                cout << "Odranoel" << endl;
        }
    }

    return 0;
}