#include <iostream>

using namespace std;

int main() {

    double A, B, C, Per, Ar;

    cin >> A >> B >> C;

    if (((B - C) < A and A < (B + C)) and ((A - C) < B and B < (A + C)) and ((A - B) < C and C < (A + B))) {
        Per = A + B + C;
        cout << fixed;
        cout.precision(1);
        cout << "Perimetro = " << Per << endl;
    }
    else {
        Ar = ((A + B) * C) / 2;
        cout << fixed;
        cout.precision(1);
        cout << "Area = " << Ar << endl;
    }

    return 0;
}