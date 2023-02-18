#include <iostream>

using namespace std;

int main()
{

    int N;

    cin >> N;

    for (int i = 1; i <= (4 * N - 1); i += 4)
    {
        for (int j = i; j <= i + 2; j++)
        {
            cout << j << " ";
        }
        cout << "PUM" << endl;
    }

    return 0;
}