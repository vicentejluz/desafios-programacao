#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float a,b;
    double c, d;

    cin >> a >> b;
    cin >> c >> d;
    
    cout << fixed << "A = " << a << ", " << "B = " << b << endl;
    cout << "C = " << c << ", " << "D = " << d << endl;
    cout << setprecision(1) << "A = " << a << ", " << "B = " << b << endl;
    cout << setprecision(1) << "C = " << c << ", " << "D = " << d << endl;
    cout << setprecision(2) << "A = " << a << ", " << "B = " << b << endl;
    cout << setprecision(2) << "C = " << c << ", " << "D = " << d << endl;
    cout << setprecision(3) << "A = " << a << ", " << "B = " << b << endl;
    cout << setprecision(3) << "C = " << c << ", " << "D = " << d << endl;
    cout << scientific << uppercase << "A = " << a << ", " << "B = " << b << endl; // scientific transforma em notação cientica  com padrao "e" minusculo, para ser com "E" maiusculo usar uppercase
    cout << "C = " << c << ", " << "D = " << d << endl;
    cout << fixed << setprecision(0) << "A = " << a << ", " << "B = " << b << endl;
    cout << setprecision(0) << "C = " << c << ", " << "D = " << d << endl;

    return 0;
}