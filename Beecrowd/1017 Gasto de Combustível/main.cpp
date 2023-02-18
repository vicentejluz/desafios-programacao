#include <iostream>

using namespace std;

int main() {

    int T, V;
    double Qtde;

    cin >> T;
    cin >> V;

    Qtde = T * V / 12.0;

    cout << fixed;
    cout.precision(3);
    cout << Qtde << endl;

    return 0;
}