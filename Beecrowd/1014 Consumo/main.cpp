#include <iostream>

using namespace std;

int main() {

    int X;
    float Y;

    cin >> X;
    cin >> Y;

    cout << fixed;
    cout.precision(3);
    cout << X / Y << " km/l" << endl;

    return 0;
}