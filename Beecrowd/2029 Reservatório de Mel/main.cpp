#include <iostream>
#include <math.h>

using namespace std;

int main(){
    const double n = 3.14;
    double v, d, alt, area, raio;

    while(cin >> v >> d){
        raio = d / 2;

        area = n * pow(raio, 2);
        alt = v / area;

        cout << fixed;
        cout.precision(2);
        cout << "ALTURA = " << alt << endl;
        cout << "AREA = " << area << endl;
    }

    return 0;
}