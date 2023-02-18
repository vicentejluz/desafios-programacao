#include <iostream>
#include <math.h>
using namespace std;
 
int main() {
 
	double A, B, C, pi = 3.14159; 
	double triangulo, circulo, trapezio, quadrado, retangulo;
	
	cin >> A;
    cin >> B;
	cin >> C;
	
	triangulo = A * C / 2;
	circulo = pi * pow(C, 2);
	trapezio = C * (A + B) / 2;
	quadrado = pow(B, 2);
	retangulo = A * B;
	
	cout << fixed;
	cout.precision(3);
	
	cout << "TRIANGULO: " << triangulo << endl;
	cout << "CIRCULO: " << circulo << endl;
	cout << "TRAPEZIO: " << trapezio << endl;
	cout << "QUADRADO: " << quadrado << endl;
	cout << "RETANGULO: " << retangulo << endl;
 
    return 0;
}