#include <iostream>

using namespace std;

int main()
{
    long long int A, B, soma;

    cin >> A >> B;

    // CALCULA PA(intervalo)
    soma = (A + B) * (B - A + 1) / 2;

    cout << soma << endl;

    return 0;
}