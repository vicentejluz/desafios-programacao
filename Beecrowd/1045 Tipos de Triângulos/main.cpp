#include <iostream>

using namespace std;

int main() {

    double A, B, C, temp;

    cin >> A;
    cin >> B;
    cin >> C;

    if (A < B) {
        temp = A;
        A = B;
        B = temp;
    }

    if (B < C) {
        temp = B;
        B = C;
        C = temp;
    }

    if (A < B) {
        temp = A;
        A = B;
        B = temp;
    }

    if (A >= B + C)
        cout << "NAO FORMA TRIANGULO" << endl;

    else if (A * A == B * B + C * C)
        cout << "TRIANGULO RETANGULO" << endl;

    else if (A * A > B * B + C * C)
        cout << "TRIANGULO OBTUSANGULO" << endl;

    else if (A * A < B * B + C * C)
        cout << "TRIANGULO ACUTANGULO" << endl;

    if (A == B && B == C)
        cout << "TRIANGULO EQUILATERO" << endl;

    else if (A == B || B == C)
        cout << "TRIANGULO ISOSCELES" << endl;

    return 0;
}