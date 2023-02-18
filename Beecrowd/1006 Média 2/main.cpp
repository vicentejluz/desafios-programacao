#include <iostream>

using namespace std;

int main() {

    double A, B, C, MEDIA;

    cin >> A;
    cin >> B;
    cin >> C;

    MEDIA = (A * 2 + B * 3 + C * 5) / (2 + 3 + 5);
    cout << fixed;
    cout.precision(1);
    cout << "MEDIA = " << MEDIA << endl;

    return 0;
}