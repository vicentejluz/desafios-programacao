#include <iostream>
#include <math.h>
using namespace std;

int main() {

    double Raio, pi = 3.14159, VolumeEsfera;

    cin >> Raio;

    VolumeEsfera = (4.0 / 3) * pi * pow(Raio, 3);
    cout << fixed;
    cout.precision(3);
    cout << "VOLUME = " << VolumeEsfera << endl;

    return 0;
}