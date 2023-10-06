#include <iostream>

using namespace std;

int main()
{
    int i, N, T;
    unsigned long long int fibonacci[61];
    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for (i = 2; i <= 60; i++)
        fibonacci[i] = fibonacci[i - 2] + fibonacci[i - 1];

    cin >> T;

    for (i = 0; i < T; i++)
    {
        cin >> N;
        cout << "Fib(" << N << ") = " << fibonacci[N] << endl;
    }
    return 0;
}