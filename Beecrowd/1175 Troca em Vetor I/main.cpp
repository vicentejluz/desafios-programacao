#include <iostream>

using namespace std;

int main()
{
    const int TAM = 20;
    int n[TAM];

    for (int i = 0; i < TAM; i++)
        cin >> n[i];

    for (int i = TAM - 1, j = 0; i >= 0; i--, j++)
        cout << "N[" << j << "] = " << n[i] << endl;

    return 0;
}