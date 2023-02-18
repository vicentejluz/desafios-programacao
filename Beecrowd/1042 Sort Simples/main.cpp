#include <iostream>

using namespace std;

int main() {

    int X, Y, Z, menor, meio, maior;

    cin >> X;
    cin >> Y;
    cin >> Z;

    if (X < Y && X < Z)
        menor = X;
    else if (X > Y && X > Z)
        maior = X;
    else
        meio = X;
    if (Y < X && Y < Z)
        menor = Y;
    else if (Y > X && Y > Z)
        maior = Y;
    else
        meio = Y;
    if (Z < X && Z < Y)
        menor = Z;
    else if (Z > X && Z > Y)
        maior = Z;
    else
        meio = Z;

    cout << menor << endl;
    cout << meio << endl;
    cout << maior << endl << endl;
    cout << X << endl;
    cout << Y << endl;
    cout << Z << endl;

    return 0;
}