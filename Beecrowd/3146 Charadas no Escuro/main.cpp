#include <iostream>
 
using namespace std;
 
int main() {
 
    const float PI = 3.14;
    double r, c;

    cin >> r;

    c = 2 * PI * r;

    cout << fixed;
    cout.precision(2);
    cout << c << endl;
 
    return 0;
}