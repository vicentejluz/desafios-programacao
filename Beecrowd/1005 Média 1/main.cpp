#include <iostream>

using namespace std;

int main() {

    double A, B, MEDIA;

    cin >> A;
    cin >> B;

    MEDIA = (A * 3.5 + B * 7.5) / (3.5 + 7.5);
    cout << fixed;
    cout.precision(5);
    cout << "MEDIA = " << MEDIA << endl;

    return 0;
}