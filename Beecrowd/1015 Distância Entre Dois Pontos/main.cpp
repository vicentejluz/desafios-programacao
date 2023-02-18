#include <iostream>
#include <math.h>
using namespace std;

int main() {

    double x1, x2, y1, y2, Distancia;

    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;

    Distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << fixed;
    cout.precision(4);
    cout << Distancia << endl;

    return 0;
}