#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int N, i;

    cin >> N;

    for (i = 1; i <= N; i++)
    {
        cout << i << " " << (i * i) << " " << (i * i * i) << endl;
        cout << i << " " << (i * i + 1) << " " << (i * i * i + 1) << endl;
    }
    return 0;
}