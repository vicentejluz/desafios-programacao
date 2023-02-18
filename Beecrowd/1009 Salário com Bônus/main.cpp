#include <iostream>

using namespace std;

int main() {

    char nome[10];
    double salario, totalV, TOTAL;

    cin >> nome;
    cin >> salario;
    cin >> totalV;

    TOTAL = salario + totalV * 0.15;

    cout << fixed;
    cout.precision(2);
    cout << "TOTAL = R$ " << TOTAL << endl;

    return 0;
}